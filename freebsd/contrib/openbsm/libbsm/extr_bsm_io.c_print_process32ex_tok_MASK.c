
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int addr; int type; int port; } ;
struct TYPE_7__ {TYPE_1__ tid; int sid; int pid; int rgid; int ruid; int egid; int euid; int auid; } ;
struct TYPE_8__ {TYPE_2__ proc32_ex; } ;
struct TYPE_9__ {TYPE_3__ tt; int id; } ;
typedef TYPE_4__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,char*,int) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_9(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_7(VAR_1, VAR_2->id, "process_ex", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, "audit-uid");
  FUNC_8(VAR_1, VAR_2->tt.proc32_ex.auid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "uid");
  FUNC_8(VAR_1, VAR_2->tt.proc32_ex.euid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "gid");
  FUNC_5(VAR_1, VAR_2->tt.proc32_ex.egid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "ruid");
  FUNC_8(VAR_1, VAR_2->tt.proc32_ex.ruid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "rgid");
  FUNC_5(VAR_1, VAR_2->tt.proc32_ex.rgid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "pid");
  FUNC_3(VAR_1, VAR_2->tt.proc32_ex.pid, "%u");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "sid");
  FUNC_3(VAR_1, VAR_2->tt.proc32_ex.sid, "%u");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "tid");
  FUNC_3(VAR_1, VAR_2->tt.proc32_ex.tid.port, "%u");
  FUNC_6(VAR_1, VAR_2->tt.proc32_ex.tid.type,
      VAR_2->tt.proc32_ex.tid.addr);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_4(VAR_1, VAR_3);
  FUNC_8(VAR_1, VAR_2->tt.proc32_ex.auid, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_8(VAR_1, VAR_2->tt.proc32_ex.euid, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_5(VAR_1, VAR_2->tt.proc32_ex.egid, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_8(VAR_1, VAR_2->tt.proc32_ex.ruid, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_5(VAR_1, VAR_2->tt.proc32_ex.rgid, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.proc32_ex.pid, "%u");
  FUNC_4(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.proc32_ex.sid, "%u");
  FUNC_4(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.proc32_ex.tid.port, "%u");
  FUNC_4(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.proc32_ex.tid.type,
      VAR_2->tt.proc32_ex.tid.addr);
 }
}
