
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {scalar_t__ an_dma_paddr; } ;
struct an_softc {TYPE_1__ an_rid_buffer; int an_ifp; TYPE_1__* an_tx_buffer; TYPE_1__* an_rx_buffer; } ;
struct an_reply {int an_valid; scalar_t__ an_phys; scalar_t__ an_rid; void* an_len; scalar_t__ an_eoc; scalar_t__ an_offset; scalar_t__ an_done; } ;
struct an_command {int an_parm2; void* an_parm1; int an_parm0; void* an_cmd; } ;
struct an_card_tx_desc {int an_valid; scalar_t__ an_phys; scalar_t__ an_rid; void* an_len; scalar_t__ an_eoc; scalar_t__ an_offset; scalar_t__ an_done; } ;
struct an_card_rx_desc {int an_valid; scalar_t__ an_phys; scalar_t__ an_rid; void* an_len; scalar_t__ an_eoc; scalar_t__ an_offset; scalar_t__ an_done; } ;
struct an_card_rid_desc {int an_valid; scalar_t__ an_phys; scalar_t__ an_rid; void* an_len; scalar_t__ an_eoc; scalar_t__ an_offset; scalar_t__ an_done; } ;
typedef int reply ;
typedef int an_tx_desc ;
typedef int an_rx_desc ;
typedef int an_rid_desc ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct an_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (struct an_softc*,void*,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct an_softc*,struct an_command*,struct an_reply*) ;
 int FUNC_3 (struct an_softc*,void*,TYPE_1__*,int ) ;
 int FUNC_4 (struct an_reply*,int) ;
 int FUNC_5 (int ,char*) ;

int
FUNC_6(struct an_softc *VAR_13)
{
 struct an_command VAR_14;
 struct an_reply VAR_15;
 struct an_card_rid_desc VAR_16;
 struct an_card_rx_desc VAR_17;
 struct an_card_tx_desc VAR_18;
 int VAR_19, VAR_20;

 FUNC_0(VAR_13);
 if(!VAR_13->an_rid_buffer.an_dma_paddr)
  FUNC_3(VAR_13, VAR_7,
     &VAR_13->an_rid_buffer, 0);
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
  if(!VAR_13->an_rx_buffer[VAR_19].an_dma_paddr)
   FUNC_3(VAR_13, VAR_8,
          &VAR_13->an_rx_buffer[VAR_19], 0);
 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
  if(!VAR_13->an_tx_buffer[VAR_19].an_dma_paddr)
   FUNC_3(VAR_13, VAR_10,
          &VAR_13->an_tx_buffer[VAR_19], 0);




 FUNC_4(&VAR_15,sizeof(VAR_15));
 VAR_14.an_cmd = VAR_0;
 VAR_14.an_parm0 = VAR_2;
 VAR_14.an_parm1 = VAR_9;
 VAR_14.an_parm2 = VAR_5;
 if (FUNC_2(VAR_13, &VAR_14, &VAR_15)) {
  FUNC_5(VAR_13->an_ifp, "failed to allocate RX descriptor\n");
  return(VAR_12);
 }

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  FUNC_4(&VAR_17, sizeof(VAR_17));
  VAR_17.an_valid = 1;
  VAR_17.an_len = VAR_8;
  VAR_17.an_done = 0;
  VAR_17.an_phys = VAR_13->an_rx_buffer[VAR_20].an_dma_paddr;

  for (VAR_19 = 0; VAR_19 < sizeof(VAR_17) / 4; VAR_19++)
   FUNC_1(VAR_13, VAR_9
       + (VAR_20 * sizeof(VAR_17))
       + (VAR_19 * 4),
       ((u_int32_t *)(void *)&VAR_17)[VAR_19]);
 }





 FUNC_4(&VAR_15,sizeof(VAR_15));
 VAR_14.an_cmd = VAR_0;
 VAR_14.an_parm0 = VAR_3;
 VAR_14.an_parm1 = VAR_11;
 VAR_14.an_parm2 = VAR_6;
 if (FUNC_2(VAR_13, &VAR_14, &VAR_15)) {
  FUNC_5(VAR_13->an_ifp, "failed to allocate TX descriptor\n");
  return(VAR_12);
 }

 for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
  FUNC_4(&VAR_18, sizeof(VAR_18));
  VAR_18.an_offset = 0;
  VAR_18.an_eoc = 0;
  VAR_18.an_valid = 0;
  VAR_18.an_len = 0;
  VAR_18.an_phys = VAR_13->an_tx_buffer[VAR_20].an_dma_paddr;

  for (VAR_19 = 0; VAR_19 < sizeof(VAR_18) / 4; VAR_19++)
   FUNC_1(VAR_13, VAR_11
       + (VAR_20 * sizeof(VAR_18))
       + (VAR_19 * 4),
       ((u_int32_t *)(void *)&VAR_18)[VAR_19]);
 }





 FUNC_4(&VAR_15,sizeof(VAR_15));
 VAR_14.an_cmd = VAR_0;
 VAR_14.an_parm0 = VAR_1;
 VAR_14.an_parm1 = VAR_4;
 VAR_14.an_parm2 = 1;
 if (FUNC_2(VAR_13, &VAR_14, &VAR_15)) {
  FUNC_5(VAR_13->an_ifp, "failed to allocate host descriptor\n");
  return(VAR_12);
 }

 FUNC_4(&VAR_16, sizeof(VAR_16));
 VAR_16.an_valid = 1;
 VAR_16.an_len = VAR_7;
 VAR_16.an_rid = 0;
 VAR_16.an_phys = VAR_13->an_rid_buffer.an_dma_paddr;

 for (VAR_19 = 0; VAR_19 < sizeof(VAR_16) / 4; VAR_19++)
  FUNC_1(VAR_13, VAR_4 + VAR_19 * 4,
        ((u_int32_t *)(void *)&VAR_16)[VAR_19]);

 return(0);
}
