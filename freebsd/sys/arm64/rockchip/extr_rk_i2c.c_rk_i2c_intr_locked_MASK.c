
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rk_i2c_softc {int ipd; int nak_recv; int transfer_done; int state; int cnt; TYPE_1__* msg; int mode; } ;
struct TYPE_2__ {int len; int flags; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (struct rk_i2c_softc*,int ) ;
 int FUNC_1 (struct rk_i2c_softc*,int ,int) ;





 int FUNC_2 (struct rk_i2c_softc*) ;
 int FUNC_3 (struct rk_i2c_softc*) ;
 int FUNC_4 (struct rk_i2c_softc*) ;
 int FUNC_5 (struct rk_i2c_softc*) ;

__attribute__((used)) static void
FUNC_6(struct rk_i2c_softc *VAR_16)
{
 uint32_t VAR_17;

 VAR_16->ipd = FUNC_0(VAR_16, VAR_11);


 if ((VAR_16->ipd & VAR_12) == 0)
  return;

 FUNC_1(VAR_16, VAR_11, VAR_16->ipd);
 VAR_16->ipd &= VAR_12;

 if (VAR_16->ipd & VAR_13) {

  VAR_16->ipd &= ~VAR_13;
  VAR_16->nak_recv = 1;

  VAR_16->transfer_done = 1;
  VAR_16->state = 132;
  goto err;
 }

 switch (VAR_16->state) {
 case 130:

  VAR_17 = FUNC_0(VAR_16, VAR_1);
  VAR_17 &= ~VAR_5;
  FUNC_1(VAR_16, VAR_1, VAR_17);

  if (VAR_16->mode == VAR_3 ||
      VAR_16->mode == VAR_4) {
   VAR_16->state = 131;
   FUNC_1(VAR_16, VAR_7, VAR_8 |
       VAR_10);

   VAR_17 = FUNC_0(VAR_16, VAR_1);
   VAR_17 |= VAR_2;
   FUNC_1(VAR_16, VAR_1, VAR_17);

   FUNC_1(VAR_16, VAR_14, VAR_16->msg->len);
  } else {
   VAR_16->state = 128;
   FUNC_1(VAR_16, VAR_7, VAR_9 |
       VAR_10);

   VAR_16->msg->len += 1;
   FUNC_3(VAR_16);
   FUNC_1(VAR_16, VAR_15, VAR_16->msg->len);
  }
  break;
 case 131:
  FUNC_2(VAR_16);

  if (VAR_16->cnt == VAR_16->msg->len)
   FUNC_4(VAR_16);

  break;
 case 128:
  if (VAR_16->cnt == VAR_16->msg->len &&
       !(VAR_16->msg->flags & VAR_0)) {
   FUNC_4(VAR_16);
   break;
  }

 case 129:

  VAR_17 = FUNC_0(VAR_16, VAR_1);
  VAR_17 &= ~VAR_6;
  FUNC_1(VAR_16, VAR_1, VAR_17);

  VAR_16->transfer_done = 1;
  VAR_16->state = 132;
  break;
 case 132:
  break;
 }

err:
 FUNC_5(VAR_16);
}
