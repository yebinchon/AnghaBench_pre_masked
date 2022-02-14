
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_7__ {int rfd; scalar_t__ istate; scalar_t__ (* mux_rcb ) (struct ssh*,TYPE_1__*) ;int self; int input; scalar_t__ mux_pause; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssh*,TYPE_1__*) ;
 int FUNC_3 (struct ssh*,TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int,int) ;
 int FUNC_6 (struct ssh*,TYPE_1__*,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ssh*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(struct ssh *VAR_3, Channel *VAR_4,
    fd_set *VAR_5, fd_set *VAR_6)
{
 u_int VAR_7;

 if (VAR_4->rfd == -1 || !FUNC_0(VAR_4->rfd, VAR_5))
  return;
 if (VAR_4->istate != VAR_1 && VAR_4->istate != VAR_2)
  return;
 if (VAR_4->mux_pause)
  return;





 if (FUNC_6(VAR_3, VAR_4, 4) < 4)
  return;

 VAR_7 = FUNC_1(FUNC_7(VAR_4->input));

 if (VAR_7 > (256 * 1024)) {
  FUNC_5("channel %d: packet too big %u > %u",
      VAR_4->self, (256 * 1024), VAR_7);
  FUNC_3(VAR_3, VAR_4);
  return;
 }
 if (FUNC_6(VAR_3, VAR_4, VAR_7 + 4) < VAR_7 + 4)
  return;
 if (VAR_4->mux_rcb(VAR_3, VAR_4) != 0) {
  FUNC_4("channel %d: mux_rcb failed", VAR_4->self);
  FUNC_2(VAR_3, VAR_4);
  return;
 }
}
