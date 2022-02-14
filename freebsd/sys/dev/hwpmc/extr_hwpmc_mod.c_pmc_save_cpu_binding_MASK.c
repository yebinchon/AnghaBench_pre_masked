
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pmc_binding {int pb_cpu; int pb_bound; } ;
struct TYPE_5__ {int td_oncpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ,int ,int,char*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct pmc_binding *VAR_3)
{
 FUNC_0(VAR_1,VAR_0,2, "save-cpu");
 FUNC_3(VAR_2);
 VAR_3->pb_bound = FUNC_2(VAR_2);
 VAR_3->pb_cpu = VAR_2->td_oncpu;
 FUNC_4(VAR_2);
 FUNC_1(VAR_1,VAR_0,2, "save-cpu cpu=%d", VAR_3->pb_cpu);
}
