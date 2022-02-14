
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct TYPE_2__ {int nsid; } ;
struct nvme_pt_command {TYPE_1__ cmd; } ;
struct nvme_get_nsid {int nsid; int cdev; } ;
struct nvme_controller {int dev; } ;
struct cdev {struct nvme_controller* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_controller*,struct nvme_pt_command*,int ,int,int) ;
 int FUNC_3 (struct nvme_controller*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct nvme_controller *VAR_6;
 struct nvme_pt_command *VAR_7;

 VAR_6 = VAR_1->si_drv1;

 switch (VAR_2) {
 case 128:
  FUNC_3(VAR_6);
  break;
 case 129:
  VAR_7 = (struct nvme_pt_command *)VAR_3;
  return (FUNC_2(VAR_6, VAR_7, FUNC_1(VAR_7->cmd.nsid),
      1 , 1 ));
 case 130:
 {
  struct nvme_get_nsid *VAR_8 = (struct nvme_get_nsid *)VAR_3;
  FUNC_4(VAR_8->cdev, FUNC_0(VAR_6->dev),
      sizeof(VAR_8->cdev));
  VAR_8->nsid = 0;
  break;
 }
 default:
  return (VAR_0);
 }

 return (0);
}
