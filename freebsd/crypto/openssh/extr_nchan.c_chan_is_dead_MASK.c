
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ istate; scalar_t__ ostate; scalar_t__ extended_usage; int efd; int flags; int self; int extended; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ssh*,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(struct ssh *VAR_9, Channel *VAR_10, int VAR_11)
{
 if (VAR_10->type == VAR_7) {
  FUNC_1("channel %d: zombie", VAR_10->self);
  return 1;
 }
 if (VAR_10->istate != VAR_3 || VAR_10->ostate != VAR_5)
  return 0;
 if ((VAR_8 & VAR_6) &&
     VAR_10->extended_usage == VAR_2 &&
     VAR_10->efd != -1 &&
     FUNC_2(VAR_10->extended) > 0) {
  FUNC_1("channel %d: active efd: %d len %zu",
      VAR_10->self, VAR_10->efd, FUNC_2(VAR_10->extended));
  return 0;
 }
 if (VAR_10->flags & VAR_4) {
  FUNC_1("channel %d: is dead (local)", VAR_10->self);
  return 1;
 }
 if (!(VAR_10->flags & VAR_1)) {
  if (VAR_11) {
   FUNC_0(VAR_9, VAR_10);
  } else {

   if (VAR_10->flags & VAR_0) {
    FUNC_1("channel %d: almost dead",
        VAR_10->self);
    return 1;
   }
  }
 }
 if ((VAR_10->flags & VAR_1) &&
     (VAR_10->flags & VAR_0)) {
  FUNC_1("channel %d: is dead", VAR_10->self);
  return 1;
 }
 return 0;
}
