
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {TYPE_1__* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct TYPE_2__ {int current_media; scalar_t__ link_state; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_4, struct ifmediareq *VAR_5)
{
 mxge_softc_t *VAR_6 = VAR_4->if_softc;


 if (VAR_6 == ((void*)0))
  return;
 VAR_5->ifm_status = VAR_1;
 VAR_5->ifm_active = VAR_2 | VAR_3;
 VAR_5->ifm_status |= VAR_6->link_state ? VAR_0 : 0;
 VAR_5->ifm_active |= VAR_6->current_media;
}
