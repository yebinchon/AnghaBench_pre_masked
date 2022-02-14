
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq {int rid; int tag; int * res; } ;
struct adapter {int dev; } ;
typedef int driver_intr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int ,char*,char*) ;
 int FUNC_2 (int ,int *,int,int *,int *,void*,int *) ;
 int FUNC_3 (int ,char*,int,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct adapter *VAR_6, struct irq *VAR_7, int VAR_8,
    driver_intr_t *VAR_9, void *VAR_10, char *VAR_11)
{
 int VAR_12;

 VAR_7->rid = VAR_8;
 VAR_7->res = FUNC_0(VAR_6->dev, VAR_5, &VAR_7->rid,
     VAR_4 | VAR_3);
 if (VAR_7->res == ((void*)0)) {
  FUNC_3(VAR_6->dev,
      "failed to allocate IRQ for rid %d, name %s.\n", VAR_8, VAR_11);
  return (VAR_0);
 }

 VAR_12 = FUNC_2(VAR_6->dev, VAR_7->res, VAR_1 | VAR_2,
     ((void*)0), VAR_9, VAR_10, &VAR_7->tag);
 if (VAR_12 != 0) {
  FUNC_3(VAR_6->dev,
      "failed to setup interrupt for rid %d, name %s: %d\n",
      VAR_8, VAR_11, VAR_12);
 } else if (VAR_11)
  FUNC_1(VAR_6->dev, VAR_7->res, VAR_7->tag, "%s", VAR_11);

 return (VAR_12);
}
