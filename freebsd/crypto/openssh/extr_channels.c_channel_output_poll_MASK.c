
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh_channels {size_t channels_alloc; TYPE_1__** channels; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct TYPE_4__ {scalar_t__ type; int flags; scalar_t__ istate; scalar_t__ extended_usage; int self; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ssh*,TYPE_1__*) ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(struct ssh *VAR_7)
{
 struct ssh_channels *VAR_8 = VAR_7->chanctxt;
 Channel *VAR_9;
 u_int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_8->channels_alloc; VAR_10++) {
  VAR_9 = VAR_8->channels[VAR_10];
  if (VAR_9 == ((void*)0))
   continue;





  if (VAR_9->type != VAR_6)
   continue;
  if ((VAR_9->flags & (VAR_1|VAR_0))) {

   FUNC_2("channel %d: will not send data after close",
       VAR_9->self);
   continue;
  }


  if (VAR_9->istate == VAR_4 ||
      VAR_9->istate == VAR_5)
   FUNC_1(VAR_7, VAR_9);

  if (!(VAR_9->flags & VAR_2) &&
      VAR_9->extended_usage == VAR_3)
   FUNC_0(VAR_7, VAR_9);
 }
}
