
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {scalar_t__ mfi_irq_rid; int mfi_dev; int * mfi_regs_resource; int mfi_regs_rid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mfi_softc *VAR_1)
{

 if (VAR_1->mfi_regs_resource != ((void*)0)) {
  FUNC_0(VAR_1->mfi_dev, VAR_0,
      VAR_1->mfi_regs_rid, VAR_1->mfi_regs_resource);
 }
 if (VAR_1->mfi_irq_rid != 0)
  FUNC_1(VAR_1->mfi_dev);

 return;
}
