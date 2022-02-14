
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct sfxge_softc {int enp; TYPE_1__ media; } ;
struct ifnet {struct sfxge_softc* if_softc; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int FUNC_0 (struct sfxge_softc*) ;
 int FUNC_1 (struct sfxge_softc*) ;
 int FUNC_2 (struct sfxge_softc*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sfxge_softc*,int ,int *) ;
 int FUNC_6 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_1)
{
 struct sfxge_softc *VAR_2;
 struct ifmedia_entry *VAR_3;
 int VAR_4;
 uint32_t VAR_5;

 VAR_2 = VAR_1->if_softc;
 VAR_3 = VAR_2->media.ifm_cur;

 FUNC_0(VAR_2);

 if (!FUNC_2(VAR_2)) {
  VAR_4 = 0;
  goto out;
 }

 VAR_4 = FUNC_3(VAR_2->enp, FUNC_6(VAR_2), VAR_0);
 if (VAR_4 != 0)
  goto out;

 if ((VAR_4 = FUNC_5(VAR_2, VAR_3->ifm_media, &VAR_5)) != 0)
  goto out;

 VAR_4 = FUNC_4(VAR_2->enp, VAR_5);
out:
 FUNC_1(VAR_2);

 return (VAR_4);
}
