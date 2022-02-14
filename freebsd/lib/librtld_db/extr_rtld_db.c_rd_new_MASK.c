
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct proc_handle {int dummy; } ;
struct TYPE_7__ {int rda_procstat; struct proc_handle* rda_php; } ;
typedef TYPE_1__ rd_agent_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

rd_agent_t *
FUNC_5(struct proc_handle *VAR_1)
{
 rd_agent_t *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_2, 0, sizeof(rd_agent_t));
 VAR_2->rda_php = VAR_1;
 VAR_2->rda_procstat = FUNC_2();

 if (FUNC_4(VAR_2) != VAR_0) {
  FUNC_3(VAR_2);
  VAR_2 = ((void*)0);
 }
 return (VAR_2);
}
