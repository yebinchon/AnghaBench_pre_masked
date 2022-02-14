
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; int nid; int fsid; int gid; int uid; int mode; } ;
struct TYPE_6__ {TYPE_1__ attr32; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,char*,int) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_9(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_7(VAR_1, VAR_2->id, "attribute", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, "mode");
  FUNC_3(VAR_1, VAR_2->tt.attr32.mode, "%o");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "uid");
  FUNC_8(VAR_1, VAR_2->tt.attr32.uid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "gid");
  FUNC_6(VAR_1, VAR_2->tt.attr32.gid, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "fsid");
  FUNC_3(VAR_1, VAR_2->tt.attr32.fsid, "%u");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "nodeid");
  FUNC_4(VAR_1, VAR_2->tt.attr32.nid, "%lld");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "device");
  FUNC_3(VAR_1, VAR_2->tt.attr32.dev, "%u");
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.attr32.mode, "%o");
  FUNC_5(VAR_1, VAR_3);
  FUNC_8(VAR_1, VAR_2->tt.attr32.uid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.attr32.gid, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.attr32.fsid, "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2->tt.attr32.nid, "%lld");
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.attr32.dev, "%u");
 }
}
