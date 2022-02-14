
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct status_pkt {int residual_datacnt; int residual_sg_ptr; } ;
struct scb {int flags; struct hardware_scb* hscb; } ;
struct TYPE_2__ {struct status_pkt status; } ;
struct hardware_scb {TYPE_1__ shared_data; int sgptr; } ;
struct ahc_softc {int dummy; } ;
struct ahc_dma_seg {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_softc*,struct scb*) ;
 struct ahc_dma_seg* FUNC_1 (struct scb*,int) ;
 int FUNC_2 (struct scb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct scb*,int) ;
 int FUNC_5 (struct scb*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,int) ;

void
FUNC_8(struct ahc_softc *VAR_9, struct scb *VAR_10)
{
 struct hardware_scb *VAR_11;
 struct status_pkt *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 VAR_11 = VAR_10->hscb;
 VAR_13 = FUNC_3(VAR_11->sgptr);
 if ((VAR_13 & VAR_7) == 0)

  return;
 VAR_13 &= ~VAR_7;

 if ((VAR_13 & VAR_5) != 0)

  return;

 VAR_12 = &VAR_11->shared_data.status;
 VAR_14 = FUNC_3(VAR_12->residual_sg_ptr);
 if ((VAR_13 & VAR_4) != 0) {

  VAR_15 = FUNC_2(VAR_10);
 } else if ((VAR_14 & VAR_5) != 0) {

  return;
 } else if ((VAR_14 & ~VAR_6) != 0) {
  FUNC_6("Bogus resid sgptr value 0x%x\n", VAR_14);

  return;
 } else {
  struct ahc_dma_seg *VAR_16;





  VAR_15 = FUNC_3(VAR_12->residual_datacnt) & VAR_1;
  VAR_16 = FUNC_1(VAR_10, VAR_14 & VAR_6);


  VAR_16--;






  while ((FUNC_3(VAR_16->len) & VAR_0) == 0) {
   VAR_16++;
   VAR_15 += FUNC_3(VAR_16->len) & VAR_1;
  }
 }
 if ((VAR_10->flags & VAR_3) == 0)
  FUNC_4(VAR_10, VAR_15);
 else
  FUNC_5(VAR_10, VAR_15);
}
