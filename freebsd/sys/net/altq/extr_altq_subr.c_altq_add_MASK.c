
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_altq {scalar_t__* qname; int scheduler; } ;
struct ifnet {int dummy; } ;







 int VAR_0 ;
 int FUNC_0 (struct pf_altq*) ;
 int FUNC_1 (struct ifnet*,struct pf_altq*) ;
 int FUNC_2 (struct ifnet*,struct pf_altq*) ;
 int FUNC_3 (struct ifnet*,struct pf_altq*) ;
 int FUNC_4 (struct ifnet*,struct pf_altq*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ifnet*,struct pf_altq*) ;

int
FUNC_8(struct ifnet *VAR_2, struct pf_altq *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->qname[0] != 0)
  return (FUNC_0(VAR_3));

 if (VAR_1 == 0)
  FUNC_5();
 if (VAR_1 == 0)
  FUNC_6("altq_add: no cpu clock");

 switch (VAR_3->scheduler) {
 default:
  VAR_4 = VAR_0;
 }

 return (VAR_4);
}
