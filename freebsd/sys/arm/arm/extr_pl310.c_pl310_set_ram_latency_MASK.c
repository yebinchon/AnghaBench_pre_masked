
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pl310_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct pl310_softc*,scalar_t__) ;
 int FUNC_2 (struct pl310_softc*,scalar_t__,scalar_t__) ;

void
FUNC_3(struct pl310_softc *VAR_8, uint32_t VAR_9,
   uint32_t VAR_10, uint32_t VAR_11, uint32_t VAR_12)
{
 uint32_t VAR_13;

 FUNC_0(VAR_9 == VAR_1 ||
     VAR_9 == VAR_0,
     ("bad pl310 ram latency register address"));

 VAR_13 = FUNC_1(VAR_8, VAR_9);
 if (VAR_12 != 0) {
  FUNC_0(VAR_12 <= 8, ("bad pl310 setup latency: %d", VAR_12));
  VAR_13 &= ~VAR_4;
  VAR_13 |= (VAR_12 - 1) << VAR_5;
 }
 if (VAR_10 != 0) {
  FUNC_0(VAR_10 <= 8, ("bad pl310 read latency: %d", VAR_10));
  VAR_13 &= ~VAR_2;
  VAR_13 |= (VAR_10 - 1) << VAR_3;
 }
 if (VAR_11 != 0) {
  FUNC_0(VAR_11 <= 8, ("bad pl310 write latency: %d", VAR_11));
  VAR_13 &= ~VAR_6;
  VAR_13 |= (VAR_11 - 1) << VAR_7;
 }
 FUNC_2(VAR_8, VAR_9, VAR_13);
}
