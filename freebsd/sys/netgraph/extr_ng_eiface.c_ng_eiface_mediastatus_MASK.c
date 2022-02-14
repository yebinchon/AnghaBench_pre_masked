
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct ifmedia {TYPE_1__* ifm_cur; } ;
typedef TYPE_2__* priv_p ;
struct TYPE_4__ {int link_status; struct ifmedia media; } ;
struct TYPE_3__ {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_5, struct ifmediareq *VAR_6)
{
 const priv_p VAR_7 = (priv_p)VAR_5->if_softc;
 struct ifmedia *VAR_8 = &VAR_7->media;

 if (VAR_8->ifm_cur->ifm_media == (VAR_3 | VAR_2) &&
     (VAR_7->link_status & VAR_1))
  VAR_6->ifm_active = VAR_3 | VAR_0 | VAR_4;
 else
  VAR_6->ifm_active = VAR_8->ifm_cur->ifm_media;
 VAR_6->ifm_status = VAR_7->link_status;

 return;
}
