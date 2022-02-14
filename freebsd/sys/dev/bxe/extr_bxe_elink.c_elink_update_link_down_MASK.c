
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_vars {int eee_status; int link_status; scalar_t__ line_speed; int mac_type; int phy_flags; } ;
struct elink_params {int port; int chip_id; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct bxe_softc*,int ,int,int ) ;
 int FUNC_7 (struct elink_params*,struct elink_vars*,int ,int ) ;
 int FUNC_8 (struct elink_params*,int ) ;
 int FUNC_9 (struct elink_params*,int ) ;
 int FUNC_10 (struct elink_params*,int ) ;
 int FUNC_11 (struct elink_params*,int) ;

__attribute__((used)) static elink_status_t FUNC_12(struct elink_params *VAR_11,
      struct elink_vars *VAR_12)
{
 struct bxe_softc *VAR_13 = VAR_11->sc;
 uint8_t VAR_14 = VAR_11->port;

 FUNC_4(VAR_13, "Port %x: Link is down\n", VAR_14);
 FUNC_7(VAR_11, VAR_12, VAR_0, 0);
 VAR_12->phy_flags &= ~VAR_8;

 VAR_12->mac_type = VAR_2;


 VAR_12->link_status &= ~VAR_1;
 VAR_12->line_speed = 0;
 FUNC_10(VAR_11, VAR_12->link_status);


 FUNC_5(VAR_13, VAR_6 + VAR_14*4, 1);


 if (!FUNC_2(VAR_13))
  FUNC_5(VAR_13, VAR_7 + VAR_14*4, 0);

 FUNC_3(1000 * 10);

 if (FUNC_0(VAR_13) ||
     FUNC_1(VAR_13))
  FUNC_6(VAR_13, VAR_11->chip_id, VAR_11->port, 0);

 if (FUNC_2(VAR_13)) {

  FUNC_5(VAR_13, VAR_4 + (VAR_11->port << 2),
         0);
  FUNC_5(VAR_13, VAR_5 + (VAR_11->port << 2),
         0);
  VAR_12->eee_status &= ~(VAR_10 |
          VAR_9);

  FUNC_11(VAR_11, VAR_12->eee_status);
  FUNC_9(VAR_11, 0);
  FUNC_8(VAR_11, 0);
 }

 return VAR_3;
}
