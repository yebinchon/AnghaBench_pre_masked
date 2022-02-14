
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned long arphys; unsigned long brphys; unsigned long atphys; unsigned long btphys; int num; int port; int mode; TYPE_1__* board; scalar_t__ btbuf; scalar_t__ atbuf; scalar_t__ brbuf; scalar_t__ arbuf; scalar_t__ overflow; } ;
typedef TYPE_2__ cx_chan_t ;
struct TYPE_11__ {scalar_t__* tbuffer; scalar_t__* rbuffer; } ;
typedef TYPE_3__ cx_buf_t ;
struct TYPE_9__ {scalar_t__ dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int) ;

void FUNC_21 (cx_chan_t *VAR_15, cx_buf_t *VAR_16, unsigned long VAR_17)
{
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21;

 VAR_15->overflow = 0;


 if (VAR_16) {
  VAR_15->arbuf = VAR_16->rbuffer[0];
  VAR_15->brbuf = VAR_16->rbuffer[1];
  VAR_15->atbuf = VAR_16->tbuffer[0];
  VAR_15->btbuf = VAR_16->tbuffer[1];
  VAR_15->arphys = VAR_17 + ((char*)VAR_15->arbuf - (char*)VAR_16);
  VAR_15->brphys = VAR_17 + ((char*)VAR_15->brbuf - (char*)VAR_16);
  VAR_15->atphys = VAR_17 + ((char*)VAR_15->atbuf - (char*)VAR_16);
  VAR_15->btphys = VAR_17 + ((char*)VAR_15->btbuf - (char*)VAR_16);
 }


 FUNC_19 (FUNC_12(VAR_15->port), VAR_15->num & 3);


 FUNC_20 (FUNC_1(VAR_15->port), (unsigned short) (VAR_15->arphys>>16));
 FUNC_20 (FUNC_0(VAR_15->port), (unsigned short) VAR_15->arphys);


 FUNC_20 (FUNC_7(VAR_15->port), (unsigned short) (VAR_15->brphys>>16));
 FUNC_20 (FUNC_6(VAR_15->port), (unsigned short) VAR_15->brphys);


 FUNC_20 (FUNC_5(VAR_15->port), (unsigned short) (VAR_15->atphys>>16));
 FUNC_20 (FUNC_4(VAR_15->port), (unsigned short) VAR_15->atphys);


 FUNC_20 (FUNC_11(VAR_15->port), (unsigned short) (VAR_15->btphys>>16));
 FUNC_20 (FUNC_10(VAR_15->port), (unsigned short) VAR_15->btphys);


 VAR_18 |= VAR_2;
 VAR_20 |= VAR_11;
 if (VAR_15->board->dma) {
  VAR_19 |= VAR_7;
  if (VAR_15->mode == VAR_14)
   VAR_20 |= VAR_10;
 }


 VAR_18 |= VAR_3;
 VAR_20 |= (VAR_15->mode == VAR_14) ? VAR_12 : (VAR_12 | VAR_13);
 if (VAR_15->board->dma)
  VAR_19 |= VAR_8;


 FUNC_19 (FUNC_13(VAR_15->port), VAR_19 | (VAR_15->mode == VAR_14 ? VAR_5 : VAR_6));


 FUNC_15 (VAR_15->port, VAR_1);
 FUNC_15 (VAR_15->port, VAR_4 | VAR_18);
 if (VAR_15->mode == VAR_14)
  FUNC_15 (VAR_15->port, VAR_3);


 VAR_21 = FUNC_16(VAR_15);
 FUNC_20 (FUNC_2(VAR_15->port), VAR_21);
 FUNC_20 (FUNC_8(VAR_15->port), VAR_21);
 FUNC_20 (FUNC_3(VAR_15->port), VAR_0);
 FUNC_20 (FUNC_9(VAR_15->port), VAR_0);

 if (VAR_15->mode == VAR_14)
  VAR_20 |= VAR_9;


 FUNC_19 (FUNC_14(VAR_15->port), VAR_20);


 FUNC_17 (VAR_15, 0);
 FUNC_18 (VAR_15, 0);
}
