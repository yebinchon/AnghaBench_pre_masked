
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_5__ {int type; int num; int irq; int dma; long osc; int bcr0; scalar_t__ e1cfg; scalar_t__ bcr1; int name; int port; } ;
typedef TYPE_1__ ct_board_t ;


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
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3 (ct_board_t *VAR_14, int VAR_15, port_t VAR_16, int VAR_17, int VAR_18,
 int VAR_19, long VAR_20)
{
 int VAR_21;


 VAR_14->type = VAR_19;
 VAR_14->port = VAR_16;
 VAR_14->num = VAR_15;
 VAR_14->irq = VAR_17;
 VAR_14->dma = VAR_18;
 VAR_14->osc = VAR_20;


 if (VAR_14->type == VAR_1) FUNC_2 (VAR_14->name, "Tau");
 else if (VAR_14->type == VAR_6) FUNC_2 (VAR_14->name, "Tau/E1");
 else if (VAR_14->type == VAR_7) FUNC_2 (VAR_14->name, "Tau/E1c");
 else if (VAR_14->type == VAR_8) FUNC_2 (VAR_14->name, "Tau/E1d");
 else if (VAR_14->type == VAR_9) FUNC_2 (VAR_14->name, "Tau/G.703");
 else if (VAR_14->type == VAR_10) FUNC_2 (VAR_14->name, "Tau/G.703c");
 else if (VAR_14->type == VAR_2) FUNC_2 (VAR_14->name, "Tau2");
 else if (VAR_14->type == VAR_3) FUNC_2 (VAR_14->name, "Tau2/E1");
 else if (VAR_14->type == VAR_4) FUNC_2 (VAR_14->name, "Tau2/E1d");
 else if (VAR_14->type == VAR_5) FUNC_2 (VAR_14->name, "Tau2/G.703");
 else FUNC_2 (VAR_14->name, "Tau/???");


 VAR_14->bcr0 = VAR_0 | VAR_12[VAR_14->dma] | VAR_13[VAR_14->irq];


 VAR_14->bcr1 = 0;
 VAR_14->e1cfg = 0;


 for (VAR_21=0; VAR_21<VAR_11; ++VAR_21)
  FUNC_0 (VAR_14, VAR_21);
 FUNC_1 (VAR_14);
}
