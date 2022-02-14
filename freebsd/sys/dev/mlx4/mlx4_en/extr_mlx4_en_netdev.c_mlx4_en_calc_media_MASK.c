
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int transceiver; int link_speed; } ;
struct mlx4_en_priv {scalar_t__ last_link_state; TYPE_1__* prof; TYPE_2__ port_state; } ;
struct TYPE_3__ {scalar_t__ rx_pause; scalar_t__ tx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_0(struct mlx4_en_priv *VAR_10)
{
 int VAR_11;
 int VAR_12;

 VAR_12 = VAR_5;
 if (VAR_10->last_link_state == VAR_9)
  return (VAR_12);
 VAR_12 |= VAR_8;
 VAR_11 = VAR_10->port_state.transceiver;

 switch (VAR_10->port_state.link_speed) {
 case 100:
  VAR_12 |= VAR_1;
  break;
 case 1000:
  VAR_12 |= VAR_0;
  break;
 case 10000:
  if (VAR_11 > 0 && VAR_11 <= 0xC)
   VAR_12 |= VAR_3;
  else if (VAR_11 == 0x80 || VAR_11 == 0)
   VAR_12 |= VAR_2;
  break;
 case 40000:
  VAR_12 |= VAR_4;
  break;
 }
 if (VAR_10->prof->tx_pause)
  VAR_12 |= VAR_7;
 if (VAR_10->prof->rx_pause)
  VAR_12 |= VAR_6;

 return (VAR_12);
}
