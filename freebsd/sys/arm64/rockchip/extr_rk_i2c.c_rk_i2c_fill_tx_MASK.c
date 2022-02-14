
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct rk_i2c_softc {int cnt; int tx_slave_addr; TYPE_1__* msg; } ;
struct TYPE_2__ {int len; int slave; int* buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rk_i2c_softc*,scalar_t__,int) ;

__attribute__((used)) static uint8_t
FUNC_1(struct rk_i2c_softc *VAR_1)
{
 uint32_t VAR_2;
 uint8_t VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if (VAR_1->msg == ((void*)0) || VAR_1->msg->len == VAR_1->cnt)
  return (0);

 VAR_6 = VAR_1->msg->len - VAR_1->cnt;
 if (VAR_6 > 8)
  VAR_6 = 8;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_2 = 0;
  for (VAR_5 = 0; VAR_5 < 4 ; VAR_5++) {
   if (VAR_1->cnt == VAR_1->msg->len)
    break;


   if (VAR_1->cnt == 0 && VAR_1->tx_slave_addr) {
    VAR_3 = VAR_1->msg->slave;
    VAR_1->tx_slave_addr = 0;
   } else {
    VAR_3 = VAR_1->msg->buf[VAR_1->cnt];
    VAR_1->cnt++;
   }
   VAR_2 |= VAR_3 << (VAR_5 * 8);

  }
  FUNC_0(VAR_1, VAR_0 + 4 * VAR_4, VAR_2);

  if (VAR_1->cnt == VAR_1->msg->len)
   break;
 }

 return (uint8_t)VAR_6;
}
