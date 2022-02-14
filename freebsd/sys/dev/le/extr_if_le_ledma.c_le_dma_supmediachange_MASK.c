
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct lance_softc {struct ifmedia sc_media; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct lance_softc*) ;
 int FUNC_3 (struct lance_softc*) ;

__attribute__((used)) static int
FUNC_4(struct lance_softc *VAR_2)
{
 struct ifmedia *VAR_3 = &VAR_2->sc_media;

 if (FUNC_1(VAR_3->ifm_media) != VAR_1)
  return (VAR_0);






 switch (FUNC_0(VAR_3->ifm_media)) {
 case 129:
  FUNC_3(VAR_2);
  break;

 case 130:
  FUNC_2(VAR_2);
  break;

 case 128:
  break;

 default:
  return (VAR_0);
 }

 return (0);
}
