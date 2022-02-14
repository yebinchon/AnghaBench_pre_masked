
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_2 (struct elink_phy*,struct elink_params*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_4,
          struct elink_phy *VAR_5,
          uint16_t VAR_6)
{
 uint16_t VAR_7 = 0;
 uint16_t VAR_8 = VAR_2;
 struct bxe_softc *VAR_9 = VAR_4->sc;

 uint8_t VAR_10 = FUNC_2(VAR_5, VAR_4);

 FUNC_0(VAR_9, VAR_5, VAR_0,
   VAR_1, &VAR_7);
 VAR_7 &= ~(0xf << (VAR_10 << 2));

 switch (VAR_6) {
 case 129:
 case 130:
  VAR_8 = VAR_2;
  break;
 case 128:
 case 131:
  VAR_8 = VAR_3;
  break;
 default:
  break;
 }

 VAR_7 |= (VAR_8 << (VAR_10 << 2));
 FUNC_1(VAR_9, VAR_5, VAR_0,
    VAR_1, VAR_7);

 FUNC_0(VAR_9, VAR_5, VAR_0,
   VAR_1, &VAR_7);


 FUNC_3(VAR_9, VAR_5, 1);
 FUNC_3(VAR_9, VAR_5, 0);

}
