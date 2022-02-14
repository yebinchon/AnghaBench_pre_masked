
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_3__ {int* TxControl; } ;
struct rp_port {TYPE_1__ rp_channel; } ;


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
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 struct rp_port* FUNC_3 (struct tty*) ;

__attribute__((used)) static int
FUNC_4(struct tty *VAR_11, int VAR_12, int VAR_13)
{
 struct rp_port *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_3(VAR_11);
 if (VAR_12 != 0 || VAR_13 != 0) {
  VAR_15 = VAR_16 = 0;
  if (VAR_12 & VAR_6)
   VAR_15 = VAR_8;
  if (VAR_13 & VAR_6)
   VAR_16 = VAR_8;
  if (VAR_12 & VAR_7)
   VAR_15 = VAR_9;
  if (VAR_13 & VAR_7)
   VAR_16 = VAR_9;
  VAR_14->rp_channel.TxControl[3] &= ~VAR_15;
  VAR_14->rp_channel.TxControl[3] |= VAR_16;
  FUNC_1(&VAR_14->rp_channel,VAR_10,
   FUNC_0(VAR_14->rp_channel.TxControl));
 } else {
  VAR_15 = FUNC_2(&VAR_14->rp_channel);
  VAR_16 = VAR_14->rp_channel.TxControl[3];
  VAR_17 = 0;
  if (VAR_16 & VAR_8)
   VAR_17 |= VAR_6;
  if (VAR_16 & VAR_9)
   VAR_17 |= VAR_7;
  if (VAR_15 & VAR_0)
   VAR_17 |= VAR_4;
  if (VAR_15 & VAR_2)
   VAR_17 |= VAR_5;
  if (VAR_15 & VAR_1)
   VAR_17 |= VAR_3;
  return(VAR_17);
 }
 return (0);
}
