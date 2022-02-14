
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num; scalar_t__ mode; int arphys; int brphys; int atphys; int btphys; scalar_t__ rts; scalar_t__ dtr; int port; TYPE_1__* board; } ;
typedef TYPE_2__ cx_chan_t ;
struct TYPE_5__ {int num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,unsigned short) ;

void FUNC_16 (cx_chan_t *VAR_3)
{

 FUNC_14 (FUNC_8(VAR_3->port), VAR_3->num & 3);


 FUNC_12 (VAR_3->port, VAR_0);


 FUNC_14 (FUNC_9(VAR_3->port), VAR_3->board->num << 6 | VAR_3->num << 2);


 FUNC_14 (FUNC_11(VAR_3->port), 0);
 FUNC_14 (FUNC_10(VAR_3->port), VAR_3->mode==VAR_2 ? 0 : VAR_1);


 FUNC_15 (FUNC_1(VAR_3->port), (unsigned short) (VAR_3->arphys>>16));
 FUNC_15 (FUNC_0(VAR_3->port), (unsigned short) VAR_3->arphys);


 FUNC_15 (FUNC_5(VAR_3->port), (unsigned short) (VAR_3->brphys>>16));
 FUNC_15 (FUNC_4(VAR_3->port), (unsigned short) VAR_3->brphys);


 FUNC_15 (FUNC_3(VAR_3->port), (unsigned short) (VAR_3->atphys>>16));
 FUNC_15 (FUNC_2(VAR_3->port), (unsigned short) VAR_3->atphys);


 FUNC_15 (FUNC_7(VAR_3->port), (unsigned short) (VAR_3->btphys>>16));
 FUNC_15 (FUNC_6(VAR_3->port), (unsigned short) VAR_3->btphys);

 VAR_3->dtr = 0;
 VAR_3->rts = 0;

 FUNC_13 (VAR_3);
}
