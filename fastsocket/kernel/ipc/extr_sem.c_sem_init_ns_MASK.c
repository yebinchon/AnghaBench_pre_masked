
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {int * ids; scalar_t__ used_sems; int sc_semmni; int sc_semopm; int sc_semmns; int sc_semmsl; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct ipc_namespace *VAR_5)
{
 VAR_5->sc_semmsl = VAR_3;
 VAR_5->sc_semmns = VAR_2;
 VAR_5->sc_semopm = VAR_4;
 VAR_5->sc_semmni = VAR_1;
 VAR_5->used_sems = 0;
 FUNC_0(&VAR_5->ids[VAR_0]);
}
