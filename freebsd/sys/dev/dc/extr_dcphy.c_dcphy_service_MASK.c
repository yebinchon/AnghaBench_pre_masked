
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct mii_softc {int mii_ticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {int mii_ifp; int mii_media_active; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;
struct dc_softc {int dummy; } ;


 void* FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dc_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct dc_softc*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;
 int VAR_16 ;
 int const FUNC_4 (int) ;



 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*) ;
 int FUNC_7 (struct mii_softc*) ;
 int FUNC_8 (int ) ;
 struct dc_softc* FUNC_9 (int ) ;
 int FUNC_10 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_11(struct mii_softc *VAR_17, struct mii_data *VAR_18, int VAR_19)
{
 struct dc_softc *VAR_20;
 struct ifmedia_entry *VAR_21 = VAR_18->mii_media.ifm_cur;
 int VAR_22;
 u_int32_t VAR_23;

 VAR_20 = FUNC_9(VAR_18->mii_ifp);

 switch (VAR_19) {
 case 129:
  break;

 case 130:



  if ((FUNC_8(VAR_18->mii_ifp) & VAR_14) == 0)
   break;

  VAR_18->mii_media_active = VAR_16;
  VAR_23 = FUNC_0(VAR_20, VAR_2);
  VAR_23 &= ~(VAR_3 | VAR_5 |
      VAR_4 | VAR_6 | VAR_7);

  switch (FUNC_4(VAR_21->ifm_media)) {
  case 131:

   (void)FUNC_7(VAR_17);
   break;
  case 133:
   FUNC_5(VAR_17);
   FUNC_2(VAR_20, VAR_0, VAR_10);
   VAR_23 |= VAR_5 | VAR_4 |
       VAR_6;
   if ((VAR_21->ifm_media & VAR_15) != 0)
    VAR_23 |= VAR_3;
   else
    VAR_23 &= ~VAR_3;
   FUNC_1(VAR_20, VAR_2, VAR_23);
   break;
  case 132:
   FUNC_2(VAR_20, VAR_8, VAR_9);
   FUNC_2(VAR_20, VAR_0, 0xFFFF);
   if ((VAR_21->ifm_media & VAR_15) != 0)
    FUNC_3(VAR_20, VAR_0, 0x7F3D);
   else
    FUNC_3(VAR_20, VAR_0, 0x7F3F);
   FUNC_3(VAR_20, VAR_8, VAR_9);
   FUNC_2(VAR_20, VAR_0, VAR_10);
   VAR_23 &= ~VAR_5;
   VAR_23 |= VAR_7;
   if ((VAR_21->ifm_media & VAR_15) != 0)
    VAR_23 |= VAR_3;
   else
    VAR_23 &= ~VAR_3;
   FUNC_1(VAR_20, VAR_2, VAR_23);
   break;
  default:
   return (VAR_13);
  }
  break;

 case 128:



  if ((FUNC_8(VAR_18->mii_ifp) & VAR_14) == 0)
   return (0);




  if (FUNC_4(VAR_21->ifm_media) != 131)
   break;

  VAR_22 = FUNC_0(VAR_20, VAR_1);
  if (!(VAR_22 & VAR_11) || !(VAR_22 & VAR_12))
   break;
                if (++VAR_17->mii_ticks <= 50)
   break;

  VAR_17->mii_ticks = 0;
  FUNC_7(VAR_17);

  break;
 }


 FUNC_6(VAR_17);


 FUNC_10(VAR_17, VAR_19);
 return (0);
}
