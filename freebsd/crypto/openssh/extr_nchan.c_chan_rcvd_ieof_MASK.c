
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_6__ {scalar_t__ ostate; int output; int flags; int self; } ;
typedef TYPE_1__ Channel ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(struct ssh *VAR_3, Channel *VAR_4)
{
 FUNC_3("channel %d: rcvd eof", VAR_4->self);
 VAR_4->flags |= VAR_0;
 if (VAR_4->ostate == VAR_1)
  FUNC_2(VAR_4, VAR_2);
 if (VAR_4->ostate == VAR_2 &&
     FUNC_4(VAR_4->output) == 0 &&
     !FUNC_0(VAR_4))
  FUNC_1(VAR_3, VAR_4);
}
