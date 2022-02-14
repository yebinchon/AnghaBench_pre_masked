
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musbotg_td {int channel; } ;
struct musbotg_softc {scalar_t__ sc_mode; int sc_channel_mask; } ;


 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct musbotg_softc*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct musbotg_softc *VAR_1, struct musbotg_td *VAR_2)
{

 FUNC_0(1, "ep_no=%d\n", VAR_2->channel);

 if (VAR_1->sc_mode == VAR_0)
  return;

 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->channel == -1)
  return;

 FUNC_1(VAR_1, VAR_2->channel, 0);
 VAR_1->sc_channel_mask &= ~(1 << VAR_2->channel);

 VAR_2->channel = -1;
}
