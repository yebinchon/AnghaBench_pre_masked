
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2560_softc {int dummy; } ;
struct rt2560_rx_ring {int count; scalar_t__ cur_decrypt; scalar_t__ next; scalar_t__ cur; int desc_map; int desc_dmat; TYPE_1__* data; TYPE_2__* desc; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ drop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct rt2560_softc *VAR_2, struct rt2560_rx_ring *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  VAR_3->desc[VAR_4].flags = FUNC_1(VAR_1);
  VAR_3->data[VAR_4].drop = 0;
 }

 FUNC_0(VAR_3->desc_dmat, VAR_3->desc_map, VAR_0);

 VAR_3->cur = VAR_3->next = 0;
 VAR_3->cur_decrypt = 0;
}
