
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tegra_i2c_softc {size_t msg_idx; TYPE_1__* msg; } ;
struct TYPE_2__ {size_t len; int* buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct tegra_i2c_softc*,int ) ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct tegra_i2c_softc *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2->msg_idx >= VAR_2->msg->len)
  FUNC_3("Invalid call to tegra_i2c_rx\n");

 while(VAR_2->msg_idx < VAR_2->msg->len) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  if (FUNC_0(VAR_3) == 0)
   break;
  VAR_4 = FUNC_2(4, VAR_2->msg->len - VAR_2->msg_idx);
  VAR_3 = FUNC_1(VAR_2, VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_2->msg->buf[VAR_2->msg_idx] = (VAR_3 >> (VAR_5 * 8)) & 0xFF;
   VAR_2->msg_idx++;
  }
 }

 if (VAR_2->msg_idx >= VAR_2->msg->len)
  return (0);
 return (VAR_2->msg->len - VAR_2->msg_idx - 1);
}
