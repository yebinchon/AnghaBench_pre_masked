
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; int port; int family; } ;
struct TYPE_6__ {TYPE_1__ sockinet_ex32; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(FILE *VAR_2, tokenstr_t *VAR_3, char *VAR_4, int VAR_5)
{

 FUNC_7(VAR_2, VAR_3->id, "socket-inet6", VAR_5);
 if (VAR_5 & VAR_1) {
  FUNC_3(VAR_2, "type");
  FUNC_4(VAR_2, VAR_3->tt.sockinet_ex32.family, "%u");
  FUNC_0(VAR_2);
  FUNC_3(VAR_2, "port");
  FUNC_4(VAR_2, FUNC_2(VAR_3->tt.sockinet_ex32.port), "%u");
  FUNC_0(VAR_2);
  FUNC_3(VAR_2, "addr");
  FUNC_6(VAR_2, VAR_0, VAR_3->tt.sockinet_ex32.addr);
  FUNC_0(VAR_2);
  FUNC_1(VAR_2, VAR_3->id);
 } else {
  FUNC_5(VAR_2, VAR_4);
  FUNC_4(VAR_2, VAR_3->tt.sockinet_ex32.family, "%u");
  FUNC_5(VAR_2, VAR_4);
  FUNC_4(VAR_2, FUNC_2(VAR_3->tt.sockinet_ex32.port), "%u");
  FUNC_5(VAR_2, VAR_4);
  FUNC_6(VAR_2, VAR_0, VAR_3->tt.sockinet_ex32.addr);
 }
}
