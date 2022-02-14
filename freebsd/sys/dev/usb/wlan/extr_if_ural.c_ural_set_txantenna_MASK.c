
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ural_softc {scalar_t__ rf_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct ural_softc*,int ) ;
 int FUNC_1 (struct ural_softc*,int ,int) ;
 int FUNC_2 (struct ural_softc*,int ) ;
 int FUNC_3 (struct ural_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ural_softc *VAR_11, int VAR_12)
{
 uint16_t VAR_13;
 uint8_t VAR_14;

 VAR_14 = FUNC_0(VAR_11, VAR_5) & ~VAR_2;
 if (VAR_12 == 1)
  VAR_14 |= VAR_0;
 else if (VAR_12 == 2)
  VAR_14 |= VAR_1;
 else
  VAR_14 |= VAR_3;


 if (VAR_11->rf_rev == VAR_8 || VAR_11->rf_rev == VAR_9 ||
     VAR_11->rf_rev == VAR_10)
  VAR_14 |= VAR_4;

 FUNC_1(VAR_11, VAR_5, VAR_14);


 VAR_13 = FUNC_2(VAR_11, VAR_6) & ~0x7;
 FUNC_3(VAR_11, VAR_6, VAR_13 | (VAR_14 & 0x7));

 VAR_13 = FUNC_2(VAR_11, VAR_7) & ~0x7;
 FUNC_3(VAR_11, VAR_7, VAR_13 | (VAR_14 & 0x7));
}
