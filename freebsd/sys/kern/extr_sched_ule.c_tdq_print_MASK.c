
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdq {char* tdq_name; int tdq_load; int tdq_switchcnt; int tdq_oldswitchcnt; int tdq_idx; int tdq_ridx; int tdq_transferable; int tdq_lowpri; int tdq_idle; int tdq_timeshare; int tdq_realtime; } ;


 struct tdq* FUNC_0 (int) ;
 int FUNC_1 (struct tdq*) ;
 int FUNC_2 (struct tdq*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;

void
FUNC_5(int VAR_0)
{
 struct tdq *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_3("tdq %d:\n", FUNC_1(VAR_1));
 FUNC_3("\tlock            %p\n", FUNC_2(VAR_1));
 FUNC_3("\tLock name:      %s\n", VAR_1->tdq_name);
 FUNC_3("\tload:           %d\n", VAR_1->tdq_load);
 FUNC_3("\tswitch cnt:     %d\n", VAR_1->tdq_switchcnt);
 FUNC_3("\told switch cnt: %d\n", VAR_1->tdq_oldswitchcnt);
 FUNC_3("\ttimeshare idx:  %d\n", VAR_1->tdq_idx);
 FUNC_3("\ttimeshare ridx: %d\n", VAR_1->tdq_ridx);
 FUNC_3("\tload transferable: %d\n", VAR_1->tdq_transferable);
 FUNC_3("\tlowest priority:   %d\n", VAR_1->tdq_lowpri);
 FUNC_3("\trealtime runq:\n");
 FUNC_4(&VAR_1->tdq_realtime);
 FUNC_3("\ttimeshare runq:\n");
 FUNC_4(&VAR_1->tdq_timeshare);
 FUNC_3("\tidle runq:\n");
 FUNC_4(&VAR_1->tdq_idle);
}
