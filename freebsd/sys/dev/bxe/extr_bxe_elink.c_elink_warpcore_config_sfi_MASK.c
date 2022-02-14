
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {scalar_t__ media_type; } ;
struct elink_params {scalar_t__* req_line_speed; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct elink_phy*,struct elink_params*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,int ) ;
 int FUNC_4 (struct elink_phy*,struct elink_params*,int ) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct elink_phy *VAR_3,
          struct elink_params *VAR_4)
{
 uint16_t VAR_5 = FUNC_2(VAR_3, VAR_4);
 struct bxe_softc *VAR_6 = VAR_4->sc;
 FUNC_3(VAR_3, VAR_4, VAR_5);
 if ((VAR_4->req_line_speed[FUNC_1(VAR_1)] ==
      VAR_2) &&
     (VAR_3->media_type != VAR_0)) {
  FUNC_0(VAR_6, "Setting 10G SFI\n");
  FUNC_4(VAR_3, VAR_4, 0);
 } else {
  FUNC_0(VAR_6, "Setting 1G Fiber\n");
  FUNC_5(VAR_3, VAR_4, 1, 0);
 }
}
