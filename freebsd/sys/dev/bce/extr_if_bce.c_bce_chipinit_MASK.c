
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int bce_flags; int bus_speed_mhz; } ;


 scalar_t__ FUNC_0 (struct bce_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct bce_softc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_4 (struct bce_softc*,int ) ;
 int FUNC_5 (struct bce_softc*,int ,int) ;
 int FUNC_6 (struct bce_softc*,int ,int ) ;
 int FUNC_7 (struct bce_softc*) ;
 int FUNC_8 (struct bce_softc*) ;
 int FUNC_9 (struct bce_softc*) ;
 int FUNC_10 (struct bce_softc*) ;

__attribute__((used)) static int
FUNC_11(struct bce_softc *VAR_37)
{
 u32 VAR_38;
 int VAR_39 = 0;

 FUNC_2(VAR_31);

 FUNC_7(VAR_37);





 VAR_38 = VAR_9 |
     VAR_10 |

     VAR_5 |

     VAR_8 |
     VAR_33 << 12 |
     VAR_34 << 16;

 VAR_38 |= (0x2 << 20) | VAR_6;

 if ((VAR_37->bce_flags & VAR_24) && (VAR_37->bus_speed_mhz == 133))
  VAR_38 |= VAR_11;






 if ((FUNC_1(VAR_37) == VAR_2) &&
     (FUNC_0(VAR_37) != VAR_0) &&
     !(VAR_37->bce_flags & VAR_24))
  VAR_38 |= VAR_7;

 FUNC_5(VAR_37, VAR_4, VAR_38);


 FUNC_5(VAR_37, VAR_13,
     VAR_14 |
     VAR_16 |
     VAR_15);


 if ((VAR_39 = FUNC_9(VAR_37)) != 0)
  goto bce_chipinit_exit;


 FUNC_8(VAR_37);


 if (VAR_37->bce_flags & VAR_12) {
  VAR_38 = FUNC_4(VAR_37, VAR_25) | VAR_26;
  FUNC_5(VAR_37, VAR_25, VAR_38);
 }


 if ((VAR_39 = FUNC_10(VAR_37)) != 0)
  goto bce_chipinit_exit;


 VAR_38 = FUNC_4(VAR_37, VAR_17);
 VAR_38 &= ~VAR_20;
 VAR_38 |= VAR_21;


 if (FUNC_1(VAR_37) == VAR_3) {
  VAR_38 |= VAR_18;
  if (FUNC_0(VAR_37) == VAR_1)
   VAR_38 |= VAR_19;
 }

 FUNC_5(VAR_37, VAR_17, VAR_38);

 VAR_38 = 0x10000 + (VAR_35 * VAR_36);
 FUNC_5(VAR_37, VAR_22, VAR_38);
 FUNC_5(VAR_37, VAR_23, VAR_38);


 VAR_38 = (VAR_32 - 8) << 24;
 FUNC_5(VAR_37, VAR_27, VAR_38);


 VAR_38 = FUNC_4(VAR_37, VAR_29);
 VAR_38 &= ~VAR_30;
 VAR_38 |= (VAR_32 - 8) << 24 | 0x40;
 FUNC_5(VAR_37, VAR_29, VAR_38);


 FUNC_6(VAR_37, VAR_28, 0);

bce_chipinit_exit:
 FUNC_3(VAR_31);

 return(VAR_39);
}
