
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xferq {int rsel; int q; } ;
struct fw_drv1 {struct fw_xferq* ir; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int fw_proc ;


 scalar_t__ FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (struct cdev*,int,int *) ;
 int FUNC_3 (int *,int *) ;

int
FUNC_4(struct cdev *VAR_4, int VAR_5, fw_proc *VAR_6)
{
 struct fw_xferq *VAR_7;
 int VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4, VAR_5, VAR_6);

 VAR_7 = ((struct fw_drv1 *)VAR_4->si_drv1)->ir;
 VAR_8 = 0;
 VAR_9 = VAR_0 | VAR_2;
 if (VAR_5 & VAR_9) {
  if (FUNC_1(&VAR_7->q) != ((void*)0))
   VAR_8 |= VAR_9;
  else
   FUNC_3(VAR_6, &VAR_7->rsel);
 }
 VAR_9 = VAR_1 | VAR_3;
 if (VAR_5 & VAR_9) {

  VAR_8 |= VAR_9;
 }

 return VAR_8;
}
