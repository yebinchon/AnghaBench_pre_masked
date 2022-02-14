
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int bge_status_map; int bge_status_tag; } ;
struct TYPE_7__ {TYPE_2__* bge_status_block; } ;
struct bge_softc {int bge_flags; scalar_t__ bge_rx_saved_considx; TYPE_4__ bge_cdata; TYPE_3__ bge_ldata; int bge_ifp; } ;
typedef int if_t ;
struct TYPE_6__ {int bge_status; int bge_status_tag; TYPE_1__* bge_idx; } ;
struct TYPE_5__ {scalar_t__ bge_rx_prod_idx; scalar_t__ bge_tx_cons_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct bge_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bge_softc*) ;
 int FUNC_3 (struct bge_softc*,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bge_softc*,scalar_t__) ;
 int FUNC_6 (struct bge_softc*,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_8, int VAR_9)
{
 struct bge_softc *VAR_10;
 if_t VAR_11;
 uint32_t VAR_12, VAR_13;
 uint16_t VAR_14, VAR_15;

 VAR_10 = (struct bge_softc *)VAR_8;
 VAR_11 = VAR_10->bge_ifp;

 FUNC_0(VAR_10);
 if ((FUNC_8(VAR_11) & VAR_7) == 0) {
  FUNC_1(VAR_10);
  return;
 }


 FUNC_7(VAR_10->bge_cdata.bge_status_tag,
     VAR_10->bge_cdata.bge_status_map,
     VAR_3 | VAR_4);


 VAR_14 = VAR_10->bge_ldata.bge_status_block->bge_idx[0].bge_rx_prod_idx;
 VAR_15 = VAR_10->bge_ldata.bge_status_block->bge_idx[0].bge_tx_cons_idx;
 VAR_12 = VAR_10->bge_ldata.bge_status_block->bge_status;
 VAR_13 = VAR_10->bge_ldata.bge_status_block->bge_status_tag << 24;

 VAR_10->bge_ldata.bge_status_block->bge_status = 0;
 FUNC_7(VAR_10->bge_cdata.bge_status_tag,
     VAR_10->bge_cdata.bge_status_map,
     VAR_5 | VAR_6);
 if ((VAR_10->bge_flags & VAR_0) == 0)
  VAR_13 = 0;

 if ((VAR_12 & VAR_2) != 0)
  FUNC_2(VAR_10);


 FUNC_6(VAR_10, VAR_1, VAR_13);

 if (FUNC_8(VAR_11) & VAR_7 &&
     VAR_10->bge_rx_saved_considx != VAR_14) {

  FUNC_1(VAR_10);
  FUNC_3(VAR_10, VAR_14, 0);
  FUNC_0(VAR_10);
 }
 if (FUNC_8(VAR_11) & VAR_7) {

  FUNC_5(VAR_10, VAR_15);
  if (!FUNC_9(VAR_11))
   FUNC_4(VAR_11);
 }
 FUNC_1(VAR_10);
}
