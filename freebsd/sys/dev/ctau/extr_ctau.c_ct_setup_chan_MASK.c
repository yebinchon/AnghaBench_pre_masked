
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int DSR; } ;
struct TYPE_8__ {int DSR; } ;
struct TYPE_10__ {int lx; int FIE; int IE2; int IE1; int IE0; int CMD; TYPE_2__ TX; TYPE_1__ RX; } ;
typedef TYPE_3__ ct_chan_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4 (ct_chan_t *VAR_5)
{

 FUNC_3 (VAR_5->RX.DSR, VAR_3);
 FUNC_3 (VAR_5->TX.DSR, VAR_3);
 FUNC_3 (VAR_5->CMD, VAR_2);
 FUNC_3 (VAR_5->CMD, VAR_1);
 FUNC_3 (VAR_5->CMD, VAR_0);


 FUNC_3 (VAR_5->IE0, 0);
 FUNC_3 (VAR_5->IE1, 0);
 FUNC_3 (VAR_5->IE2, 0);
 FUNC_3 (VAR_5->FIE, 0);


 FUNC_0 (VAR_5, 0);
 FUNC_1 (VAR_5, 0);

 VAR_5->lx = VAR_4;
 FUNC_2 (VAR_5);
}
