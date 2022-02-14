
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int type; } ;
struct TYPE_6__ {TYPE_1__ ipc; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_6(VAR_1, VAR_2->id, "IPC", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, "ipc-type");
  FUNC_5(VAR_1, VAR_2->tt.ipc.type, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "ipc-id");
  FUNC_3(VAR_1, VAR_2->tt.ipc.id, "%u");
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_4(VAR_1, VAR_3);
  FUNC_5(VAR_1, VAR_2->tt.ipc.type, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.ipc.id, "%u");
 }
}
