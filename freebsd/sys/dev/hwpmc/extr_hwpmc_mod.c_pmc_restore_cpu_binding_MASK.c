
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pmc_binding {int pb_cpu; scalar_t__ pb_bound; } ;
struct TYPE_6__ {int td_oncpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ,int ,int,char*,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct pmc_binding *VAR_3)
{
 FUNC_1(VAR_1,VAR_0,2, "restore-cpu curcpu=%d restore=%d",
     VAR_2->td_oncpu, VAR_3->pb_cpu);
 FUNC_4(VAR_2);
 if (VAR_3->pb_bound)
  FUNC_2(VAR_2, VAR_3->pb_cpu);
 else
  FUNC_3(VAR_2);
 FUNC_5(VAR_2);
 FUNC_0(VAR_1,VAR_0,2, "restore-cpu done");
}
