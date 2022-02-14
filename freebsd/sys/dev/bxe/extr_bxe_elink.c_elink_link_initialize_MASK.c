
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_vars {scalar_t__ line_speed; int link_status; } ;
struct elink_phy {scalar_t__ req_line_speed; int flags; int supported; int (* config_init ) (struct elink_phy*,struct elink_params*,struct elink_vars*) ;} ;
struct elink_params {scalar_t__ loopback_mode; int num_phys; int port; struct elink_phy* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct elink_params*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct elink_params*) ;
 int FUNC_7 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_8 (struct elink_phy*,struct elink_params*) ;
 int FUNC_9 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_10 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static elink_status_t FUNC_11(struct elink_params *VAR_16,
     struct elink_vars *VAR_17)
{
 uint8_t VAR_18, VAR_19;
 struct bxe_softc *VAR_20 = VAR_16->sc;





 VAR_17->line_speed = VAR_16->phy[VAR_3].req_line_speed;





 if (!FUNC_4(VAR_20))
  FUNC_7(&VAR_16->phy[VAR_3], VAR_16, VAR_17);

 VAR_19 = (FUNC_3(VAR_16) ||
         (VAR_16->loopback_mode == VAR_5));

 if (VAR_19 ||
     (VAR_16->phy[VAR_0].flags & VAR_2) ||
     (VAR_16->loopback_mode == VAR_4)) {
  struct elink_phy *VAR_21 = &VAR_16->phy[VAR_3];
  if (VAR_17->line_speed == VAR_10 &&
      (FUNC_0(VAR_20) ||
       FUNC_1(VAR_20)))
   FUNC_8(VAR_21, VAR_16);
  if (VAR_16->phy[VAR_3].config_init)
   VAR_16->phy[VAR_3].config_init(VAR_21, VAR_16, VAR_17);
 }




 VAR_17->line_speed = VAR_16->phy[VAR_3].req_line_speed;


 if (VAR_19) {
  if (VAR_16->phy[VAR_3].supported &
      VAR_12)
   VAR_17->link_status |= VAR_13;
 } else {
  for (VAR_18 = VAR_0; VAR_18 < VAR_16->num_phys;
        VAR_18++) {





   if (VAR_16->phy[VAR_18].supported &
       VAR_12)
    VAR_17->link_status |= VAR_13;

   if (VAR_18 == VAR_1 &&
       (FUNC_6(VAR_16) ==
        VAR_15)) {
    FUNC_2(VAR_20,
       "Not initializing second phy\n");
    continue;
   }
   VAR_16->phy[VAR_18].config_init(
    &VAR_16->phy[VAR_18],
    VAR_16, VAR_17);
  }
 }

 FUNC_5(VAR_20, VAR_14 +
         VAR_16->port*4,
         (VAR_8 |
   VAR_9 |
   VAR_7 |
   VAR_6));
 return VAR_11;
}
