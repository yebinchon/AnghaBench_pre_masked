
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dev; int * msix_res; void* msix_rid; int doorbells; int * regs_res; int mmio_len; int bh; int bt; void* regs_rid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ,void**,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(struct adapter *VAR_4)
{
 VAR_4->regs_rid = FUNC_0(0);
 VAR_4->regs_res = FUNC_1(VAR_4->dev, VAR_3,
     &VAR_4->regs_rid, VAR_2);
 if (VAR_4->regs_res == ((void*)0)) {
  FUNC_2(VAR_4->dev, "cannot map registers.\n");
  return (VAR_1);
 }
 VAR_4->bt = FUNC_4(VAR_4->regs_res);
 VAR_4->bh = FUNC_3(VAR_4->regs_res);
 VAR_4->mmio_len = FUNC_5(VAR_4->regs_res);
 FUNC_6(&VAR_4->doorbells, VAR_0);

 VAR_4->msix_rid = FUNC_0(4);
 VAR_4->msix_res = FUNC_1(VAR_4->dev, VAR_3,
     &VAR_4->msix_rid, VAR_2);
 if (VAR_4->msix_res == ((void*)0)) {
  FUNC_2(VAR_4->dev, "cannot map MSI-X BAR.\n");
  return (VAR_1);
 }

 return (0);
}
