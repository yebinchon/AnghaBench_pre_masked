
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mii_softc {int mii_flags; scalar_t__ mii_inst; TYPE_2__* mii_pdata; } ;
struct ifmedia_entry {int ifm_media; } ;
struct TYPE_3__ {struct ifmedia_entry* ifm_cur; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mii_softc*,int ) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;

void
FUNC_4(struct mii_softc *VAR_5)
{
 struct ifmedia_entry *VAR_6 = VAR_5->mii_pdata->mii_media.ifm_cur;
 int VAR_7, VAR_8;

 if ((VAR_5->mii_flags & VAR_3) != 0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_2 | VAR_0;
 FUNC_3(VAR_5, VAR_4, VAR_8);


 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  VAR_8 = FUNC_2(VAR_5, VAR_4);
  if ((VAR_8 & VAR_2) == 0)
   break;
  FUNC_0(1000);
 }


 VAR_8 &= ~(VAR_1 | VAR_0);
 if ((VAR_5->mii_flags & VAR_3) == 0 &&
     ((VAR_6 == ((void*)0) && VAR_5->mii_inst != 0) ||
     (VAR_6 != ((void*)0) && FUNC_1(VAR_6->ifm_media) != VAR_5->mii_inst)))
  VAR_8 |= VAR_0;
 if (FUNC_2(VAR_5, VAR_4) != VAR_8)
  FUNC_3(VAR_5, VAR_4, VAR_8);
}
