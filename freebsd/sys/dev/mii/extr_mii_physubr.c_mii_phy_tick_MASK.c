
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mii_softc {scalar_t__ mii_ticks; scalar_t__ mii_anegticks; TYPE_2__* mii_pdata; } ;
struct ifmedia_entry {int ifm_media; } ;
struct TYPE_3__ {struct ifmedia_entry* ifm_cur; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;

int
FUNC_4(struct mii_softc *VAR_5)
{
 struct ifmedia_entry *VAR_6 = VAR_5->mii_pdata->mii_media.ifm_cur;
 int VAR_7;







 if (FUNC_0(VAR_6->ifm_media) != VAR_2) {
  VAR_5->mii_ticks = 0;
  return (0);
 }


 VAR_7 = FUNC_1(VAR_5, VAR_4) | FUNC_1(VAR_5, VAR_4);
 if ((VAR_7 & VAR_0) != 0) {
  VAR_5->mii_ticks = 0;

  return (0);
 }


 if (VAR_5->mii_ticks++ == 0)
  return (0);


 if (VAR_5->mii_anegticks == 0)
  VAR_5->mii_anegticks = VAR_3;


 if (VAR_5->mii_ticks <= VAR_5->mii_anegticks)
  return (VAR_1);

 VAR_5->mii_ticks = 0;
 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 return (0);
}
