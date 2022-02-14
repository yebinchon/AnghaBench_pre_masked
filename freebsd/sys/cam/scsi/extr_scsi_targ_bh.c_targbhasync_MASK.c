
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int path_id; } ;
struct ccb_pathinq {int target_sprt; TYPE_1__ ccb_h; } ;
struct cam_periph {int dummy; } ;
struct cam_path {int dummy; } ;
typedef int path_id_t ;
typedef scalar_t__ cam_status ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,char*,int ,struct cam_path*,void (*) (void*,int,struct cam_path*,void*),int const,struct ccb_pathinq*) ;
 struct cam_periph* FUNC_1 (struct cam_path*,char*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_5 (struct cam_path*) ;
 int FUNC_6 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8, u_int32_t VAR_9,
     struct cam_path *VAR_10, void *VAR_11)
{
 struct cam_path *VAR_12;
 struct ccb_pathinq *VAR_13;
 path_id_t VAR_14;
 cam_status VAR_15;

 VAR_13 = (struct ccb_pathinq *)VAR_11;
 if (VAR_9 == 128)
  VAR_14 = VAR_13->ccb_h.path_id;
 else
  VAR_14 = FUNC_6(VAR_10);




 VAR_15 = FUNC_4(&VAR_12, ((void*)0),
     VAR_14,
     VAR_3, VAR_0);
 if (VAR_15 != VAR_2) {
  FUNC_3("targbhasync: Unable to create path "
   "due to status 0x%x\n", VAR_15);
  return;
 }

 switch (VAR_9) {
 case 128:
 {

  if ((VAR_13->target_sprt & VAR_4) == 0)
   break;

  VAR_15 = FUNC_0(VAR_5, ((void*)0), VAR_6,
       VAR_7,
       "targbh", VAR_1,
       VAR_12, FUNC_7,
       128,
       VAR_13);
  break;
 }
 case 129:
 {
  struct cam_periph *VAR_16;

  if ((VAR_16 = FUNC_1(VAR_12, "targbh")) != ((void*)0))
   FUNC_2(VAR_16);
  break;
 }
 default:
  break;
 }
 FUNC_5(VAR_12);
}
