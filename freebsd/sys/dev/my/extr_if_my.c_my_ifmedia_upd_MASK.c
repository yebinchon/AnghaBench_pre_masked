
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct my_softc {struct ifmedia ifmedia; } ;
struct ifnet {struct my_softc* if_softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct my_softc*) ;
 int FUNC_3 (struct my_softc*) ;
 int FUNC_4 (struct my_softc*,int ,int) ;
 int FUNC_5 (struct my_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ifnet * VAR_4)
{
 struct my_softc *VAR_5;
 struct ifmedia *VAR_6;

 VAR_5 = VAR_4->if_softc;
 FUNC_2(VAR_5);
 VAR_6 = &VAR_5->ifmedia;
 if (FUNC_1(VAR_6->ifm_media) != VAR_2) {
  FUNC_3(VAR_5);
  return (VAR_0);
 }
 if (FUNC_0(VAR_6->ifm_media) == VAR_1)
  FUNC_4(VAR_5, VAR_3, 1);
 else
  FUNC_5(VAR_5, VAR_6->ifm_media);
 FUNC_3(VAR_5);
 return (0);
}
