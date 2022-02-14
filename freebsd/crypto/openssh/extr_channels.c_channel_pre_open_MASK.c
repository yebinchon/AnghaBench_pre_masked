
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_5__ {scalar_t__ istate; scalar_t__ remote_window; int rfd; scalar_t__ ostate; int wfd; int efd; scalar_t__ extended_usage; int flags; int extended; int self; int output; int input; } ;
typedef TYPE_1__ Channel ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct ssh*,TYPE_1__*) ;
 int FUNC_3 (char*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ssh *VAR_10, Channel *VAR_11,
    fd_set *VAR_12, fd_set *VAR_13)
{
 if (VAR_11->istate == VAR_5 &&
     VAR_11->remote_window > 0 &&
     FUNC_5(VAR_11->input) < VAR_11->remote_window &&
     FUNC_4(VAR_11->input, VAR_9) == 0)
  FUNC_1(VAR_11->rfd, VAR_12);
 if (VAR_11->ostate == VAR_7 ||
     VAR_11->ostate == VAR_8) {
  if (FUNC_5(VAR_11->output) > 0) {
   FUNC_1(VAR_11->wfd, VAR_13);
  } else if (VAR_11->ostate == VAR_8) {
   if (FUNC_0(VAR_11))
    FUNC_3("channel %d: "
        "obuf_empty delayed efd %d/(%zu)", VAR_11->self,
        VAR_11->efd, FUNC_5(VAR_11->extended));
   else
    FUNC_2(VAR_10, VAR_11);
  }
 }

 if (VAR_11->efd != -1 && !(VAR_11->istate == VAR_4 &&
     VAR_11->ostate == VAR_6)) {
  if (VAR_11->extended_usage == VAR_3 &&
      FUNC_5(VAR_11->extended) > 0)
   FUNC_1(VAR_11->efd, VAR_13);
  else if (VAR_11->efd != -1 && !(VAR_11->flags & VAR_0) &&
      (VAR_11->extended_usage == VAR_2 ||
      VAR_11->extended_usage == VAR_1) &&
      FUNC_5(VAR_11->extended) < VAR_11->remote_window)
   FUNC_1(VAR_11->efd, VAR_12);
 }

}
