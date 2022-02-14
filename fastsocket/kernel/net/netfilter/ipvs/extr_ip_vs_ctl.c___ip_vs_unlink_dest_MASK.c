
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_service {TYPE_1__* scheduler; int num_dests; } ;
struct ip_vs_dest {int n_list; int flags; } ;
struct TYPE_2__ {int (* update_service ) (struct ip_vs_service*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_vs_service*) ;

__attribute__((used)) static void FUNC_2(struct ip_vs_service *VAR_1,
    struct ip_vs_dest *VAR_2,
    int VAR_3)
{
 VAR_2->flags &= ~VAR_0;




 FUNC_0(&VAR_2->n_list);
 VAR_1->num_dests--;




 if (VAR_3 && VAR_1->scheduler->update_service)
   VAR_1->scheduler->update_service(VAR_1);
}
