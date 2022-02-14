
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vmbus_channel {int dummy; } ;
struct hn_softc {int hn_rx_ring_inuse; struct vmbus_channel* hn_prichan; } ;


 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct vmbus_channel*,int ) ;
 struct vmbus_channel** FUNC_2 (struct vmbus_channel*,int) ;
 int FUNC_3 (struct vmbus_channel**,int) ;

__attribute__((used)) static void
FUNC_4(struct hn_softc *VAR_0, u_int VAR_1)
{
 int VAR_2 = VAR_0->hn_rx_ring_inuse - 1;

 FUNC_0(VAR_0);

 if (VAR_2 > 0) {
  struct vmbus_channel **VAR_3;
  int VAR_4;

  VAR_3 = FUNC_2(VAR_0->hn_prichan, VAR_2);
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
   FUNC_1(VAR_3[VAR_4], VAR_1);
  FUNC_3(VAR_3, VAR_2);
 }
 FUNC_1(VAR_0->hn_prichan, VAR_1);
}
