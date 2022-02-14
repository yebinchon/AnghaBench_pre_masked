
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpo_data {int * sim; int vpo_io; scalar_t__ vpo_isplus; } ;
struct ppb_data {int ppc_lock; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct vpo_data* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,char*,struct vpo_data*,int ,int ,int,int ,struct cam_devq*) ;
 int FUNC_2 (int *,int ) ;
 struct cam_devq* FUNC_3 (int) ;
 int FUNC_4 (struct cam_devq*) ;
 int FUNC_5 (int ) ;
 struct ppb_data* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_5)
{
 struct vpo_data *VAR_6 = FUNC_0(VAR_5);
 device_t VAR_7 = FUNC_5(VAR_5);
 struct ppb_data *VAR_8 = FUNC_6(VAR_7);
 struct cam_devq *VAR_9;
 int VAR_10;


 if (VAR_6->vpo_isplus) {
  if ((VAR_10 = FUNC_8(&VAR_6->vpo_io)))
   return (VAR_10);
 } else {
  if ((VAR_10 = FUNC_11(&VAR_6->vpo_io)))
   return (VAR_10);
 }





 VAR_9 = FUNC_3( 1);

 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_6->sim = FUNC_1(VAR_3, VAR_4, "vpo", VAR_6,
     FUNC_7(VAR_5), VAR_8->ppc_lock,
                 1, 0, VAR_9);
 if (VAR_6->sim == ((void*)0)) {
  FUNC_4(VAR_9);
  return (VAR_1);
 }

 FUNC_9(VAR_7);
 if (FUNC_12(VAR_6->sim, VAR_5, 0) != VAR_0) {
  FUNC_2(VAR_6->sim, VAR_2);
  FUNC_10(VAR_7);
  return (VAR_1);
 }
 FUNC_10(VAR_7);

 return (0);
}
