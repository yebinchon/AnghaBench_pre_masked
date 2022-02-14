
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq {scalar_t__ res; int rid; scalar_t__ tag; } ;
struct adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct irq*,int) ;

__attribute__((used)) static int
FUNC_3(struct adapter *VAR_1, struct irq *VAR_2)
{
 if (VAR_2->tag)
  FUNC_1(VAR_1->dev, VAR_2->res, VAR_2->tag);
 if (VAR_2->res)
  FUNC_0(VAR_1->dev, VAR_0, VAR_2->rid, VAR_2->res);

 FUNC_2(VAR_2, sizeof(*VAR_2));

 return (0);
}
