
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mii_softc*,int ) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_4)
{
 struct ifmedia_entry *VAR_5 = VAR_4->mii_pdata->mii_media.ifm_cur;
 int VAR_6, VAR_7;

 if ((VAR_4->mii_flags & VAR_2) != 0)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_1 | VAR_0;
 FUNC_3(VAR_4, VAR_3, VAR_6);
 FUNC_0(1000);
 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  VAR_6 = FUNC_2(VAR_4, VAR_3);
  if (VAR_6 != 0 && (VAR_6 & VAR_1) == 0)
   break;
  FUNC_0(2000);
 }

 if ((VAR_4->mii_flags & VAR_2) == 0) {
  if ((VAR_5 == ((void*)0) && VAR_4->mii_inst != 0) ||
      (VAR_5 != ((void*)0) && FUNC_1(VAR_5->ifm_media) != VAR_4->mii_inst))
   FUNC_3(VAR_4, VAR_3, VAR_6 | VAR_0);
 }
}
