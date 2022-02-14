
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_4, struct mii_data *VAR_5, int VAR_6)
{
 struct ifmedia_entry *VAR_7 = VAR_5->mii_media.ifm_cur;
 int VAR_8;

 switch (VAR_6) {
 case 129:
  break;

 case 130:
  FUNC_5(VAR_4);
  break;

 case 128:



  if (FUNC_0(VAR_7->ifm_media) != VAR_1)
   break;






  VAR_8 = FUNC_1(VAR_4, VAR_2) |
      FUNC_1(VAR_4, VAR_2);
  if (VAR_8 & VAR_3)
   break;


  if (VAR_4->mii_ticks <= VAR_4->mii_anegticks)
   break;

  VAR_4->mii_ticks = 0;
  FUNC_2(VAR_4);
  if (FUNC_4(VAR_4) == VAR_0)
   return (0);
  break;
 }


 FUNC_3(VAR_4);


 FUNC_6(VAR_4, VAR_6);

 return (0);
}
