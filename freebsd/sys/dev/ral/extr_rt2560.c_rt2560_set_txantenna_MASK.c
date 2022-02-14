
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2560_softc {scalar_t__ rf_rev; } ;


 int FUNC_0 (struct rt2560_softc*,int ) ;
 int FUNC_1 (struct rt2560_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct rt2560_softc*,int ) ;
 int FUNC_3 (struct rt2560_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct rt2560_softc *VAR_10, int VAR_11)
{
 uint32_t VAR_12;
 uint8_t VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_6) & ~VAR_3;
 if (VAR_11 == 1)
  VAR_13 |= VAR_1;
 else if (VAR_11 == 2)
  VAR_13 |= VAR_2;
 else
  VAR_13 |= VAR_4;


 if (VAR_10->rf_rev == VAR_7 || VAR_10->rf_rev == VAR_8 ||
     VAR_10->rf_rev == VAR_9)
  VAR_13 |= VAR_5;

 FUNC_3(VAR_10, VAR_6, VAR_13);


 VAR_12 = FUNC_0(VAR_10, VAR_0) & ~0x00070007;
 VAR_12 |= (VAR_13 & 0x7) << 16 | (VAR_13 & 0x7);
 FUNC_1(VAR_10, VAR_0, VAR_12);
}
