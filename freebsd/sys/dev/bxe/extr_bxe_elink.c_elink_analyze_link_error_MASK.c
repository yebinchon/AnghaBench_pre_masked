
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_vars {int phy_flags; int link_up; int link_status; int periodic_flags; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 int VAR_6 ;

 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct elink_params*,struct elink_vars*,int,int ) ;
 int FUNC_5 (struct elink_params*,struct elink_vars*) ;
 int FUNC_6 (struct elink_params*,int) ;

__attribute__((used)) static uint8_t FUNC_7(struct elink_params *VAR_7,
        struct elink_vars *VAR_8, uint32_t VAR_9,
        uint32_t VAR_10, uint32_t VAR_11, uint8_t VAR_12)
{
 struct bxe_softc *VAR_13 = VAR_7->sc;

 uint8_t VAR_14;
 uint32_t VAR_15 = (VAR_8->phy_flags & VAR_10) ? 1 : 0;

 if ((VAR_9 ^ VAR_15) == 0)
  return 0;


 switch (VAR_10) {
 case 129:
  FUNC_0(VAR_13, "Analyze Remote Fault\n");
  break;
 case 128:
  FUNC_0(VAR_13, "Analyze TX Fault\n");
  break;
 default:
  FUNC_0(VAR_13, "Analyze UNKNOWN\n");
 }
 FUNC_1(VAR_13, "Link changed:[%x %x]->%x\n", VAR_8->link_up,
    VAR_15, VAR_9);


 if ((VAR_8->phy_flags & VAR_6) == 0)
  return 1;




 if (VAR_9) {
  VAR_8->link_status &= ~VAR_4;
  VAR_8->link_status |= VAR_11;
  VAR_8->link_up = 0;
  VAR_8->phy_flags |= VAR_10;


  FUNC_2(VAR_13, VAR_5 + VAR_7->port*4, 1);



  VAR_14 = VAR_0;
 } else {
  VAR_8->link_status |= VAR_4;
  VAR_8->link_status &= ~VAR_11;
  VAR_8->link_up = 1;
  VAR_8->phy_flags &= ~VAR_10;
  VAR_14 = VAR_1;


  FUNC_2(VAR_13, VAR_5 + VAR_7->port*4, 0);
 }
 FUNC_5(VAR_7, VAR_8);

 FUNC_4(VAR_7, VAR_8, VAR_14, VAR_3);


 FUNC_6(VAR_7, VAR_8->link_status);


 VAR_8->periodic_flags |= VAR_2;
 if (VAR_12)
  FUNC_3(VAR_13);

 return 1;
}
