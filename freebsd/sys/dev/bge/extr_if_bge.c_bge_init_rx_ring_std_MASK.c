
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bge_rx_std_ring_map; int bge_rx_std_ring_tag; } ;
struct TYPE_4__ {int bge_rx_std_ring; } ;
struct bge_softc {scalar_t__ bge_std; TYPE_1__ bge_cdata; TYPE_2__ bge_ldata; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bge_softc*,int) ;
 int FUNC_2 (struct bge_softc*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct bge_softc *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_4(VAR_4->bge_ldata.bge_rx_std_ring, VAR_2);
 VAR_4->bge_std = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_5 = FUNC_1(VAR_4, VAR_6)) != 0)
   return (VAR_5);
  FUNC_0(VAR_4->bge_std, VAR_1);
 }

 FUNC_3(VAR_4->bge_cdata.bge_rx_std_ring_tag,
     VAR_4->bge_cdata.bge_rx_std_ring_map, VAR_3);

 VAR_4->bge_std = 0;
 FUNC_2(VAR_4, VAR_0, VAR_1 - 1);

 return (0);
}
