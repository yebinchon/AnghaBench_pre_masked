
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_altq {int scheduler; } ;
 int VAR_0 ;
 int FUNC_0 (struct pf_altq*) ;
 int FUNC_1 (struct pf_altq*) ;
 int FUNC_2 (struct pf_altq*) ;
 int FUNC_3 (struct pf_altq*) ;
 int FUNC_4 (struct pf_altq*) ;

int
FUNC_5(struct pf_altq *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->scheduler) {
 case 129:
  break;
 default:
  VAR_2 = VAR_0;
 }

 return (VAR_2);
}
