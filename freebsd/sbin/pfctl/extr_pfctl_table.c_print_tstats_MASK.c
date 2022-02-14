
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct pfr_tstats {int pfrts_flags; int pfrts_cnt; int* pfrts_refcnt; scalar_t__** pfrts_bytes; scalar_t__** pfrts_packets; scalar_t__ pfrts_match; scalar_t__ pfrts_nomatch; int pfrts_t; int pfrts_tzero; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*,...) ;
 char*** VAR_5 ;

void
FUNC_3(struct pfr_tstats *VAR_6, int VAR_7)
{
 time_t VAR_8 = VAR_6->pfrts_tzero;
 int VAR_9, VAR_10;

 if (!VAR_7 && !(VAR_6->pfrts_flags & VAR_4))
  return;
 FUNC_1(&VAR_6->pfrts_t, 1, VAR_7);
 FUNC_2("\tAddresses:   %d\n", VAR_6->pfrts_cnt);
 FUNC_2("\tCleared:     %s", FUNC_0(&VAR_8));
 FUNC_2("\tReferences:  [ Anchors: %-18d Rules: %-18d ]\n",
     VAR_6->pfrts_refcnt[VAR_2],
     VAR_6->pfrts_refcnt[VAR_3]);
 FUNC_2("\tEvaluations: [ NoMatch: %-18llu Match: %-18llu ]\n",
     (unsigned long long)VAR_6->pfrts_nomatch,
     (unsigned long long)VAR_6->pfrts_match);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
   FUNC_2("\t%-12s [ Packets: %-18llu Bytes: %-18llu ]\n",
       VAR_5[VAR_9][VAR_10],
       (unsigned long long)VAR_6->pfrts_packets[VAR_9][VAR_10],
       (unsigned long long)VAR_6->pfrts_bytes[VAR_9][VAR_10]);
}
