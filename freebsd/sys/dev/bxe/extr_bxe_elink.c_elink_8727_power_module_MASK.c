
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct elink_phy {int flags; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bxe_softc *VAR_3,
        struct elink_phy *VAR_4,
        uint8_t VAR_5) {

 uint16_t VAR_6;
 if (VAR_4->flags & VAR_0)
  return;
 if (VAR_5)
  VAR_6 = (1<<4);
 else



  VAR_6 = (1<<1);

 FUNC_0(VAR_3, VAR_4,
    VAR_1,
    VAR_2,
    VAR_6);
}
