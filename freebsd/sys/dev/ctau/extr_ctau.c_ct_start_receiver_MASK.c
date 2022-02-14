
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int DSR; int DIR; int BFL; int CDA; int EDA; int SARB; int BCR; int DAR; int DARB; int DCR; int TCSR; int TCNT; int TCONR; int TEPR; } ;
struct TYPE_7__ {unsigned char dma_rrc; unsigned char pio_rrc; } ;
struct TYPE_9__ {scalar_t__ mode; int CMD; TYPE_3__ RX; TYPE_2__ opt; int RRC; int IE2; int IE0; TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_4__ ct_chan_t ;
struct TYPE_6__ {int port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned char) ;
 int FUNC_5 (int ,unsigned int) ;

void FUNC_6 (ct_chan_t *VAR_26, int VAR_27, unsigned long VAR_28,
 unsigned VAR_29, unsigned long VAR_30, unsigned long VAR_31)
{
 int VAR_32 = FUNC_3 (FUNC_0(VAR_26->board->port));
 int VAR_33 = FUNC_3 (FUNC_1(VAR_26->board->port));
 int VAR_34 = FUNC_3 (FUNC_2(VAR_26->board->port));
 int VAR_35 = FUNC_3 (VAR_26->IE0);
 int VAR_36 = FUNC_3 (VAR_26->IE2);

 if (VAR_27) {
  VAR_33 |= VAR_26->num ? (VAR_17 | VAR_19) :
   (VAR_16 | VAR_18);
  if (VAR_26->mode == VAR_22) {
   VAR_32 |= VAR_26->num ? VAR_13 : VAR_12;
   VAR_35 |= VAR_7;
   VAR_36 |= VAR_11 | VAR_9 | VAR_10;
  }
 } else {
  VAR_32 |= VAR_26->num ? (VAR_13 | VAR_15) :
   (VAR_12 | VAR_14);
  VAR_35 |= VAR_7 | VAR_8;
 }


 if (! VAR_27) {
  FUNC_4 (VAR_26->RX.TEPR, VAR_25);
  FUNC_5 (VAR_26->RX.TCONR, 160);
  FUNC_5 (VAR_26->RX.TCNT, 0);
  FUNC_4 (VAR_26->RX.TCSR, VAR_23 | VAR_24);
  VAR_34 |= VAR_26->num ? VAR_21 : VAR_20;
 }


 FUNC_4 (FUNC_0(VAR_26->board->port), VAR_32);
 FUNC_4 (FUNC_1(VAR_26->board->port), VAR_33);
 FUNC_4 (FUNC_2(VAR_26->board->port), VAR_34);
 FUNC_4 (VAR_26->IE0, VAR_35);
 FUNC_4 (VAR_26->IE2, VAR_36);


 FUNC_4 (VAR_26->RRC, VAR_27 ? VAR_26->opt.dma_rrc : VAR_26->opt.pio_rrc);


 if (VAR_27) {
  FUNC_4 (VAR_26->RX.DCR, VAR_1);
  if (VAR_26->mode == VAR_22) {

   FUNC_4 (VAR_26->RX.DARB, (unsigned char) (VAR_28 >> 16));
   FUNC_5 (VAR_26->RX.DAR, (unsigned short) VAR_28);
   FUNC_5 (VAR_26->RX.BCR, VAR_29);
   FUNC_4 (VAR_26->RX.DIR, VAR_5);
  } else {

   FUNC_4 (VAR_26->RX.SARB, (unsigned char) (VAR_30 >> 16));
   FUNC_5 (VAR_26->RX.EDA, (unsigned short) VAR_31);
   FUNC_5 (VAR_26->RX.CDA, (unsigned short) VAR_30);
   FUNC_5 (VAR_26->RX.BFL, VAR_29);
   FUNC_4 (VAR_26->RX.DIR, VAR_4 | VAR_2 |
    VAR_3);
  }
  FUNC_4 (VAR_26->RX.DSR, VAR_6);
 }
 FUNC_4 (VAR_26->CMD, VAR_0);
}
