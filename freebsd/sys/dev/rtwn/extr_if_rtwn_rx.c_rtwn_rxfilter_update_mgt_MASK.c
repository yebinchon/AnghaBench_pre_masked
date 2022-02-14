
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtwn_softc {scalar_t__ bcn_vaps; scalar_t__ ap_vaps; scalar_t__ nvaps; scalar_t__ mon_vaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtwn_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_6)
{
 uint16_t VAR_7;

 VAR_7 = 0x7f7f;
 if (VAR_6->bcn_vaps == 0) {
  VAR_7 &= ~(
      FUNC_0(VAR_0) |
      FUNC_0(VAR_3) |
      FUNC_0(VAR_2));
 }
 if (VAR_6->ap_vaps == VAR_6->nvaps - VAR_6->mon_vaps) {
  VAR_7 &= ~(
      FUNC_0(VAR_1) |
      FUNC_0(VAR_4));
 }
 FUNC_1(VAR_6, VAR_5, VAR_7);
}
