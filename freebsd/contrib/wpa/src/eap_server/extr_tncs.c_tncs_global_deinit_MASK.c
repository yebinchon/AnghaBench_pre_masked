
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {struct tnc_if_imv* next; struct tnc_if_imv* imv; } ;


 int FUNC_0 (struct tnc_if_imv*) ;
 struct tnc_if_imv* VAR_0 ;
 int FUNC_1 (struct tnc_if_imv*) ;

void FUNC_2(void)
{
 struct tnc_if_imv *VAR_1, *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = VAR_0->imv;
 while (VAR_1) {
  FUNC_1(VAR_1);

  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 FUNC_0(VAR_0);
 VAR_0 = ((void*)0);
}
