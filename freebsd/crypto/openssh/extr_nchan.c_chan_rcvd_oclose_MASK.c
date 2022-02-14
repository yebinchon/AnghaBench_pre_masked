
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_7__ {int flags; scalar_t__ type; int ostate; int istate; int self; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ssh*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct ssh*,TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(struct ssh *VAR_6, Channel *VAR_7)
{
 FUNC_4("channel %d: rcvd close", VAR_7->self);
 if (!(VAR_7->flags & VAR_2)) {
  if (VAR_7->flags & VAR_0)
   FUNC_5("channel %d: protocol error: close rcvd twice",
       VAR_7->self);
  VAR_7->flags |= VAR_0;
 }
 if (VAR_7->type == VAR_5) {

  FUNC_2(VAR_7, VAR_3);
  FUNC_1(VAR_7, VAR_1);
  return;
 }
 switch (VAR_7->ostate) {
 case 128:




  FUNC_2(VAR_7, VAR_4);
  break;
 }
 switch (VAR_7->istate) {
 case 130:
  FUNC_3(VAR_6, VAR_7);
  FUNC_1(VAR_7, VAR_1);
  break;
 case 129:
  if (!(VAR_7->flags & VAR_2))
   FUNC_0(VAR_6, VAR_7);
  FUNC_1(VAR_7, VAR_1);
  break;
 }
}
