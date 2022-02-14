
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct al_eth_irq {int requested; int * res; int vector; int cookie; int data; int handler; } ;
struct al_eth_adapter {int flags; int irq_vecs; int dev; struct al_eth_irq* irq_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ,int ,int *,unsigned long) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int,int ,int *,int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct al_eth_adapter *VAR_7)
{
 unsigned long VAR_8;
 struct al_eth_irq *VAR_9;
 int VAR_10 = 0, VAR_11, VAR_12;

 if ((VAR_7->flags & VAR_0) != 0)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_4 | VAR_5;

 for (VAR_11 = 0; VAR_11 < VAR_7->irq_vecs; VAR_11++) {
  VAR_9 = &VAR_7->irq_tbl[VAR_11];

  if (VAR_9->requested != 0)
   continue;

  VAR_9->res = FUNC_0(VAR_7->dev, VAR_6,
      &VAR_9->vector, VAR_8);
  if (VAR_9->res == ((void*)0)) {
   FUNC_4(VAR_7->dev, "could not allocate "
       "irq vector=%d\n", VAR_9->vector);
   VAR_10 = VAR_1;
   goto exit_res;
  }

  if ((VAR_10 = FUNC_2(VAR_7->dev, VAR_9->res,
      VAR_3 | VAR_2, VAR_9->handler,
      ((void*)0), VAR_9->data, &VAR_9->cookie)) != 0) {
   FUNC_4(VAR_7->dev, "failed to register "
       "interrupt handler for irq %ju: %d\n",
       (uintmax_t)FUNC_6(VAR_9->res), VAR_10);
   goto exit_intr;
  }
  VAR_9->requested = 1;
 }
 goto exit;

exit_intr:
 VAR_12 = VAR_11 - 1;
 while (VAR_12-- >= 0) {
  int VAR_13;
  VAR_9 = &VAR_7->irq_tbl[VAR_12];
  VAR_13 = FUNC_3(VAR_7->dev, VAR_9->res, VAR_9->cookie);
  if (VAR_13 != 0) {
   FUNC_4(VAR_7->dev, "failed to tear "
       "down irq: %d\n", VAR_9->vector);
  }

  VAR_9->requested = 0;
  FUNC_5(VAR_7->dev, "exit_intr: releasing irq %d\n",
      VAR_9->vector);
 }

exit_res:
 VAR_12 = VAR_11 - 1;
 while (VAR_12-- >= 0) {
  int VAR_14;
  VAR_9 = &VAR_7->irq_tbl[VAR_12];
  FUNC_5(VAR_7->dev, "exit_res: releasing resource"
      " for irq %d\n", VAR_9->vector);
  VAR_14 = FUNC_1(VAR_7->dev, VAR_6,
      VAR_9->vector, VAR_9->res);
  if (VAR_14 != 0)
   FUNC_4(VAR_7->dev, "dev has no parent while "
       "releasing res for irq: %d\n", VAR_9->vector);
  VAR_9->res = ((void*)0);
 }

exit:
 return (VAR_10);
}
