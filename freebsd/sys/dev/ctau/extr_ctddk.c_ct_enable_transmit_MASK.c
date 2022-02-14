
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int DIR; } ;
struct TYPE_8__ {TYPE_2__* board; scalar_t__ num; int CMD; TYPE_1__ TX; int * tdphys; int * tphys; scalar_t__ te; scalar_t__ tn; int ST3; } ;
typedef TYPE_3__ ct_chan_t ;
struct TYPE_7__ {int port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_1 (int ) ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 int FUNC_2 (TYPE_3__*,int,int ,int ,int ,int ) ;
 unsigned char FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned char) ;

void FUNC_5 (ct_chan_t *VAR_14, int VAR_15)
{
 unsigned char VAR_16, VAR_17, VAR_18;

 VAR_16 = FUNC_3 (VAR_14->ST3);

 if (VAR_15 && ! (VAR_16 & VAR_13)) {
  VAR_14->tn = 0;
  VAR_14->te = 0;
  FUNC_2 (VAR_14, 1 , VAR_14->tphys[0], VAR_4,
   VAR_14->tdphys[0], VAR_14->tdphys[0]);
  FUNC_4 (VAR_14->TX.DIR,
   VAR_3 | VAR_1 | VAR_2);
 } else if (! VAR_15 && (VAR_16 & VAR_13)) {
  FUNC_4 (VAR_14->CMD, VAR_0);

  VAR_17 = FUNC_3 (FUNC_0(VAR_14->board->port));
  VAR_17 &= VAR_14->num ? ~(VAR_6 | VAR_8) :
   ~(VAR_5 | VAR_7);
  FUNC_4 (FUNC_0(VAR_14->board->port), VAR_17);

  VAR_18 = FUNC_3 (FUNC_1(VAR_14->board->port));
  VAR_18 &= VAR_14->num ? ~(VAR_10 | VAR_12) :
   ~(VAR_9 | VAR_11);
  FUNC_4 (FUNC_1(VAR_14->board->port), VAR_18);
 }

}
