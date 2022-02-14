
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_5__ {int istate; int self; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;

 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(struct ssh *VAR_1, Channel *VAR_2)
{
 FUNC_2("channel %d: rcvd eow", VAR_2->self);
 switch (VAR_2->istate) {
 case 128:
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_2, VAR_0);
  break;
 }
}
