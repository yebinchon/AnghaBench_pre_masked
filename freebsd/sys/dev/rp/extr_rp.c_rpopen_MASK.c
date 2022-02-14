
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_16__ {int* TxControl; } ;
struct rp_port {unsigned int rp_intmask; TYPE_1__* rp_ctlp; int rp_timer; TYPE_2__ rp_channel; } ;
struct TYPE_15__ {int dev; } ;


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
 int FUNC_0 (int *,int ,int ,struct rp_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 unsigned int FUNC_12 (TYPE_2__*) ;
 unsigned int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 struct rp_port* FUNC_16 (struct tty*) ;

__attribute__((used)) static int
FUNC_17(struct tty *VAR_11)
{
 struct rp_port *VAR_12;
 int VAR_13;
 unsigned int VAR_14, VAR_15;

 VAR_12 = FUNC_16(VAR_11);

 VAR_13 = 0;
 VAR_13 |= VAR_5;
 VAR_13 |= VAR_4;
 VAR_12->rp_channel.TxControl[3] =
  ((VAR_12->rp_channel.TxControl[3]
  & ~(VAR_5 | VAR_4)) | VAR_13);
 FUNC_3(&VAR_12->rp_channel,VAR_9,
  FUNC_2(VAR_12->rp_channel.TxControl));
 FUNC_14(&VAR_12->rp_channel, VAR_7);
 FUNC_5(&VAR_12->rp_channel);
 FUNC_10(&VAR_12->rp_channel);
 FUNC_11(&VAR_12->rp_channel);

 FUNC_7(&VAR_12->rp_channel,
  (VAR_8|VAR_1|VAR_3|VAR_6|VAR_0));
 FUNC_14(&VAR_12->rp_channel, VAR_7);

 FUNC_5(&VAR_12->rp_channel);
 FUNC_4(&VAR_12->rp_channel);




 FUNC_6(&VAR_12->rp_channel);

 FUNC_15(&VAR_12->rp_channel);

 FUNC_8(&VAR_12->rp_channel);
 FUNC_9(&VAR_12->rp_channel);





 VAR_14 = FUNC_12(&VAR_12->rp_channel);
 VAR_14 = VAR_14 & VAR_12->rp_intmask;
 VAR_15 = FUNC_13(&VAR_12->rp_channel);

 FUNC_0(&VAR_12->rp_timer, VAR_2, VAR_10, VAR_12);

 FUNC_1(VAR_12->rp_ctlp->dev);
 return(0);
}
