
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_irq {int requested; int * res; int vector; int cookie; int data; } ;
struct ena_adapter {int pdev; struct ena_irq* irq_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int ,int ,int *,unsigned long) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int,int *,int ,int ,int *) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int VAR_9 ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ena_adapter *VAR_10)
{
 struct ena_irq *VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = VAR_6 | VAR_7;

 VAR_11 = &VAR_10->irq_tbl[VAR_2];
 VAR_11->res = FUNC_0(VAR_10->pdev, VAR_8,
     &VAR_11->vector, VAR_12);

 if (FUNC_6(VAR_11->res == ((void*)0))) {
  FUNC_3(VAR_10->pdev, "could not allocate "
      "irq vector: %d\n", VAR_11->vector);
  return (VAR_3);
 }

 VAR_13 = FUNC_2(VAR_10->pdev, VAR_11->res,
     VAR_5 | VAR_4, ((void*)0), VAR_9,
     VAR_11->data, &VAR_11->cookie);
 if (FUNC_6(VAR_13 != 0)) {
  FUNC_3(VAR_10->pdev, "failed to register "
      "interrupt handler for irq %ju: %d\n",
      FUNC_5(VAR_11->res), VAR_13);
  goto err_res_free;
 }
 VAR_11->requested = 1;

 return (VAR_13);

err_res_free:
 FUNC_4(VAR_1 | VAR_0, "releasing resource for irq %d\n",
     VAR_11->vector);
 VAR_14 = FUNC_1(VAR_10->pdev, VAR_8,
     VAR_11->vector, VAR_11->res);
 if (FUNC_6(VAR_14 != 0))
  FUNC_3(VAR_10->pdev, "dev has no parent while "
      "releasing res for irq: %d\n", VAR_11->vector);
 VAR_11->res = ((void*)0);

 return (VAR_13);
}
