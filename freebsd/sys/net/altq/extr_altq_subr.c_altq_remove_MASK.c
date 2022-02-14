
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_altq {scalar_t__* qname; int scheduler; } ;







 int VAR_0 ;
 int FUNC_0 (struct pf_altq*) ;
 int FUNC_1 (struct pf_altq*) ;
 int FUNC_2 (struct pf_altq*) ;
 int FUNC_3 (struct pf_altq*) ;
 int FUNC_4 (struct pf_altq*) ;
 int FUNC_5 (struct pf_altq*) ;

int
FUNC_6(struct pf_altq *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->qname[0] != 0)
  return (FUNC_0(VAR_1));

 switch (VAR_1->scheduler) {
 default:
  VAR_2 = VAR_0;
 }

 return (VAR_2);
}
