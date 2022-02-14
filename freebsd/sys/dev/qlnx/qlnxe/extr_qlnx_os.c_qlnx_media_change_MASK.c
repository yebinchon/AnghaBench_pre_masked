
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct ifmedia {int ifm_media; } ;
struct TYPE_3__ {struct ifmedia media; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_2)
{
 qlnx_host_t *VAR_3;
 struct ifmedia *VAR_4;
 int VAR_5 = 0;

 VAR_3 = (qlnx_host_t *)VAR_2->if_softc;

 FUNC_1(VAR_3, "enter\n");

 VAR_4 = &VAR_3->media;

 if (FUNC_0(VAR_4->ifm_media) != VAR_1)
  VAR_5 = VAR_0;

 FUNC_1(VAR_3, "exit\n");

 return (VAR_5);
}
