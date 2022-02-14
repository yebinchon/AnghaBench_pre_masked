
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_6,
           struct elink_params *VAR_7,
           uint16_t VAR_8)
{
 struct bxe_softc *VAR_9 = VAR_7->sc;
 uint16_t VAR_10;


 FUNC_1(VAR_9, VAR_6,
     VAR_5,
     VAR_3, VAR_8);
 FUNC_0(VAR_9, VAR_6,
     VAR_4,
     VAR_0, &VAR_10);
 VAR_10 &= ~VAR_1;
 VAR_10 |= ((VAR_8<<3) & VAR_2);
 FUNC_1(VAR_9, VAR_6,
     VAR_4,
     VAR_0, VAR_10);
}
