
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct parse {int dummy; } ;
struct info_mem_stats {scalar_t__* hashcount; int demobilizations; int allocations; int findpeer_calls; int freepeermem; int totalpeermem; int timereset; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,int *,size_t*,size_t*,void*,int ,int) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(
 struct parse *VAR_6,
 FILE *VAR_7
 )
{
 struct info_mem_stats *VAR_8;
 int VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 int VAR_12;

again:
 VAR_12 = FUNC_2(VAR_5, VAR_4, 0, 0, 0, ((void*)0), &VAR_10,
        &VAR_11, (void *)&VAR_8, 0, sizeof(*VAR_8));

 if (VAR_12 == VAR_2 && VAR_5 == VAR_0) {
  VAR_5 = VAR_1;
  goto again;
 }

 if (VAR_12 != 0)
  return;

 if (!FUNC_0(VAR_10, VAR_7))
  return;

 if (!FUNC_1(VAR_11, sizeof(*VAR_8)))
  return;

 FUNC_3(VAR_7, "time since reset:     %lu\n",
  (u_long)FUNC_4(VAR_8->timereset));
 FUNC_3(VAR_7, "total peer memory:    %u\n",
  (u_int)FUNC_5(VAR_8->totalpeermem));
 FUNC_3(VAR_7, "free peer memory:     %u\n",
  (u_int)FUNC_5(VAR_8->freepeermem));
 FUNC_3(VAR_7, "calls to findpeer:    %lu\n",
  (u_long)FUNC_4(VAR_8->findpeer_calls));
 FUNC_3(VAR_7, "new peer allocations: %lu\n",
  (u_long)FUNC_4(VAR_8->allocations));
 FUNC_3(VAR_7, "peer demobilizations: %lu\n",
  (u_long)FUNC_4(VAR_8->demobilizations));

 FUNC_3(VAR_7, "hash table counts:   ");
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_3(VAR_7, "%4d", (int)VAR_8->hashcount[VAR_9]);
  if ((VAR_9 % 8) == 7 && VAR_9 != (VAR_3-1))
   FUNC_3(VAR_7, "\n                     ");
 }
 FUNC_3(VAR_7, "\n");
}
