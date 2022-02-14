
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct arge_softc* if_softc; } ;
struct ifmedia_entry {int ifm_media; } ;
struct ifmedia {int ifm_media; struct ifmedia_entry* ifm_cur; } ;
struct arge_softc {int arge_dev; struct ifmedia arge_ifmedia; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct ifnet *VAR_3)
{
 struct arge_softc *VAR_4 = VAR_3->if_softc;
 struct ifmedia *VAR_5 = &VAR_4->arge_ifmedia;
 struct ifmedia_entry *VAR_6 = VAR_5->ifm_cur;

 if (FUNC_1(VAR_5->ifm_media) != VAR_2)
  return (VAR_0);

 if (FUNC_0(VAR_6->ifm_media) == VAR_1) {
  FUNC_2(VAR_4->arge_dev,
      "AUTO is not supported for multiphy MAC");
  return (VAR_0);
 }




 return (0);
}
