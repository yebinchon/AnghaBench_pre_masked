
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int dummy; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {int mii_media_active; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int const VAR_3 ;

 scalar_t__ FUNC_0 (int) ;



 int FUNC_1 (struct mii_softc*) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_4, struct mii_data *VAR_5, int VAR_6)
{
 struct ifmedia_entry *VAR_7 = VAR_5->mii_media.ifm_cur;

 switch (VAR_6) {
 case 129:
  break;

 case 130:
  switch (FUNC_0(VAR_7->ifm_media)) {
  case 131:
   FUNC_2(VAR_4);
   break;
  default:
   return (VAR_0);
  }
  break;

 case 128:
  if (FUNC_3(VAR_4) == VAR_1)
   return (0);
  break;
 }


 FUNC_1(VAR_4);
 if (FUNC_0(VAR_5->mii_media_active) == VAR_2)
  VAR_5->mii_media_active = VAR_3 | 131;


 FUNC_4(VAR_4, VAR_6);
 return (0);
}
