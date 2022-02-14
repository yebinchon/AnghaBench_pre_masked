
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int dummy; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_phy *VAR_4,
      struct elink_params *VAR_5,
      struct elink_vars *VAR_6)
{
 struct bxe_softc *VAR_7 = VAR_5->sc;

 FUNC_1(VAR_7, VAR_2,
         VAR_3, VAR_5->port);


 FUNC_3(VAR_7, VAR_5->port);
 FUNC_4(VAR_7, VAR_4, VAR_5);

 FUNC_2(VAR_7, VAR_4, VAR_0, VAR_1, 1<<15);
 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
