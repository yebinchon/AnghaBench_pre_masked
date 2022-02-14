
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct hme_softc {scalar_t__* sc_phys; TYPE_3__* sc_mii; } ;
struct TYPE_5__ {TYPE_1__* ifm_cur; } ;
struct TYPE_6__ {TYPE_2__ mii_media; } ;
struct TYPE_4__ {int ifm_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct hme_softc*,int ) ;
 int FUNC_1 (struct hme_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hme_softc*,int ,int ) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct hme_softc *VAR_4)
{
 u_int32_t VAR_5;





 FUNC_2(VAR_4, VAR_2, 0);







 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_4->sc_mii != ((void*)0) && VAR_4->sc_mii->mii_media.ifm_cur != ((void*)0) &&
     VAR_4->sc_phys[FUNC_3(VAR_4->sc_mii->mii_media.ifm_cur->ifm_media)] ==
     VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);
}
