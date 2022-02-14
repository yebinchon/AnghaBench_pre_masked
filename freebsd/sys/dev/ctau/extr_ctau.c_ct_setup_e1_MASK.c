
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cfg; scalar_t__ clk0; scalar_t__ clk1; } ;
struct TYPE_5__ {int e1cfg; int port; scalar_t__ chan; TYPE_1__ opt; } ;
typedef TYPE_2__ ct_board_t ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4 (ct_board_t *VAR_14)
{





 VAR_14->e1cfg &= VAR_11;
 switch (VAR_14->opt.cfg){
 case 129: VAR_14->e1cfg |= VAR_10; break;
 case 130: VAR_14->e1cfg |= VAR_8; break;
 case 128: VAR_14->e1cfg |= VAR_6; break;
 default: VAR_14->e1cfg |= VAR_9; break;
 }

 if (VAR_14->opt.clk0 == VAR_13) VAR_14->e1cfg |= VAR_2;
 if (VAR_14->opt.clk0 == VAR_12) VAR_14->e1cfg |= VAR_1;
 else VAR_14->e1cfg |= VAR_0;
 if (VAR_14->opt.clk1 == VAR_13) VAR_14->e1cfg |= VAR_5;
 if (VAR_14->opt.clk1 == VAR_12) VAR_14->e1cfg |= VAR_4;
 else VAR_14->e1cfg |= VAR_3;

 FUNC_3 (FUNC_0 (VAR_14->port), VAR_14->e1cfg);




 FUNC_2 (VAR_14->port);




 FUNC_1 (VAR_14->chan + 0);
 FUNC_1 (VAR_14->chan + 1);


 VAR_14->e1cfg |= VAR_7;
 FUNC_3 (FUNC_0 (VAR_14->port), VAR_14->e1cfg);
}
