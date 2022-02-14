
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rk_i2c_softc {int transfer_done; int nak_recv; int tx_slave_addr; int msg_len; int mode; int state; struct iic_msg* msg; scalar_t__ cnt; } ;
struct iic_msg {int len; int flags; } ;
typedef scalar_t__ boolean_t ;


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
 int FUNC_0 (struct rk_i2c_softc*,int ) ;
 int FUNC_1 (struct rk_i2c_softc*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct rk_i2c_softc*) ;

__attribute__((used)) static void
FUNC_3(struct rk_i2c_softc *VAR_20, struct iic_msg *VAR_21, boolean_t VAR_22)
{
 uint32_t VAR_23;
 uint8_t VAR_24;

 VAR_20->transfer_done = 0;
 VAR_20->nak_recv = 0;
 VAR_20->tx_slave_addr = 0;
 VAR_20->cnt = 0;
 VAR_20->state = VAR_16;
 VAR_20->msg = VAR_21;
 VAR_20->msg_len = VAR_20->msg->len;

 VAR_23 = FUNC_0(VAR_20, VAR_1) & ~VAR_2;
 if (!(VAR_20->msg->flags & VAR_0)) {

  if (VAR_20->mode == VAR_7) {
   VAR_20->msg_len++;
   VAR_20->tx_slave_addr = 1;
  }
  VAR_20->state = VAR_18;
  VAR_23 |= VAR_8;

  FUNC_1(VAR_20, VAR_9, VAR_13);
 } else {

  if (VAR_20->mode == VAR_5) {
   VAR_20->state = VAR_17;
   if (VAR_22)
    VAR_23 |= VAR_4;

   FUNC_1(VAR_20, VAR_14, VAR_20->msg->len);
   FUNC_1(VAR_20, VAR_9, VAR_10 |
       VAR_12);
  } else {
   VAR_20->state = VAR_19;
   VAR_24 = FUNC_2(VAR_20);

   FUNC_1(VAR_20, VAR_15, VAR_24);

   FUNC_1(VAR_20, VAR_9, VAR_11 |
       VAR_12);
  }
 }
 VAR_23 |= VAR_20->mode << VAR_6;
 VAR_23 |= VAR_3;
 FUNC_1(VAR_20, VAR_1, VAR_23);
}
