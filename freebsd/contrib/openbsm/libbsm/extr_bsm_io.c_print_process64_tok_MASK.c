
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int addr; int port; } ;
struct TYPE_7__ {TYPE_1__ tid; int sid; int pid; int rgid; int ruid; int egid; int euid; int auid; } ;
struct TYPE_8__ {TYPE_2__ proc64; } ;
struct TYPE_9__ {TYPE_3__ tt; int id; } ;
typedef TYPE_4__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,char*,int) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_10(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{
 FUNC_8(VAR_1, VAR_2->id, "process", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, "audit-uid");
  FUNC_9(VAR_1, VAR_2->tt.proc64.auid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "uid");
  FUNC_9(VAR_1, VAR_2->tt.proc64.euid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "gid");
  FUNC_6(VAR_1, VAR_2->tt.proc64.egid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "ruid");
  FUNC_9(VAR_1, VAR_2->tt.proc64.ruid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "rgid");
  FUNC_6(VAR_1, VAR_2->tt.proc64.rgid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "pid");
  FUNC_3(VAR_1, VAR_2->tt.proc64.pid, "%u");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "sid");
  FUNC_3(VAR_1, VAR_2->tt.proc64.sid, "%u");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "tid");
  FUNC_4(VAR_1, VAR_2->tt.proc64.tid.port, "%llu");
  FUNC_7(VAR_1, VAR_2->tt.proc64.tid.addr);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_5(VAR_1, VAR_3);
  FUNC_9(VAR_1, VAR_2->tt.proc64.auid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_9(VAR_1, VAR_2->tt.proc64.euid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.proc64.egid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_9(VAR_1, VAR_2->tt.proc64.ruid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.proc64.rgid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.proc64.pid, "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.proc64.sid, "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2->tt.proc64.tid.port, "%llu");
  FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_2->tt.proc64.tid.addr);
 }
}
