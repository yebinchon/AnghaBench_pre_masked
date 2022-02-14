
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int fb_width; int fb_height; } ;
struct aml8726_fb_softc {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_0 (struct aml8726_fb_softc*,int ) ;
 int FUNC_1 (struct aml8726_fb_softc*,int ,int) ;
 int FUNC_2 (struct aml8726_fb_softc*,int ) ;
 int FUNC_3 (struct aml8726_fb_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct aml8726_fb_softc *VAR_45)
{
 uint32_t VAR_46;
 VAR_46 = (32 << VAR_36);
 VAR_46 |= VAR_35;
 VAR_46 |= (4 << VAR_37);

 FUNC_1(VAR_45, VAR_7, VAR_46);
 FUNC_1(VAR_45, VAR_9, VAR_46);

 VAR_46 = FUNC_2(VAR_45, VAR_42);

 VAR_46 &= ~VAR_41;
 VAR_46 |= VAR_40;
 VAR_46 &= ~(VAR_38 | VAR_39
     | VAR_43 | VAR_44);

 FUNC_3(VAR_45, VAR_42, VAR_46);

 VAR_46 = VAR_34;
 VAR_46 |= (0xff << VAR_31);

 FUNC_1(VAR_45, VAR_6, VAR_46);
 FUNC_1(VAR_45, VAR_8, VAR_46);



 VAR_46 = (VAR_0 << VAR_12)
     | VAR_13
     | VAR_10
     | VAR_14
     | VAR_11;

 FUNC_1(VAR_45, VAR_1, VAR_46);



 VAR_46 = ((VAR_45->info.fb_width - 1) << VAR_16)
     & VAR_15;
 VAR_46 |= (0 << VAR_18)
     & VAR_17;

 FUNC_1(VAR_45, VAR_2, VAR_46);

 VAR_46 = ((VAR_45->info.fb_height - 1) << VAR_20)
     & VAR_19;
 VAR_46 |= (0 << VAR_22)
     & VAR_21;

 FUNC_1(VAR_45, VAR_3, VAR_46);

 VAR_46 = ((VAR_45->info.fb_width - 1) << VAR_24)
     & VAR_23;
 VAR_46 |= (0 << VAR_26)
     & VAR_25;

 FUNC_1(VAR_45, VAR_4, VAR_46);

 VAR_46 = ((VAR_45->info.fb_height - 1) << VAR_28)
     & VAR_27;
 VAR_46 |= (0 << VAR_30)
     & VAR_29;

 FUNC_1(VAR_45, VAR_5, VAR_46);



 VAR_46 = FUNC_0(VAR_45, VAR_6);

 VAR_46 &= ~VAR_32;
 VAR_46 |= 1 << VAR_33;

 FUNC_1(VAR_45, VAR_6, VAR_46);



 VAR_46 = FUNC_2(VAR_45, VAR_42);

 VAR_46 |= VAR_38;

 FUNC_3(VAR_45, VAR_42, VAR_46);
}
