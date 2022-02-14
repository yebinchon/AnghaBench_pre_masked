
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ural_softc {scalar_t__ rf_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ural_softc*,int ) ;
 int FUNC_1 (struct ural_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ural_softc *VAR_8, int VAR_9)
{
 uint8_t VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_5) & ~VAR_2;
 if (VAR_9 == 1)
  VAR_10 |= VAR_0;
 else if (VAR_9 == 2)
  VAR_10 |= VAR_1;
 else
  VAR_10 |= VAR_3;


 if (VAR_8->rf_rev == VAR_6 || VAR_8->rf_rev == VAR_7)
  VAR_10 &= ~VAR_4;

 FUNC_1(VAR_8, VAR_5, VAR_10);
}
