
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct thread {int dummy; } ;
struct nvme_pt_command {int dummy; } ;
struct nvme_namespace {int id; struct nvme_controller* ctrlr; } ;
struct nvme_get_nsid {int nsid; int cdev; } ;
struct nvme_controller {int dev; } ;
struct cdev {struct nvme_namespace* si_drv1; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_controller*,struct nvme_pt_command*,int ,int,int ) ;
 int FUNC_2 (struct nvme_namespace*) ;
 int FUNC_3 (struct nvme_namespace*) ;
 int FUNC_4 (struct nvme_namespace*,int,scalar_t__) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct nvme_namespace *VAR_6;
 struct nvme_controller *VAR_7;
 struct nvme_pt_command *VAR_8;

 VAR_6 = VAR_1->si_drv1;
 VAR_7 = VAR_6->ctrlr;

 switch (VAR_2) {
 case 129:
 case 131:
  FUNC_4(VAR_6, VAR_2, VAR_3);
  break;
 case 128:
  VAR_8 = (struct nvme_pt_command *)VAR_3;
  return (FUNC_1(VAR_7, VAR_8, VAR_6->id,
      1 , 0 ));
 case 130:
 {
  struct nvme_get_nsid *VAR_9 = (struct nvme_get_nsid *)VAR_3;
  FUNC_5(VAR_9->cdev, FUNC_0(VAR_7->dev),
      sizeof(VAR_9->cdev));
  VAR_9->nsid = VAR_6->id;
  break;
 }
 case 133:
  *(off_t *)VAR_3 = (off_t)FUNC_3(VAR_6);
  break;
 case 132:
  *(u_int *)VAR_3 = FUNC_2(VAR_6);
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
