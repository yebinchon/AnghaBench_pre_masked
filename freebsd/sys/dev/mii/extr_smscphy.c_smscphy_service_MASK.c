
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_ticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;

 int const FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int ,int) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*,int) ;
 int FUNC_7 (struct mii_softc*,int ) ;

__attribute__((used)) static int
FUNC_8(struct mii_softc *VAR_5, struct mii_data *VAR_6, int VAR_7)
{
        struct ifmedia_entry *VAR_8;
        int VAR_9;

 VAR_8 = VAR_6->mii_media.ifm_cur;

        switch (VAR_7) {
        case 129:
                break;

        case 130:
  switch (FUNC_0(VAR_8->ifm_media)) {
  case 131:
   FUNC_7(VAR_5, VAR_8->ifm_media);
   break;

  default:
                 FUNC_5(VAR_5);
   break;
  }

                break;

        case 128:
  if (FUNC_0(VAR_8->ifm_media) != 131) {
   break;
  }


  VAR_9 = FUNC_1(VAR_5, VAR_3);
  if (VAR_9 & VAR_0) {
   FUNC_4(VAR_5, VAR_3, VAR_9 & ~VAR_0);
  }

  VAR_9 = FUNC_1(VAR_5, VAR_4) | FUNC_1(VAR_5, VAR_4);
  if (VAR_9 & VAR_1) {
   VAR_5->mii_ticks = 0;
   break;
  }

  if (++VAR_5->mii_ticks <= VAR_2) {
   break;
  }

  VAR_5->mii_ticks = 0;
  FUNC_2(VAR_5);
  FUNC_7(VAR_5, VAR_8->ifm_media);
                break;
        }


        FUNC_3(VAR_5);


        FUNC_6(VAR_5, VAR_7);
        return (0);
}
