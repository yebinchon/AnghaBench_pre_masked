
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_long ;
struct vmbus_softc {struct vmbus_channel** vmbus_chmap; } ;
struct vmbus_channel {int ch_flags; int ch_task; int ch_tq; int ch_rxbr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__ volatile*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static __inline void
FUNC_6(struct vmbus_softc *VAR_2, volatile u_long *VAR_3,
    int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  uint32_t VAR_6;
  u_long VAR_7;
  int VAR_8;

  if (VAR_3[VAR_5] == 0)
   continue;

  VAR_7 = FUNC_2(&VAR_3[VAR_5], 0);
  VAR_6 = VAR_5 << VAR_1;

  while ((VAR_8 = FUNC_3(VAR_7)) != 0) {
   struct vmbus_channel *VAR_9;

   --VAR_8;
   VAR_7 &= ~(1UL << VAR_8);

   VAR_9 = VAR_2->vmbus_chmap[VAR_6 + VAR_8];
   if (FUNC_1(VAR_9 == ((void*)0))) {

    continue;
   }
   FUNC_0();

   if (VAR_9->ch_flags & VAR_0)
    FUNC_5(&VAR_9->ch_rxbr);
   FUNC_4(VAR_9->ch_tq, &VAR_9->ch_task);
  }
 }
}
