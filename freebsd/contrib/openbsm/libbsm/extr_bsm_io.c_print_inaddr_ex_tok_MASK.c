
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; int type; } ;
struct TYPE_6__ {TYPE_1__ inaddr_ex; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_3(VAR_1, VAR_2->id, "ip addr ex", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, VAR_2->tt.inaddr_ex.type,
      VAR_2->tt.inaddr_ex.addr);
  FUNC_0(VAR_1, VAR_2->id);
 } else {
  FUNC_1(VAR_1, VAR_3);
  FUNC_2(VAR_1, VAR_2->tt.inaddr_ex.type,
      VAR_2->tt.inaddr_ex.addr);
 }
}
