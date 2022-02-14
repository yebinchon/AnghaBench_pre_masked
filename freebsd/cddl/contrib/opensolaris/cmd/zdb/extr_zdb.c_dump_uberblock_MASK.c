
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ub_checkpoint_txg; int ub_rootbp; scalar_t__ ub_timestamp; scalar_t__ ub_guid_sum; scalar_t__ ub_txg; scalar_t__ ub_version; scalar_t__ ub_magic; } ;
typedef TYPE_1__ uberblock_t ;
typedef char const* u_longlong_t ;
typedef scalar_t__ time_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_4(uberblock_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 time_t VAR_5 = VAR_2->ub_timestamp;

 (void) FUNC_2("%s", VAR_3 ? VAR_3 : "");
 (void) FUNC_2("\tmagic = %016llx\n", (u_longlong_t)VAR_2->ub_magic);
 (void) FUNC_2("\tversion = %llu\n", (u_longlong_t)VAR_2->ub_version);
 (void) FUNC_2("\ttxg = %llu\n", (u_longlong_t)VAR_2->ub_txg);
 (void) FUNC_2("\tguid_sum = %llu\n", (u_longlong_t)VAR_2->ub_guid_sum);
 (void) FUNC_2("\ttimestamp = %llu UTC = %s",
     (u_longlong_t)VAR_2->ub_timestamp, FUNC_0(FUNC_1(&VAR_5)));
 if (VAR_1['u'] >= 3) {
  char VAR_6[VAR_0];
  FUNC_3(VAR_6, sizeof (VAR_6), &VAR_2->ub_rootbp);
  (void) FUNC_2("\trootbp = %s\n", VAR_6);
 }
 (void) FUNC_2("\tcheckpoint_txg = %llu\n",
     (u_longlong_t)VAR_2->ub_checkpoint_txg);
 (void) FUNC_2("%s", VAR_4 ? VAR_4 : "");
}
