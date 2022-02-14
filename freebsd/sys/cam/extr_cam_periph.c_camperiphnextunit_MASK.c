
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int target_id_t ;
struct periph_driver {char* driver_name; int units; } ;
struct cam_periph {int unit_number; int path; } ;
typedef int path_id_t ;
typedef int lun_id_t ;


 struct cam_periph* FUNC_0 (int *) ;
 struct cam_periph* FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (int*,char const*,int*,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,int,char*,int*) ;
 scalar_t__ FUNC_4 (char const*,int,char*,char const**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static u_int
FUNC_7(struct periph_driver *VAR_1, u_int VAR_2, int VAR_3,
    path_id_t VAR_4, target_id_t VAR_5, lun_id_t VAR_6)
{
 struct cam_periph *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 const char *VAR_13, *VAR_14;

 VAR_8 = VAR_1->driver_name;
 for (;;VAR_2++) {

  for (VAR_7 = FUNC_0(&VAR_1->units);
       VAR_7 != ((void*)0) && VAR_7->unit_number != VAR_2;
       VAR_7 = FUNC_1(VAR_7, VAR_0))
   ;

  if (VAR_7 != ((void*)0) && VAR_7->unit_number == VAR_2) {
   if (VAR_3 != 0) {
    FUNC_6(VAR_7->path, "Duplicate Wired "
        "Device entry!\n");
    FUNC_6(VAR_7->path, "Second device (%s "
        "device at scbus%d target %d lun %d) will "
        "not be wired\n", VAR_8, VAR_4,
        VAR_5, VAR_6);
    VAR_3 = 0;
   }
   continue;
  }
  if (VAR_3)
   break;






  VAR_9 = 0;
  VAR_13 = VAR_8;
  for (;;) {
   VAR_12 = FUNC_2(&VAR_9, VAR_13, &VAR_11, ((void*)0), ((void*)0));
   if (VAR_12 != 0)
    break;

   if (FUNC_3(VAR_13, VAR_11, "target", &VAR_10) &&
       (FUNC_4(VAR_13, VAR_11, "at",&VAR_14)||
        FUNC_5(VAR_14, "scbus") == 0))
    continue;
   if (VAR_2 == VAR_11)
    break;
  }
  if (VAR_12 != 0)
   break;
 }
 return (VAR_2);
}
