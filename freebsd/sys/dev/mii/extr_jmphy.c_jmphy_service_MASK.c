
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
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,struct ifmedia_entry*) ;
 int FUNC_4 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_5, struct mii_data *VAR_6, int VAR_7)
{
 struct ifmedia_entry *VAR_8 = VAR_6->mii_media.ifm_cur;

 switch (VAR_7) {
 case 129:
  break;

 case 130:
  if (FUNC_3(VAR_5, VAR_8) != VAR_1)
   return (VAR_0);
  break;

 case 128:



  if (FUNC_0(VAR_8->ifm_media) != VAR_2) {
   VAR_5->mii_ticks = 0;
   break;
  }


  if ((FUNC_1(VAR_5, VAR_3) & VAR_4) != 0) {
   VAR_5->mii_ticks = 0;
   break;
  }


  if (VAR_5->mii_ticks++ == 0)
   break;
  if (VAR_5->mii_ticks <= VAR_5->mii_anegticks)
   return (0);

  VAR_5->mii_ticks = 0;
  (void)FUNC_3(VAR_5, VAR_8);
  break;
 }


 FUNC_2(VAR_5);


 FUNC_4(VAR_5, VAR_7);
 return (0);
}
