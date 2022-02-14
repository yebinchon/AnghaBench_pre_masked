
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct thread {int dummy; } ;
struct nvdimm_spa_dev {int spa_len; } ;
struct cdev {struct nvdimm_spa_dev* si_drv1; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5,
    struct thread *VAR_6)
{
 struct nvdimm_spa_dev *VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->si_drv1;
 VAR_8 = 0;
 switch (VAR_3) {
 case 128:
  *(u_int *)VAR_4 = VAR_0;
  break;
 case 129:
  *(off_t *)VAR_4 = VAR_7->spa_len;
  break;
 default:
  VAR_8 = VAR_1;
  break;
 }
 return (VAR_8);
}
