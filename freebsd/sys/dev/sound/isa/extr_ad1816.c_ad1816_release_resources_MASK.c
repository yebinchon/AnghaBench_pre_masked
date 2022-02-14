
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad1816_info {scalar_t__ lock; scalar_t__ parent_dmat; int * io_base; int io_rid; int * drq2; int drq2_rid; int * drq1; int drq1_rid; int * irq; int irq_rid; scalar_t__ ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (struct ad1816_info*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct ad1816_info *VAR_4, device_t VAR_5)
{
     if (VAR_4->irq) {
     if (VAR_4->ih)
   FUNC_2(VAR_5, VAR_4->irq, VAR_4->ih);
  FUNC_1(VAR_5, VAR_3, VAR_4->irq_rid, VAR_4->irq);
  VAR_4->irq = ((void*)0);
     }
     if (VAR_4->drq1) {
  FUNC_4(FUNC_5(VAR_4->drq1));
  FUNC_1(VAR_5, VAR_1, VAR_4->drq1_rid, VAR_4->drq1);
  VAR_4->drq1 = ((void*)0);
     }
     if (VAR_4->drq2) {
  FUNC_4(FUNC_5(VAR_4->drq2));
  FUNC_1(VAR_5, VAR_1, VAR_4->drq2_rid, VAR_4->drq2);
  VAR_4->drq2 = ((void*)0);
     }
     if (VAR_4->io_base) {
  FUNC_1(VAR_5, VAR_2, VAR_4->io_rid, VAR_4->io_base);
  VAR_4->io_base = ((void*)0);
     }
     if (VAR_4->parent_dmat) {
  FUNC_0(VAR_4->parent_dmat);
  VAR_4->parent_dmat = 0;
     }
 if (VAR_4->lock)
  FUNC_6(VAR_4->lock);

      FUNC_3(VAR_4, VAR_0);
}
