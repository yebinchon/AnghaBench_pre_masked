
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hn_softc {int hn_rx_ring_inuse; int hn_ifp; int hn_prichan; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct hn_softc*,struct vmbus_channel*) ;
 int FUNC_2 (int ,char*,int) ;
 struct vmbus_channel** FUNC_3 (int ,int) ;
 int FUNC_4 (struct vmbus_channel**,int) ;

__attribute__((used)) static int
FUNC_5(struct hn_softc *VAR_1)
{
 struct vmbus_channel **VAR_2;
 int VAR_3 = VAR_1->hn_rx_ring_inuse - 1;
 int VAR_4, VAR_5 = 0;

 FUNC_0(VAR_3 > 0, ("no sub-channels"));


 VAR_2 = FUNC_3(VAR_1->hn_prichan, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  int VAR_6;

  VAR_6 = FUNC_1(VAR_1, VAR_2[VAR_4]);
  if (VAR_6) {
   VAR_5 = VAR_6;

  }
 }
 FUNC_4(VAR_2, VAR_3);

 if (VAR_5) {
  FUNC_2(VAR_1->hn_ifp, "sub-channels attach failed: %d\n", VAR_5);
 } else {
  if (VAR_0) {
   FUNC_2(VAR_1->hn_ifp, "%d sub-channels attached\n",
       VAR_3);
  }
 }
 return (VAR_5);
}
