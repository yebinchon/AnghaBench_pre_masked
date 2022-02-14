
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {scalar_t__ phy_flags; scalar_t__ link_up; } ;
struct elink_params {int port; int chip_id; int lfa_base; int link_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct elink_params*,struct elink_vars*,int) ;
 int FUNC_4 (struct bxe_softc*,int ,int,int) ;
 int FUNC_5 (struct elink_params*,int ) ;
 int FUNC_6 (struct elink_params*,int) ;
 int FUNC_7 (struct elink_params*,int) ;

elink_status_t FUNC_8(struct elink_params *VAR_3,
          struct elink_vars *VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_3->sc;
 VAR_4->link_up = 0;
 VAR_4->phy_flags = 0;
 VAR_3->link_flags &= ~VAR_0;
 if (!VAR_3->lfa_base)
  return FUNC_3(VAR_3, VAR_4, 1);




 FUNC_2(VAR_5, VAR_2 + VAR_3->port*4, 1);





 if (!FUNC_0(VAR_5))
  FUNC_4(VAR_5, VAR_3->chip_id, VAR_3->port, 0);

 if (FUNC_0(VAR_5)) {
  FUNC_7(VAR_3, 0);
  FUNC_6(VAR_3, 0);
 }

 FUNC_1(1000 * 10);




 FUNC_5(VAR_3, 0);







 if (!FUNC_0(VAR_5))
  FUNC_4(VAR_5, VAR_3->chip_id, VAR_3->port, 1);

 if (FUNC_0(VAR_5)) {
  FUNC_7(VAR_3, 1);
  FUNC_6(VAR_3, 1);
 }

 FUNC_2(VAR_5, VAR_2 + VAR_3->port*4, 0);
 return VAR_1;
}
