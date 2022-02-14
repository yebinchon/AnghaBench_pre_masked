
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct rx_tpa_end_cmpl {int agg_bufs_v1; } ;
struct rx_pkt_cmpl {int agg_bufs_v1; } ;
struct cmpl_base {int type; } ;
struct bnxt_softc {int dev; struct bnxt_cp_ring* rx_cp_rings; } ;
struct TYPE_2__ {scalar_t__ vaddr; } ;
struct bnxt_cp_ring {size_t cons; int v_bit; TYPE_1__ ring; } ;
typedef int qidx_t ;


 size_t VAR_0 ;




 int FUNC_0 (struct bnxt_cp_ring*,size_t) ;
 int FUNC_1 (struct cmpl_base*,int) ;
 int FUNC_2 (TYPE_1__*,size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_5, uint16_t VAR_6, qidx_t VAR_7, qidx_t VAR_8)
{
 struct bnxt_softc *VAR_9 = (struct bnxt_softc *)VAR_5;
 struct bnxt_cp_ring *VAR_10 = &VAR_9->rx_cp_rings[VAR_6];
 struct rx_pkt_cmpl *VAR_11;
 struct rx_tpa_end_cmpl *VAR_12;
 struct cmpl_base *VAR_13 = (struct cmpl_base *)VAR_10->ring.vaddr;
 int VAR_14 = 0;
 uint32_t VAR_15 = VAR_10->cons;
 bool VAR_16 = VAR_10->v_bit;
 uint8_t VAR_17;
 int VAR_18;
 uint16_t VAR_19;

 for (;;) {
  FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
  FUNC_0(VAR_10, VAR_15);

  if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
   goto cmpl_invalid;

  VAR_19 = FUNC_4(VAR_13[VAR_15].type) & VAR_0;
  switch (VAR_19) {
  case 130:
   VAR_11 = (void *)&VAR_13[VAR_15];
   VAR_17 = (VAR_11->agg_bufs_v1 & VAR_1) >>
       VAR_2;
   FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
   FUNC_0(VAR_10, VAR_15);

   if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
    goto cmpl_invalid;


   for (VAR_18=0; VAR_18<VAR_17; VAR_18++) {
    FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
    FUNC_0(VAR_10, VAR_15);
    if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
     goto cmpl_invalid;
   }
   VAR_14++;
   break;
  case 129:
   VAR_12 = (void *)&VAR_13[VAR_15];
   VAR_17 = (VAR_12->agg_bufs_v1 &
       VAR_3) >>
       VAR_4;
   FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
   FUNC_0(VAR_10, VAR_15);

   if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
    goto cmpl_invalid;

   for (VAR_18=0; VAR_18<VAR_17; VAR_18++) {
    FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
    FUNC_0(VAR_10, VAR_15);
    if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
     goto cmpl_invalid;
   }
   VAR_14++;
   break;
  case 128:
   FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
   FUNC_0(VAR_10, VAR_15);

   if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
    goto cmpl_invalid;
   break;
  case 131:
   break;
  default:
   FUNC_3(VAR_9->dev,
       "Unhandled completion type %d on RXQ %d\n",
       VAR_19, VAR_6);


   if (VAR_19 & 1) {
    FUNC_2(&VAR_10->ring, VAR_15, VAR_16);
    FUNC_0(VAR_10, VAR_15);

    if (!FUNC_1(&VAR_13[VAR_15], VAR_16))
     goto cmpl_invalid;
   }
   break;
  }
  if (VAR_14 > VAR_8)
   break;
 }
cmpl_invalid:

 return VAR_14;
}
