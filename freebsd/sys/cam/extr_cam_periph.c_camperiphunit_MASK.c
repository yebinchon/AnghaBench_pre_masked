
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int target_id_t ;
struct periph_driver {char* driver_name; } ;
typedef int pathbuf ;
typedef int path_id_t ;
typedef int lun_id_t ;


 int FUNC_0 (struct periph_driver*,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (int*,char const*,int*,int *,int *) ;
 scalar_t__ FUNC_2 (char const*,int,char*,int*) ;
 scalar_t__ FUNC_3 (char const*,int,char*,char const**) ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static u_int
FUNC_6(struct periph_driver *VAR_0, path_id_t VAR_1,
       target_id_t VAR_2, lun_id_t VAR_3)
{
 u_int VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 const char *VAR_9, *VAR_10;
 char VAR_11[32], *VAR_12;

 VAR_12 = VAR_0->driver_name;
 FUNC_4(VAR_11, sizeof(VAR_11), "scbus%d", VAR_1);
 VAR_4 = 0;
 VAR_6 = 0;
 VAR_9 = VAR_12;
 for (VAR_5 = 0; FUNC_1(&VAR_6, VAR_9, &VAR_8, ((void*)0), ((void*)0)) == 0;
      VAR_5 = 0) {
  if (FUNC_3(VAR_9, VAR_8, "at", &VAR_10) == 0) {
   if (FUNC_5(VAR_10, VAR_11) != 0)
    continue;
   VAR_5++;
  }
  if (FUNC_2(VAR_9, VAR_8, "target", &VAR_7) == 0) {
   if (VAR_7 != VAR_2)
    continue;
   VAR_5++;
  }
  if (FUNC_2(VAR_9, VAR_8, "lun", &VAR_7) == 0) {
   if (VAR_7 != VAR_3)
    continue;
   VAR_5++;
  }
  if (VAR_5 != 0) {
   VAR_4 = VAR_8;
   break;
  }
 }







 VAR_4 = FUNC_0(VAR_0, VAR_4, VAR_5, VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
