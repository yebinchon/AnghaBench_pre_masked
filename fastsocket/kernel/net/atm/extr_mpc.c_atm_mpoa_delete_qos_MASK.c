
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_mpoa_qos {struct atm_mpoa_qos* next; } ;


 int FUNC_0 (struct atm_mpoa_qos*) ;
 struct atm_mpoa_qos* VAR_0 ;

int FUNC_1(struct atm_mpoa_qos *VAR_1)
{

 struct atm_mpoa_qos *VAR_2;

 if (VAR_1 == ((void*)0)) return 0;
 if (VAR_1 == VAR_0) {
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
  return 1;
 }

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->next == VAR_1) {
   VAR_2->next = VAR_1->next;
   FUNC_0(VAR_1);
   return 1;
  }
  VAR_2 = VAR_2->next;
 }

 return 0;
}
