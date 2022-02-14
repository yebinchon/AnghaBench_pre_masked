
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int baud; int mode; int gopt; int hopt; int opt; } ;
typedef TYPE_1__ ct_chan_t ;
struct TYPE_6__ {TYPE_1__* chan; int opt; } ;
typedef TYPE_2__ ct_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (ct_board_t *VAR_7)
{
 ct_chan_t *VAR_8;

 VAR_7->opt = VAR_2;
 for (VAR_8=VAR_7->chan; VAR_8<VAR_7->chan+VAR_0; ++VAR_8) {
  VAR_8->opt = VAR_4;
  VAR_8->hopt = VAR_6;
  VAR_8->gopt = VAR_5;
  VAR_8->mode = VAR_3;
  VAR_8->baud = VAR_1;

  FUNC_0 (VAR_8);
 }
}
