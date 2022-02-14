
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int vmbus_chans; int vmbus_chan_lock; } ;
struct vmbus_channel {int ch_stflags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vmbus_channel*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct vmbus_softc *VAR_3, struct vmbus_channel *VAR_4)
{

 FUNC_2(&VAR_3->vmbus_chan_lock, VAR_0);
 if (FUNC_1(&VAR_4->ch_stflags,
     VAR_1) == 0)
  FUNC_3("channel is not on the list");
 FUNC_0(&VAR_3->vmbus_chans, VAR_4, VAR_2);
}
