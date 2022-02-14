
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct rk_i2c_softc {int cnt; TYPE_1__* msg; int dev; } ;
struct TYPE_2__ {int len; int* buf; } ;


 int FUNC_0 (struct rk_i2c_softc*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct rk_i2c_softc *VAR_1)
{
 uint32_t VAR_2 = 0;
 uint8_t VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_1->msg == ((void*)0)) {
  FUNC_1(VAR_1->dev, "No current iic msg\n");
  return;
 }

 VAR_4 = VAR_1->msg->len - VAR_1->cnt;
 if (VAR_4 > 32)
  VAR_4 = 32;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_5 % 4 == 0)
   VAR_2 = FUNC_0(VAR_1, VAR_0 + (VAR_5 / 4) * 4);

  VAR_3 = (VAR_2 >> ((VAR_5 % 4) * 8)) & 0xFF;
  VAR_1->msg->buf[VAR_1->cnt++] = VAR_3;
 }
}
