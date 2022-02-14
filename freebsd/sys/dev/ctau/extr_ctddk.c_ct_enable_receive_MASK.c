
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* board; scalar_t__ num; int CMD; int IE0; int IE1; int * rdphys; int * rphys; scalar_t__ rn; int ST3; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_6__ {int port; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_1 (int ) ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ,int ,int ) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned char) ;

void FUNC_6 (ct_chan_t *VAR_14, int VAR_15)
{
 unsigned char VAR_16, VAR_17, VAR_18;

 VAR_16 = FUNC_4 (VAR_14->ST3);

 if (VAR_15 && ! (VAR_16 & VAR_13)) {
  VAR_14->rn = 0;
  FUNC_3 (VAR_14, 1 , VAR_14->rphys[0], VAR_1, VAR_14->rdphys[0],
   VAR_14->rdphys[VAR_12-1]);

  FUNC_5 (VAR_14->IE1, FUNC_4 (VAR_14->IE1) | VAR_3);
  FUNC_5 (VAR_14->IE0, FUNC_4 (VAR_14->IE0) | VAR_2);
  VAR_17 = FUNC_4 (FUNC_0(VAR_14->board->port));
  VAR_17 |= VAR_14->num ? VAR_5 : VAR_4;
  FUNC_5 (FUNC_0(VAR_14->board->port), VAR_17);
  FUNC_2 (VAR_14, 1);
 } else if (! VAR_15 && (VAR_16 & VAR_13)) {
  FUNC_2 (VAR_14, 0);
  FUNC_5 (VAR_14->CMD, VAR_0);

  VAR_17 = FUNC_4 (FUNC_0(VAR_14->board->port));
  VAR_17 &= VAR_14->num ? ~(VAR_5 | VAR_7) :
   ~(VAR_4 | VAR_6);
  FUNC_5 (FUNC_0(VAR_14->board->port), VAR_17);

  VAR_18 = FUNC_4 (FUNC_1(VAR_14->board->port));
  VAR_18 &= VAR_14->num ? ~(VAR_9 | VAR_11) :
   ~(VAR_8 | VAR_10);
  FUNC_5 (FUNC_1(VAR_14->board->port), VAR_18);
 }

}
