
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_irq {int vector; int * res; scalar_t__ requested; int cookie; } ;
struct ena_adapter {int pdev; struct ena_irq* irq_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int,char*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ena_adapter *VAR_4)
{
 struct ena_irq *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->irq_tbl[VAR_2];
 if (VAR_5->requested) {
  FUNC_3(VAR_1 | VAR_0, "tear down irq: %d\n",
      VAR_5->vector);
  VAR_6 = FUNC_1(VAR_4->pdev, VAR_5->res, VAR_5->cookie);
  if (FUNC_4(VAR_6 != 0))
   FUNC_2(VAR_4->pdev, "failed to tear "
       "down irq: %d\n", VAR_5->vector);
  VAR_5->requested = 0;
 }

 if (VAR_5->res != ((void*)0)) {
  FUNC_3(VAR_1 | VAR_0, "release resource irq: %d\n",
      VAR_5->vector);
  VAR_6 = FUNC_0(VAR_4->pdev, VAR_3,
      VAR_5->vector, VAR_5->res);
  VAR_5->res = ((void*)0);
  if (FUNC_4(VAR_6 != 0))
   FUNC_2(VAR_4->pdev, "dev has no parent while "
       "releasing res for irq: %d\n", VAR_5->vector);
 }
}
