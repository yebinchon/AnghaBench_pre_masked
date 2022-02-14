
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int * lock; scalar_t__ parent_dmat; int * gp; int * mpu; int * vc; int * sb; int * io; int * irq; scalar_t__ ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (struct ess_info*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ess_info *VAR_3, device_t VAR_4)
{
     if (VAR_3->irq) {
  if (VAR_3->ih)
   FUNC_3(VAR_4, VAR_3->irq, VAR_3->ih);
  FUNC_2(VAR_4, VAR_2, 0, VAR_3->irq);
  VAR_3->irq = ((void*)0);
     }
     if (VAR_3->io) {
  FUNC_2(VAR_4, VAR_1, FUNC_0(0), VAR_3->io);
  VAR_3->io = ((void*)0);
     }

     if (VAR_3->sb) {
  FUNC_2(VAR_4, VAR_1, FUNC_0(1), VAR_3->sb);
  VAR_3->sb = ((void*)0);
     }

     if (VAR_3->vc) {
  FUNC_2(VAR_4, VAR_1, FUNC_0(2), VAR_3->vc);
  VAR_3->vc = ((void*)0);
     }

     if (VAR_3->mpu) {
  FUNC_2(VAR_4, VAR_1, FUNC_0(3), VAR_3->mpu);
  VAR_3->mpu = ((void*)0);
     }

     if (VAR_3->gp) {
  FUNC_2(VAR_4, VAR_1, FUNC_0(4), VAR_3->gp);
  VAR_3->gp = ((void*)0);
     }

 if (VAR_3->parent_dmat) {
  FUNC_1(VAR_3->parent_dmat);
  VAR_3->parent_dmat = 0;
     }
     FUNC_4(VAR_3, VAR_0);
}
