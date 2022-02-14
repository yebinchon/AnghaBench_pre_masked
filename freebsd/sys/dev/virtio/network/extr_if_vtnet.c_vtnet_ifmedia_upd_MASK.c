
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct vtnet_softc {struct ifmedia vtnet_media; } ;
struct ifnet {struct vtnet_softc* if_softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct ifmedia *VAR_4;

 VAR_3 = VAR_2->if_softc;
 VAR_4 = &VAR_3->vtnet_media;

 if (FUNC_0(VAR_4->ifm_media) != VAR_1)
  return (VAR_0);

 return (0);
}
