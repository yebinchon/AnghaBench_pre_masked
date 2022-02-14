
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ccb_getdev {int inq_data; int protocol; } ;
struct cam_periph {int dummy; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,char*,int ,struct cam_path*,void (*) (void*,int,struct cam_path*,void*),int const,struct ccb_getdev*) ;
 int FUNC_3 (struct cam_periph*,int,struct cam_path*,void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_10, u_int32_t VAR_11, struct cam_path *VAR_12, void *VAR_13)
{
 struct cam_periph *VAR_14;

 VAR_14 = (struct cam_periph *)VAR_10;

 switch(VAR_11) {
 case 128:
 {
  struct ccb_getdev *VAR_15;
  cam_status VAR_16;

  VAR_15 = (struct ccb_getdev *)VAR_13;
  if (VAR_15 == ((void*)0))
   break;

  if (VAR_15->protocol != VAR_3)
   break;
  if (FUNC_0(&VAR_15->inq_data) != VAR_4)
   break;
  if (FUNC_1(&VAR_15->inq_data)!= VAR_5)
   break;






  VAR_16 = FUNC_2(VAR_8, VAR_7,
       VAR_6, VAR_9, "ch",
       VAR_0, VAR_12,
       FUNC_5, 128, VAR_15);

  if (VAR_16 != VAR_1
   && VAR_16 != VAR_2)
   FUNC_4("chasync: Unable to probe new device "
          "due to status 0x%x\n", VAR_16);

  break;

 }
 default:
  FUNC_3(VAR_14, VAR_11, VAR_12, VAR_13);
  break;
 }
}
