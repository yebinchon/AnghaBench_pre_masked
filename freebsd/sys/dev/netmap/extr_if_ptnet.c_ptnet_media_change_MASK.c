
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct ptnet_softc {struct ifmedia media; } ;
typedef int if_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ptnet_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_t VAR_2)
{
 struct ptnet_softc *VAR_3 = FUNC_1(VAR_2);
 struct ifmedia *VAR_4 = &VAR_3->media;

 if (FUNC_0(VAR_4->ifm_media) != VAR_1) {
  return VAR_0;
 }

 return 0;
}
