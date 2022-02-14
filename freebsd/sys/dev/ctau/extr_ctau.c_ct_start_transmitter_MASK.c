
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int DIR; int CDA; int EDA; int SARB; int BCR; int SAR; int DCR; } ;
struct TYPE_6__ {int dma_trc0; int pio_trc0; int dma_trc1; int pio_trc1; } ;
struct TYPE_9__ {scalar_t__ mode; TYPE_3__* board; int CMD; TYPE_2__ TX; TYPE_1__ opt; int TRC1; int TRC0; int IE1; int IE0; scalar_t__ num; } ;
typedef TYPE_4__ ct_chan_t ;
struct TYPE_8__ {scalar_t__ type; int port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,unsigned short) ;

void FUNC_7 (ct_chan_t *VAR_18, int VAR_19, unsigned long VAR_20,
 unsigned VAR_21, unsigned long VAR_22, unsigned long VAR_23)
{
 int VAR_24 = FUNC_4 (FUNC_2(VAR_18->board->port));
 int VAR_25 = FUNC_4 (FUNC_3(VAR_18->board->port));
 int VAR_26 = FUNC_4 (VAR_18->IE0);
 int VAR_27 = FUNC_4 (VAR_18->IE1);


 if (VAR_18->mode != VAR_17) {
  VAR_24 |= VAR_18->num ? VAR_10 : VAR_9;
  VAR_26 |= VAR_6;
  VAR_27 |= VAR_8;
 }
 if (VAR_19)
  VAR_25 |= VAR_18->num ? (VAR_14 | VAR_16) :
   (VAR_13 | VAR_15);
 else {
  VAR_24 |= VAR_18->num ? VAR_12 : VAR_11;
  VAR_26 |= VAR_7;
 }


 FUNC_5 (FUNC_2(VAR_18->board->port), VAR_24);
 FUNC_5 (FUNC_3(VAR_18->board->port), VAR_25);
 FUNC_5 (VAR_18->IE0, VAR_26);
 FUNC_5 (VAR_18->IE1, VAR_27);



 FUNC_5 (VAR_18->TRC0, VAR_19 ? VAR_18->opt.dma_trc0 : VAR_18->opt.pio_trc0);
 FUNC_5 (VAR_18->TRC1, VAR_19 ? VAR_18->opt.dma_trc1 : VAR_18->opt.pio_trc1);


 if (VAR_19) {
  FUNC_5 (VAR_18->TX.DCR, VAR_2);
  if (VAR_18->mode == VAR_17) {

   FUNC_5 (VAR_18->TX.SARB, (unsigned char) (VAR_20 >> 16));
   FUNC_6 (VAR_18->TX.SAR, (unsigned short) VAR_20);
   FUNC_6 (VAR_18->TX.BCR, VAR_21);
   FUNC_5 (VAR_18->TX.DIR, VAR_5);
  } else {

   FUNC_5 (VAR_18->TX.SARB, (unsigned char) (VAR_22 >> 16));
   FUNC_6 (VAR_18->TX.EDA, (unsigned short) VAR_23);
   FUNC_6 (VAR_18->TX.CDA, (unsigned short) VAR_22);
   FUNC_5 (VAR_18->TX.DIR, VAR_3 |
    VAR_4);
  }

 }
 FUNC_5 (VAR_18->CMD, VAR_1);


 if (VAR_18->board->type == VAR_0) {
  FUNC_5 (FUNC_0(VAR_18->board->port), 0xff);
  FUNC_5 (FUNC_1(VAR_18->board->port), 0xff);
 }
}
