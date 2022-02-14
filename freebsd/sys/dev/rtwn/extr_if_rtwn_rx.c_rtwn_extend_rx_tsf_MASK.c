
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;
struct rtwn_rx_stat_common {int tsf_low; int rxdw3; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtwn_softc*,int) ;
 int FUNC_4 (struct rtwn_softc*,int) ;

__attribute__((used)) static uint64_t
FUNC_5(struct rtwn_softc *VAR_1,
    const struct rtwn_rx_stat_common *VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_2->rxdw3);
 VAR_5 = FUNC_2(VAR_2->tsf_low);
 VAR_7 = FUNC_0(VAR_4, VAR_0);

 switch (VAR_7) {
 case 1:
 case 2:
  VAR_7 >>= 1;
  VAR_6 = FUNC_4(VAR_1, VAR_7);
  break;
 default:
 {
  uint32_t VAR_8, VAR_9;

  VAR_8 = FUNC_4(VAR_1, 0);
  VAR_9 = FUNC_4(VAR_1, 1);

  if (FUNC_1(VAR_8 - VAR_5) < FUNC_1(VAR_9 - VAR_5)) {
   VAR_7 = 0;
   VAR_6 = VAR_8;
  } else {
   VAR_7 = 1;
   VAR_6 = VAR_9;
  }
  break;
 }
 }

 VAR_3 = FUNC_3(VAR_1, VAR_7);
 if (VAR_5 > VAR_6 && VAR_5 > 0xffff0000)
  VAR_3--;
 VAR_3 <<= 32;
 VAR_3 += VAR_5;

 return (VAR_3);
}
