
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_0,
          struct elink_phy *VAR_1,
          uint8_t VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 uint16_t VAR_5;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5 & VAR_4);
}
