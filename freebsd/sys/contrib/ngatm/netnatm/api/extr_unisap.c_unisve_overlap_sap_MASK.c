
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_sap {int bhli; int blli_id3; int blli_id2; int selector; int addr; } ;


 int FUNC_0 (struct uni_sap const*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

int
FUNC_6(const struct uni_sap *VAR_0, const struct uni_sap *VAR_1)
{
 int VAR_2, VAR_3;





 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_3)
  return (1);
  if(VAR_2 || VAR_3)
  return (0);

 return (FUNC_1(&VAR_0->addr, &VAR_1->addr) &&
     FUNC_5(&VAR_0->selector, &VAR_1->selector) &&
     FUNC_3(&VAR_0->blli_id2, &VAR_1->blli_id2) &&
     FUNC_4(&VAR_0->blli_id3, &VAR_1->blli_id3) &&
     FUNC_2(&VAR_0->bhli, &VAR_1->bhli));
}
