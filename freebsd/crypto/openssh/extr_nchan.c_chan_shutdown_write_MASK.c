
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; int sock; int wfd; int self; int output; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ssh*,int *) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ssh *VAR_3, Channel *VAR_4)
{
 FUNC_4(VAR_4->output);
 if (VAR_4->type == VAR_1)
  return;

 FUNC_1("channel %d: close_write", VAR_4->self);
 if (VAR_4->sock != -1) {
  if (FUNC_3(VAR_4->sock, VAR_0) < 0)
   FUNC_1("channel %d: chan_shutdown_write: "
       "shutdown() failed for fd %d: %.100s",
       VAR_4->self, VAR_4->sock, FUNC_5(VAR_2));
 } else {
  if (FUNC_0(VAR_3, &VAR_4->wfd) < 0)
   FUNC_2("channel %d: chan_shutdown_write: "
       "close() failed for fd %d: %.100s",
       VAR_4->self, VAR_4->wfd, FUNC_5(VAR_2));
 }
}
