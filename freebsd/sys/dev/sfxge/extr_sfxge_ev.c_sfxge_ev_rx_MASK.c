
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct sfxge_softc {int dev; int enp; } ;
struct sfxge_rxq {scalar_t__ init_state; int ptr_mask; int pending; int entries; scalar_t__ completed; struct sfxge_rx_sw_desc* queue; } ;
struct sfxge_rx_sw_desc {scalar_t__ flags; void* size; int mbuf; } ;
struct sfxge_evq {scalar_t__ rx_done; scalar_t__ exception; struct sfxge_softc* sc; } ;
typedef int boolean_t ;
struct TYPE_2__ {unsigned int enc_rx_batch_max; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sfxge_evq*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,unsigned int,void*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sfxge_evq*,int ) ;
 struct sfxge_rxq* FUNC_7 (struct sfxge_evq*,int) ;
 int FUNC_8 (struct sfxge_softc*) ;

__attribute__((used)) static boolean_t
FUNC_9(void *VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9,
     uint16_t VAR_10)
{
 struct sfxge_evq *VAR_11;
 struct sfxge_softc *VAR_12;
 struct sfxge_rxq *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 struct sfxge_rx_sw_desc *VAR_16;

 VAR_11 = VAR_6;
 FUNC_1(VAR_11);

 VAR_12 = VAR_11->sc;

 if (VAR_11->exception)
  goto done;

 VAR_13 = FUNC_7(VAR_11, VAR_7);
 if (FUNC_2(VAR_13->init_state != VAR_4))
  goto done;

 VAR_14 = (VAR_8 + 1) & VAR_13->ptr_mask;
 VAR_8 = VAR_13->pending & VAR_13->ptr_mask;
 VAR_15 = (VAR_14 >= VAR_8) ? (VAR_14 - VAR_8) : (VAR_13->entries - VAR_8 + VAR_14);
 VAR_13->pending += VAR_15;

 if (VAR_15 != 1) {
  if ((VAR_15 <= 0) ||
      (VAR_15 > FUNC_4(VAR_12->enp)->enc_rx_batch_max)) {
   VAR_11->exception = VAR_1;

   FUNC_3(VAR_12->dev, "RX completion out of order"
        " (id=%#x delta=%u flags=%#x); resetting\n",
        VAR_8, VAR_15, VAR_10);
   FUNC_8(VAR_12);

   goto done;
  }
 }

 VAR_16 = &VAR_13->queue[VAR_8];

 FUNC_5(VAR_16->mbuf);

 for (; VAR_8 != VAR_14; VAR_8 = (VAR_8 + 1) & VAR_13->ptr_mask) {
  VAR_16 = &VAR_13->queue[VAR_8];
  FUNC_0(VAR_16->flags == VAR_2,
    ("rx_desc->flags != EFX_DISCARD"));
  VAR_16->flags = VAR_10;

  FUNC_0(VAR_9 < (1 << 16), ("size > (1 << 16)"));
  VAR_16->size = (uint16_t)VAR_9;
 }

 VAR_11->rx_done++;

 if (VAR_13->pending - VAR_13->completed >= VAR_5)
  FUNC_6(VAR_11, VAR_0);

done:
 return (VAR_11->rx_done >= VAR_3);
}
