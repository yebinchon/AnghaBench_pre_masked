
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int r_addr; int atype; int r_port; int l_addr; int l_port; int type; int domain; } ;
struct TYPE_6__ {TYPE_1__ socket_ex32; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{







 FUNC_8(VAR_1, VAR_2->id, "socket", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_3(VAR_1, "sock_dom");
  FUNC_4(VAR_1, VAR_2->tt.socket_ex32.domain, "%#x");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "sock_type");
  FUNC_4(VAR_1, VAR_2->tt.socket_ex32.type, "%#x");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "lport");
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.socket_ex32.l_port), "%#x");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "laddr");
  FUNC_7(VAR_1, VAR_2->tt.socket_ex32.atype,
      VAR_2->tt.socket_ex32.l_addr);
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "faddr");
  FUNC_7(VAR_1, VAR_2->tt.socket_ex32.atype,
      VAR_2->tt.socket_ex32.r_addr);
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "fport");
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.socket_ex32.r_port), "%#x");
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_6(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2->tt.socket_ex32.domain, "%#x");
  FUNC_6(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2->tt.socket_ex32.type, "%#x");
  FUNC_6(VAR_1, VAR_3);
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.socket_ex32.l_port), "%#x");
  FUNC_6(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_2->tt.socket_ex32.atype,
      VAR_2->tt.socket_ex32.l_addr);
  FUNC_6(VAR_1, VAR_3);
  FUNC_5(VAR_1, FUNC_2(VAR_2->tt.socket_ex32.r_port), "%#x");
  FUNC_6(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_2->tt.socket_ex32.atype,
      VAR_2->tt.socket_ex32.r_addr);
 }
}
