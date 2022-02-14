
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2661_softc {int dummy; } ;
struct rt2661_rx_ring {int count; scalar_t__ next; scalar_t__ cur; int desc_map; int desc_dmat; TYPE_1__* desc; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct rt2661_softc *VAR_2, struct rt2661_rx_ring *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
  VAR_3->desc[VAR_4].flags = FUNC_1(VAR_1);

 FUNC_0(VAR_3->desc_dmat, VAR_3->desc_map, VAR_0);

 VAR_3->cur = VAR_3->next = 0;
}
