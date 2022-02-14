
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct tty {int dummy; } ;
struct rp_port {int rp_port; int rp_unit; int rp_chan; int rp_aiop; int rp_intmask; int rp_cts; int rp_channel; TYPE_1__* rp_ctlp; int rp_timer; struct tty* rp_tty; } ;
struct TYPE_6__ {int num_ports; int hwmtx_init; int hwmtx; int dev; struct rp_port* rp; } ;
typedef TYPE_1__ CONTROLLER_T ;


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
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,int,int) ;
 struct tty* FUNC_10 (int *,struct rp_port*) ;
 int FUNC_11 (struct tty*) ;
 int FUNC_12 (struct tty*,int *,char*,int,int) ;

int
FUNC_13(CONTROLLER_T *VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18;
 int VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;
 int VAR_24;
 struct rp_port *VAR_25;
 struct tty *VAR_26;

 VAR_18 = FUNC_1(VAR_15->dev);

 FUNC_5("RocketPort%d (Version %s) %d ports.\n", VAR_18,
  VAR_11, VAR_17);

 VAR_15->num_ports = VAR_17;
 VAR_15->rp = VAR_25 = (struct rp_port *)
  FUNC_3(sizeof(struct rp_port) * VAR_17, VAR_7, VAR_8 | VAR_9);
 if (VAR_25 == ((void*)0)) {
  FUNC_2(VAR_15->dev, "rp_attachcommon: Could not malloc rp_ports structures.\n");
  VAR_24 = VAR_4;
  goto nogo;
 }

 VAR_22 = 0;
 for(VAR_20=0; VAR_20 < VAR_16; VAR_20++) {
  VAR_19 = FUNC_7(VAR_15, VAR_20);
  for(VAR_21=0; VAR_21 < VAR_19; VAR_21++, VAR_22++, VAR_25++) {
   VAR_25->rp_tty = VAR_26 = FUNC_10(&VAR_14, VAR_25);
   FUNC_0(&VAR_25->rp_timer, FUNC_11(VAR_26), 0);
   VAR_25->rp_port = VAR_22;
   VAR_25->rp_ctlp = VAR_15;
   VAR_25->rp_unit = VAR_18;
   VAR_25->rp_chan = VAR_21;
   VAR_25->rp_aiop = VAR_20;

   VAR_25->rp_intmask = VAR_10 | VAR_13 | VAR_12 |
    VAR_1 | VAR_2 | VAR_3;



   if(FUNC_9(VAR_15, &VAR_25->rp_channel, VAR_20, VAR_21) == 0) {
    FUNC_2(VAR_15->dev, "RocketPort sInitChan(%d, %d, %d) failed.\n",
           VAR_18, VAR_20, VAR_21);
    VAR_24 = VAR_5;
    goto nogo;
   }
   VAR_23 = FUNC_8(&VAR_25->rp_channel);
   VAR_25->rp_cts = (VAR_23 & VAR_0) != 0;
   FUNC_12(VAR_26, ((void*)0), "R%r%r", VAR_18, VAR_22);
  }
 }

 FUNC_4(&VAR_15->hwmtx, "rp_hwmtx", ((void*)0), VAR_6);
 VAR_15->hwmtx_init = 1;
 return (0);

nogo:
 FUNC_6(VAR_15);

 return (VAR_24);
}
