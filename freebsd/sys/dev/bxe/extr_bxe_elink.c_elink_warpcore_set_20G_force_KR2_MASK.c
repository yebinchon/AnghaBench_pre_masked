
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;
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
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_5 (struct elink_params*,struct elink_phy*) ;

__attribute__((used)) static void FUNC_6(struct elink_phy *VAR_13,
          struct elink_params *VAR_14)
{
 uint16_t VAR_15;
 struct bxe_softc *VAR_16 = VAR_14->sc;

 FUNC_0(VAR_16, VAR_13, VAR_4,
     VAR_0, 0);


 FUNC_2(VAR_16, VAR_13, VAR_5,
      VAR_12, ~(1<<13));

 FUNC_5(VAR_14, VAR_13);

 FUNC_2(VAR_16, VAR_13, VAR_3,
      VAR_10, ~(1<<1));
 FUNC_4(VAR_16, VAR_13, VAR_1,
    VAR_2, 0);

 FUNC_1(VAR_16, VAR_13, VAR_5,
   VAR_8, &VAR_15);
 VAR_15 &= ~(1<<5);
 VAR_15 |= (1<<6);
 FUNC_4(VAR_16, VAR_13, VAR_5,
    VAR_8, VAR_15);


 FUNC_3(VAR_16, VAR_13, VAR_5,
     VAR_11, 0x1f);

 FUNC_3(VAR_16, VAR_13, VAR_5,
     VAR_9, (1<<7));

 FUNC_1(VAR_16, VAR_13, VAR_5,
   VAR_6, &VAR_15);
 VAR_15 &= ~(3<<14);
 VAR_15 |= (1<<15);
 FUNC_4(VAR_16, VAR_13, VAR_5,
    VAR_6, VAR_15);
 FUNC_4(VAR_16, VAR_13, VAR_5,
    VAR_7, 0x835A);


 FUNC_0(VAR_16, VAR_13, VAR_4,
     VAR_0, 0);

 FUNC_3(VAR_16, VAR_13, VAR_5,
     VAR_12, (1<<13));

 FUNC_5(VAR_14, VAR_13);
}
