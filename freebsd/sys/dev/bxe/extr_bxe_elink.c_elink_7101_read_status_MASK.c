
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int link_status; int duplex; int line_speed; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,struct elink_vars*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static uint8_t FUNC_4(struct elink_phy *VAR_8,
     struct elink_params *VAR_9,
     struct elink_vars *VAR_10)
{
 struct bxe_softc *VAR_11 = VAR_9->sc;
 uint8_t VAR_12;
 uint16_t VAR_13, VAR_14;
 FUNC_1(VAR_11, VAR_8,
   VAR_5, VAR_6, &VAR_14);
 FUNC_1(VAR_11, VAR_8,
   VAR_5, VAR_6, &VAR_13);
 FUNC_0(VAR_11, "10G-base-T LASI status 0x%x->0x%x\n",
     VAR_14, VAR_13);
 FUNC_1(VAR_11, VAR_8,
   VAR_5, VAR_7, &VAR_14);
 FUNC_1(VAR_11, VAR_8,
   VAR_5, VAR_7, &VAR_13);
 FUNC_0(VAR_11, "10G-base-T PMA status 0x%x->0x%x\n",
     VAR_14, VAR_13);
 VAR_12 = ((VAR_13 & 4) == 4);

 if (VAR_12) {
  FUNC_1(VAR_11, VAR_8,
    VAR_3, VAR_4,
    &VAR_14);
  VAR_10->line_speed = VAR_1;
  VAR_10->duplex = VAR_0;
  FUNC_0(VAR_11, "SFX7101 AN status 0x%x->Master=%x\n",
      VAR_14, (VAR_14 & (1<<14)));
  FUNC_2(VAR_11, VAR_8, VAR_10);
  FUNC_3(VAR_8, VAR_9, VAR_10);


  if (VAR_14 & (1<<11))
   VAR_10->link_status |=
    VAR_2;
 }
 return VAR_12;
}
