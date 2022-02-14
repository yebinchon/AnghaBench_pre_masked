
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pass_softc {int add_physpath_task; } ;
struct ccb_getdev {int dummy; } ;
struct cam_status_entry {char* status_text; } ;
struct cam_periph {scalar_t__ softc; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 struct cam_status_entry* FUNC_0 (int) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (int ,int ,int ,int ,char*,int ,struct cam_path*,void (*) (void*,int,struct cam_path*,void*),int const,struct ccb_getdev*) ;
 int FUNC_3 (struct cam_periph*,int,struct cam_path*,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6(void *VAR_9, u_int32_t VAR_10,
   struct cam_path *VAR_11, void *VAR_12)
{
 struct cam_periph *VAR_13;

 VAR_13 = (struct cam_periph *)VAR_9;

 switch (VAR_10) {
 case 128:
 {
  struct ccb_getdev *VAR_14;
  cam_status VAR_15;

  VAR_14 = (struct ccb_getdev *)VAR_12;
  if (VAR_14 == ((void*)0))
   break;






  VAR_15 = FUNC_2(VAR_6, VAR_5,
       VAR_4, VAR_7, "pass",
       VAR_0, VAR_11,
       FUNC_6, 128, VAR_14);

  if (VAR_15 != VAR_1
   && VAR_15 != VAR_2) {
   const struct cam_status_entry *VAR_16;

   VAR_16 = FUNC_0(VAR_15);

   FUNC_4("passasync: Unable to attach new device "
          "due to status %#x: %s\n", VAR_15, VAR_16 ?
          VAR_16->status_text : "Unknown");
  }

  break;
 }
 case 129:
 {
  uintptr_t VAR_17;

  VAR_17 = (uintptr_t)VAR_12;
  if (VAR_17 == VAR_3) {
   struct pass_softc *VAR_18;

   VAR_18 = (struct pass_softc *)VAR_13->softc;






   if (FUNC_1(VAR_13) != 0)
    break;

   FUNC_5(VAR_8,
       &VAR_18->add_physpath_task);
  }
  break;
 }
 default:
  FUNC_3(VAR_13, VAR_10, VAR_11, VAR_12);
  break;
 }
}
