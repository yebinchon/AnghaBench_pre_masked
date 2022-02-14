
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_kring {int tx_event_lock; struct mbuf* tx_event; } ;
struct netmap_adapter {unsigned int num_tx_rings; struct netmap_kring** tx_rings; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 unsigned int FUNC_1 (struct mbuf*) ;
 struct netmap_adapter* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct netmap_adapter*,unsigned int,int *) ;
 int FUNC_6 (struct netmap_adapter*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int,char*,struct mbuf*,...) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct mbuf*,...) ;

__attribute__((used)) static void
FUNC_11(struct mbuf *VAR_0)
{
 struct netmap_adapter *VAR_1 = FUNC_2(FUNC_0(VAR_0));
 struct netmap_kring *VAR_2;
 unsigned int VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4 = VAR_3;

 if (FUNC_9(!FUNC_6(VAR_1) || VAR_3 >= VAR_1->num_tx_rings)) {
  FUNC_7("Error: no netmap adapter on device %p",
    FUNC_0(VAR_0));
  return;
 }
 for (;;) {
  bool VAR_5 = 0;

  VAR_2 = VAR_1->tx_rings[VAR_3];
  FUNC_3(&VAR_2->tx_event_lock);
  if (VAR_2->tx_event == VAR_0) {
   VAR_2->tx_event = ((void*)0);
   VAR_5 = 1;
  }
  FUNC_4(&VAR_2->tx_event_lock);

  if (VAR_5) {
   if (VAR_3 != VAR_4) {
    FUNC_8(1, "event %p migrated: ring %u --> %u",
          VAR_0, VAR_4, VAR_3);
   }
   break;
  }

  if (++VAR_3 == VAR_1->num_tx_rings) VAR_3 = 0;

  if (VAR_3 == VAR_4) {
   FUNC_8(1, "Cannot match event %p", VAR_0);
   return;
  }
 }



 FUNC_5(VAR_1, VAR_3, ((void*)0));







}
