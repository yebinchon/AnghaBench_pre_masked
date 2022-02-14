
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_7__ {int ostate; int istate; int self; int output; int input; int type; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int FUNC_0 (struct ssh*,TYPE_1__*) ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (struct ssh*,TYPE_1__*) ;
 int FUNC_3 (struct ssh*,TYPE_1__*,int *,int *) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ssh*,int ) ;

__attribute__((used)) static void
FUNC_8(struct ssh *VAR_1, Channel *VAR_2,
    fd_set *VAR_3, fd_set *VAR_4)
{
 int VAR_5 = FUNC_7(VAR_1, VAR_2->output);



 if (VAR_5 == 1) {
  VAR_2->type = VAR_0;
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 } else if (VAR_5 == -1) {
  FUNC_5("X11 connection rejected because of wrong authentication.");
  FUNC_4("X11 rejected %d i%d/o%d",
      VAR_2->self, VAR_2->istate, VAR_2->ostate);
  FUNC_1(VAR_1, VAR_2);
  FUNC_6(VAR_2->input);
  FUNC_0(VAR_1, VAR_2);
  FUNC_6(VAR_2->output);
  FUNC_2(VAR_1, VAR_2);
  FUNC_4("X11 closed %d i%d/o%d", VAR_2->self, VAR_2->istate, VAR_2->ostate);
 }
}
