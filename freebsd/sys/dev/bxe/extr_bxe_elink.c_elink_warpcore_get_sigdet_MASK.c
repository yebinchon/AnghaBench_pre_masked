
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static int FUNC_2(struct elink_phy *VAR_2,
         struct elink_params *VAR_3)
{
 uint16_t VAR_4, VAR_5;
 struct bxe_softc *VAR_6 = VAR_3->sc;

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_6, VAR_2, VAR_0, VAR_1,
     &VAR_4);

 return (VAR_4 >> (8+VAR_5)) & 0x1;
}
