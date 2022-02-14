
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int pr_type; int pr_protocol; int * pr_usrreqs; int * pr_drain; int * pr_slowtimo; int * pr_fasttimo; int * pr_init; int * pr_ctloutput; int * pr_ctlinput; int * pr_output; int * pr_input; scalar_t__ pr_flags; struct domain* pr_domain; } ;
struct domain {struct protosw* dom_protoswNPROTOSW; struct protosw* dom_protosw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 struct domain* FUNC_2 (int) ;

int
FUNC_3(int VAR_7, int VAR_8, int VAR_9)
{
 struct domain *VAR_10;
 struct protosw *VAR_11, *VAR_12;


 if (VAR_7 == 0)
  return (VAR_1);
 if (VAR_8 == 0)
  return (VAR_2);
 if (VAR_9 == 0)
  return (VAR_3);


 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_12 = ((void*)0);


 FUNC_0(&VAR_5);


 for (VAR_11 = VAR_10->dom_protosw; VAR_11 < VAR_10->dom_protoswNPROTOSW; VAR_11++) {
  if ((VAR_11->pr_type == VAR_9) && (VAR_11->pr_protocol == VAR_8)) {
   if (VAR_12 != ((void*)0)) {
    FUNC_1(&VAR_5);
    return (VAR_0);
   } else
    VAR_12 = VAR_11;
  }
 }


 if (VAR_12 == ((void*)0)) {
  FUNC_1(&VAR_5);
  return (VAR_2);
 }


 VAR_12->pr_type = 0;
 VAR_12->pr_domain = VAR_10;
 VAR_12->pr_protocol = VAR_4;
 VAR_12->pr_flags = 0;
 VAR_12->pr_input = ((void*)0);
 VAR_12->pr_output = ((void*)0);
 VAR_12->pr_ctlinput = ((void*)0);
 VAR_12->pr_ctloutput = ((void*)0);
 VAR_12->pr_init = ((void*)0);
 VAR_12->pr_fasttimo = ((void*)0);
 VAR_12->pr_slowtimo = ((void*)0);
 VAR_12->pr_drain = ((void*)0);
 VAR_12->pr_usrreqs = &VAR_6;


 FUNC_1(&VAR_5);

 return (0);
}
