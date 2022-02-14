
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int bge_status_map; int bge_status_tag; } ;
struct TYPE_7__ {TYPE_2__* bge_status_block; } ;
struct bge_softc {scalar_t__ bge_asicrev; scalar_t__ bge_chipid; scalar_t__ bge_link_evt; TYPE_4__ bge_cdata; TYPE_3__ bge_ldata; int bge_ifp; } ;
typedef int if_t ;
struct TYPE_6__ {scalar_t__ bge_status; TYPE_1__* bge_idx; } ;
struct TYPE_5__ {int bge_tx_cons_idx; int bge_rx_prod_idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bge_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct bge_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bge_softc*) ;
 int FUNC_4 (struct bge_softc*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bge_softc*,int ) ;
 int FUNC_7 (struct bge_softc*,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_11)
{
 struct bge_softc *VAR_12;
 if_t VAR_13;
 uint32_t VAR_14;
 uint16_t VAR_15, VAR_16;

 VAR_12 = VAR_11;

 FUNC_0(VAR_12);

 VAR_13 = VAR_12->bge_ifp;
 FUNC_7(VAR_12, VAR_4, 0);




 VAR_14 = FUNC_2(VAR_12, VAR_3) & VAR_2;


 FUNC_8(VAR_12->bge_cdata.bge_status_tag,
     VAR_12->bge_cdata.bge_status_map,
     VAR_5 | VAR_6);
 VAR_15 = VAR_12->bge_ldata.bge_status_block->bge_idx[0].bge_rx_prod_idx;
 VAR_16 = VAR_12->bge_ldata.bge_status_block->bge_idx[0].bge_tx_cons_idx;
 VAR_12->bge_ldata.bge_status_block->bge_status = 0;
 FUNC_8(VAR_12->bge_cdata.bge_status_tag,
     VAR_12->bge_cdata.bge_status_map,
     VAR_7 | VAR_8);

 if ((VAR_12->bge_asicrev == VAR_0 &&
     VAR_12->bge_chipid != VAR_1) ||
     VAR_14 || VAR_12->bge_link_evt)
  FUNC_3(VAR_12);

 if (FUNC_10(VAR_13) & VAR_10) {

  FUNC_4(VAR_12, VAR_15, 1);
 }

 if (FUNC_10(VAR_13) & VAR_10) {

  FUNC_6(VAR_12, VAR_16);
 }

 if (FUNC_10(VAR_13) & VAR_10 &&
     !FUNC_11(VAR_13))
  FUNC_5(VAR_13);

 FUNC_1(VAR_12);
}
