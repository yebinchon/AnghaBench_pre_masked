
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct ccp_softc {int valid_queues; int dev; TYPE_1__* queues; } ;
struct TYPE_2__ {int private_lsb; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(struct ccp_softc *VAR_2, uint64_t VAR_3)
{
 unsigned VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2->queues); VAR_4++) {
  if (((1 << VAR_4) & VAR_2->valid_queues) == 0)
   continue;

  VAR_2->queues[VAR_4].private_lsb = -1;


  for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
   if ((VAR_3 &
       (1ull << (VAR_4 + (VAR_0 * VAR_5)))) != 0) {
    VAR_2->queues[VAR_4].private_lsb = VAR_5;
    VAR_3 &= ~(0x1Full << (VAR_0 * VAR_5));
    break;
   }
  }

  if (VAR_5 == VAR_1) {
   FUNC_0(VAR_2->dev,
       "Ignoring queue %u with no private LSB\n", VAR_4);
   VAR_2->valid_queues &= ~(1 << VAR_4);
  }
 }
}
