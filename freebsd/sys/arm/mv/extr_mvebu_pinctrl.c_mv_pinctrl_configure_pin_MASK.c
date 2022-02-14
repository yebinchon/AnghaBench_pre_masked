
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_pinctrl_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv_pinctrl_softc*,int) ;
 int FUNC_1 (struct mv_pinctrl_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct mv_pinctrl_softc *VAR_3, uint32_t VAR_4,
    uint32_t VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_6 = (VAR_4 / VAR_2) * VAR_0;
 VAR_7 = (VAR_4 % VAR_2) * VAR_0;
 VAR_8 = FUNC_0(VAR_3, VAR_6);
 VAR_8 &= ~(VAR_1 << VAR_7);
 VAR_8 |= VAR_5 << VAR_7;
 FUNC_1(VAR_3, VAR_6, VAR_8);
}
