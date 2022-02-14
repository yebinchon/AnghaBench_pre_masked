
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_softc {TYPE_2__* mii_pdata; } ;
struct ifmedia_entry {int ifm_media; } ;
struct TYPE_3__ {struct ifmedia_entry* ifm_cur; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mii_softc*,int) ;
 int FUNC_2 (struct mii_softc*,int,int) ;
 int FUNC_3 (struct mii_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_8)
{
 struct ifmedia_entry *VAR_9 = VAR_8->mii_pdata->mii_media.ifm_cur;
 uint32_t VAR_10;
 int VAR_11;


 FUNC_2(VAR_8, 29, 0x29);
 FUNC_2(VAR_8, 30, 0);

 VAR_10 = FUNC_1(VAR_8, VAR_0);

 VAR_10 |= VAR_2;

 VAR_10 &= ~VAR_3;

 VAR_10 |= VAR_1;

 VAR_10 |= VAR_4;
 FUNC_2(VAR_8, VAR_0, VAR_10);


 FUNC_3(VAR_8, VAR_9 == ((void*)0) ? VAR_6 : VAR_9->ifm_media);

 for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  FUNC_0(1);
  if ((FUNC_1(VAR_8, VAR_7) & VAR_5) == 0)
   break;
 }
}
