
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_6__ {scalar_t__ istate; scalar_t__ ostate; int wfd; int output; int input; int rfd; int mux_pause; } ;
typedef TYPE_1__ Channel ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (struct ssh*,TYPE_1__*) ;
 int FUNC_3 (struct ssh*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ssh *VAR_5,
    Channel *VAR_6, fd_set *VAR_7, fd_set *VAR_8)
{
 if (VAR_6->istate == VAR_0 && !VAR_6->mux_pause &&
     FUNC_4(VAR_6->input, VAR_4) == 0)
  FUNC_0(VAR_6->rfd, VAR_7);
 if (VAR_6->istate == VAR_1) {

  FUNC_6(VAR_6->input);
  FUNC_1(VAR_5, VAR_6);

  FUNC_3(VAR_5, VAR_6);
 }
 if (VAR_6->ostate == VAR_2 ||
     VAR_6->ostate == VAR_3) {
  if (FUNC_5(VAR_6->output) > 0)
   FUNC_0(VAR_6->wfd, VAR_8);
  else if (VAR_6->ostate == VAR_3)
   FUNC_2(VAR_5, VAR_6);
 }
}
