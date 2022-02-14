
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_common {struct tcf_common* tcfc_next; } ;
struct tcf_police {scalar_t__ tcfp_P_tab; scalar_t__ tcfp_R_tab; int tcf_rate_est; int tcf_bstats; struct tcf_common* tcf_next; struct tcf_common common; int tcf_index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct tcf_police*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (int ,int ) ;
 struct tcf_common** VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tcf_police *VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_3->tcf_index, VAR_0);
 struct tcf_common **VAR_5;

 for (VAR_5 = &VAR_2[VAR_4]; *VAR_5; VAR_5 = &(*VAR_5)->tcfc_next) {
  if (*VAR_5 == &VAR_3->common) {
   FUNC_5(&VAR_1);
   *VAR_5 = VAR_3->tcf_next;
   FUNC_6(&VAR_1);
   FUNC_1(&VAR_3->tcf_bstats,
        &VAR_3->tcf_rate_est);
   if (VAR_3->tcfp_R_tab)
    FUNC_3(VAR_3->tcfp_R_tab);
   if (VAR_3->tcfp_P_tab)
    FUNC_3(VAR_3->tcfp_P_tab);
   FUNC_2(VAR_3);
   return;
  }
 }
 FUNC_0(1);
}
