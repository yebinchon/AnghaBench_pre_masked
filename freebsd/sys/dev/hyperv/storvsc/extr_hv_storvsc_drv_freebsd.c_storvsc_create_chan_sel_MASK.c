
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct storvsc_softc {int hs_nchan; struct vmbus_channel** hs_sel_chan; struct vmbus_channel* hs_chan; } ;


 struct vmbus_channel** FUNC_0 (struct vmbus_channel*,int) ;
 int FUNC_1 (struct vmbus_channel**,int) ;

__attribute__((used)) static void
FUNC_2(struct storvsc_softc *VAR_0)
{
 struct vmbus_channel **VAR_1;
 int VAR_2, VAR_3;

 VAR_0->hs_sel_chan[0] = VAR_0->hs_chan;
 VAR_3 = VAR_0->hs_nchan - 1;
 if (VAR_3 == 0)
  return;

 VAR_1 = FUNC_0(VAR_0->hs_chan, VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_0->hs_sel_chan[VAR_2 + 1] = VAR_1[VAR_2];
 FUNC_1(VAR_1, VAR_3);
}
