
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_7__ {int type; int sock; int output; int self; int input; } ;
typedef TYPE_1__ Channel ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct ssh*,TYPE_1__*,char*) ;
 int FUNC_6 (int ) ;
 int* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct ssh *VAR_1, Channel *VAR_2,
    fd_set *VAR_3, fd_set *VAR_4)
{
 const u_char *VAR_5;
 u_int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_2->input);
 FUNC_4("channel %d: pre_dynamic: have %d", VAR_2->self, VAR_6);


 if (VAR_6 < 3) {

  FUNC_0(VAR_2->sock, VAR_3);
  return;
 }

 VAR_5 = FUNC_7(VAR_2->input);

 switch (VAR_5[0]) {
 case 0x04:
  VAR_7 = FUNC_2(VAR_2, VAR_2->input, VAR_2->output);
  break;
 case 0x05:
  VAR_7 = FUNC_3(VAR_2, VAR_2->input, VAR_2->output);
  break;
 default:
  VAR_7 = -1;
  break;
 }
 if (VAR_7 < 0) {
  FUNC_1(VAR_1, VAR_2);
 } else if (VAR_7 == 0) {
  FUNC_4("channel %d: pre_dynamic: need more", VAR_2->self);

  FUNC_0(VAR_2->sock, VAR_3);
  if (FUNC_6(VAR_2->output))
   FUNC_0(VAR_2->sock, VAR_4);
 } else {

  VAR_2->type = VAR_0;
  FUNC_5(VAR_1, VAR_2, "direct-tcpip");
 }
}
