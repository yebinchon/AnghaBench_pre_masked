
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bge_rcb {int bge_maxlen_flags; } ;
struct TYPE_5__ {struct bge_rcb bge_jumbo_rx_rcb; } ;
struct TYPE_6__ {TYPE_2__ bge_info; int bge_rx_jumbo_ring; } ;
struct TYPE_4__ {int bge_rx_jumbo_ring_map; int bge_rx_jumbo_ring_tag; } ;
struct bge_softc {TYPE_3__ bge_ldata; scalar_t__ bge_jumbo; TYPE_1__ bge_cdata; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bge_softc*,int ,int ) ;
 int FUNC_3 (struct bge_softc*,int) ;
 int FUNC_4 (struct bge_softc*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct bge_softc *VAR_6)
{
 struct bge_rcb *VAR_7;
 int VAR_8, VAR_9;

 FUNC_6(VAR_6->bge_ldata.bge_rx_jumbo_ring, VAR_1);
 VAR_6->bge_jumbo = 0;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if ((VAR_8 = FUNC_3(VAR_6, VAR_9)) != 0)
   return (VAR_8);
  FUNC_0(VAR_6->bge_jumbo, VAR_0);
 }

 FUNC_5(VAR_6->bge_cdata.bge_rx_jumbo_ring_tag,
     VAR_6->bge_cdata.bge_rx_jumbo_ring_map, VAR_5);

 VAR_6->bge_jumbo = 0;


 VAR_7 = &VAR_6->bge_ldata.bge_info.bge_jumbo_rx_rcb;
 VAR_7->bge_maxlen_flags =
     FUNC_1(0, VAR_3);
 FUNC_2(VAR_6, VAR_4, VAR_7->bge_maxlen_flags);

 FUNC_4(VAR_6, VAR_2, VAR_0 - 1);

 return (0);
}
