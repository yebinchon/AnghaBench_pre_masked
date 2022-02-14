
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_dest {int refcnt; int n_list; int port; int addr; int af; TYPE_1__* svc; int stats; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct ip_vs_dest*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ip_vs_dest*) ;
 int FUNC_9 (struct ip_vs_dest*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct ip_vs_dest *VAR_2)
{
 FUNC_7(&VAR_2->stats);




 FUNC_12(&VAR_0);
 FUNC_8(VAR_2);
 FUNC_13(&VAR_0);






 if (FUNC_3(&VAR_2->refcnt)) {
  FUNC_6(VAR_2);





  FUNC_2(&VAR_2->svc->refcnt);
  FUNC_9(VAR_2);
 } else {
  FUNC_1(3, "Moving dest %s:%u into trash, "
         "dest->refcnt=%d\n",
         FUNC_0(VAR_2->af, &VAR_2->addr),
         FUNC_11(VAR_2->port),
         FUNC_5(&VAR_2->refcnt));
  FUNC_10(&VAR_2->n_list, &VAR_1);
  FUNC_4(&VAR_2->refcnt);
 }
}
