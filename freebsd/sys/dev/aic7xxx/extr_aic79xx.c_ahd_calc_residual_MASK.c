
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scb {int flags; struct hardware_scb* hscb; } ;
struct initiator_status {int residual_datacnt; int residual_sgptr; } ;
struct TYPE_2__ {struct initiator_status istatus; } ;
struct hardware_scb {TYPE_1__ shared_data; int sgptr; } ;
struct ahd_softc {int dummy; } ;
struct ahd_dma_seg {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ahd_softc*,struct scb*) ;
 int FUNC_2 (struct ahd_softc*,struct scb*) ;
 struct ahd_dma_seg* FUNC_3 (struct ahd_softc*,struct scb*,int) ;
 int FUNC_4 (struct scb*) ;
 int FUNC_5 (struct scb*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct scb*,int) ;
 int FUNC_8 (struct scb*,int) ;
 int FUNC_9 (struct scb*,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,...) ;

void
FUNC_12(struct ahd_softc *VAR_11, struct scb *VAR_12)
{
 struct hardware_scb *VAR_13;
 struct initiator_status *VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 VAR_13 = VAR_12->hscb;
 VAR_15 = FUNC_6(VAR_13->sgptr);
 if ((VAR_15 & VAR_9) == 0)

  return;
 VAR_15 &= ~VAR_9;

 if ((VAR_15 & VAR_6) != 0)

  return;







 VAR_14 = &VAR_13->shared_data.istatus;
 VAR_16 = FUNC_6(VAR_14->residual_sgptr);
 if ((VAR_15 & VAR_5) != 0) {

  VAR_17 = FUNC_5(VAR_12);
 } else if ((VAR_16 & VAR_6) != 0) {

  return;
 } else if ((VAR_16 & VAR_7) != 0) {
  FUNC_2(VAR_11, VAR_12);
  FUNC_11("data overrun detected Tag == 0x%x.\n",
         FUNC_0(VAR_12));
  FUNC_1(VAR_11, VAR_12);
  FUNC_9(VAR_12, VAR_3);
  FUNC_4(VAR_12);
  return;
 } else if ((VAR_16 & ~VAR_8) != 0) {
  FUNC_10("Bogus resid sgptr value 0x%x\n", VAR_16);

 } else {
  struct ahd_dma_seg *VAR_18;





  VAR_17 = FUNC_6(VAR_14->residual_datacnt) & VAR_1;
  VAR_18 = FUNC_3(VAR_11, VAR_12, VAR_16 & VAR_8);


  VAR_18--;






  while ((FUNC_6(VAR_18->len) & VAR_0) == 0) {
   VAR_18++;
   VAR_17 += FUNC_6(VAR_18->len) & VAR_1;
  }
 }
 if ((VAR_12->flags & VAR_4) == 0)
  FUNC_7(VAR_12, VAR_17);
 else
  FUNC_8(VAR_12, VAR_17);
}
