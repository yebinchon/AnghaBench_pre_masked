
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct thread {int dummy; } ;
struct spigen_transfer_mmapped {int dummy; } ;
struct spigen_transfer {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;






 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cdev*,struct spigen_transfer*) ;
 int FUNC_5 (struct cdev*,struct spigen_transfer_mmapped*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 device_t VAR_6 = VAR_1->si_drv1;
 int VAR_7;

 switch (VAR_2) {
 case 129:
  VAR_7 = FUNC_4(VAR_1, (struct spigen_transfer *)VAR_3);
  break;
 case 128:
  VAR_7 = FUNC_5(VAR_1, (struct spigen_transfer_mmapped *)VAR_3);
  break;
 case 133:
  VAR_7 = FUNC_0(VAR_6, (uint32_t *)VAR_3);
  break;
 case 131:
  VAR_7 = FUNC_2(VAR_6, *(uint32_t *)VAR_3);
  break;
 case 132:
  VAR_7 = FUNC_1(VAR_6, (uint32_t *)VAR_3);
  break;
 case 130:
  VAR_7 = FUNC_3(VAR_6, *(uint32_t *)VAR_3);
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 return (VAR_7);
}
