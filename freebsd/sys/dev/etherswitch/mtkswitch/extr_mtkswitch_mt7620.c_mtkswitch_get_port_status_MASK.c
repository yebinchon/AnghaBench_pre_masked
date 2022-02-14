
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtkswitch_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct mtkswitch_softc*,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct mtkswitch_softc *VAR_12, int VAR_13)
{
 uint32_t VAR_14, VAR_15, VAR_16;

 FUNC_0(VAR_12, VAR_0);
 VAR_15 = 0;
 VAR_14 = VAR_12->hal.mtkswitch_read(VAR_12, FUNC_1(VAR_13));

 if (VAR_14 & VAR_9)
  VAR_15 |= VAR_2;
 if (VAR_14 & VAR_8)
  VAR_15 |= VAR_1;
 VAR_16 = FUNC_2(VAR_14);
 if (VAR_16 == 0)
  VAR_15 |= VAR_4;
 else if (VAR_16 == 1)
  VAR_15 |= VAR_5;
 else if (VAR_16 == 2)
  VAR_15 |= VAR_6;
 if (VAR_14 & VAR_11)
  VAR_15 |= VAR_7;
 if (VAR_14 & VAR_10)
  VAR_15 |= VAR_3;

 return (VAR_15);
}
