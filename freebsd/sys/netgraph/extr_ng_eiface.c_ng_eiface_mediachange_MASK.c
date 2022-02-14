
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {void* if_baudrate; int if_softc; } ;
struct ifmedia {int ifm_media; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_2__ {struct ifmedia media; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_4)
{
 const priv_p VAR_5 = (priv_p)VAR_4->if_softc;
 struct ifmedia *VAR_6 = &VAR_5->media;

 if (FUNC_1(VAR_6->ifm_media) != VAR_3)
  return (VAR_0);
 if (FUNC_0(VAR_6->ifm_media) == VAR_2)
  VAR_4->if_baudrate = FUNC_2(VAR_3 | VAR_1);
 else
  VAR_4->if_baudrate = FUNC_2(VAR_6->ifm_media);

 return (0);
}
