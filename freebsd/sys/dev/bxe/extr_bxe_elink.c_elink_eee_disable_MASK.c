
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int eee_status; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static elink_status_t FUNC_2(struct elink_phy *VAR_5,
    struct elink_params *VAR_6,
    struct elink_vars *VAR_7)
{
 struct bxe_softc *VAR_8 = VAR_6->sc;


 FUNC_0(VAR_8, VAR_3 + (VAR_6->port << 2), 0);

 FUNC_1(VAR_8, VAR_5, VAR_1, VAR_2, 0x0);

 VAR_7->eee_status &= ~VAR_4;

 return VAR_0;
}
