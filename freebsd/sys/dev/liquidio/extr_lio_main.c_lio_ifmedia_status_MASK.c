
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ duplex; scalar_t__ link_up; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__ link; } ;
struct lio {TYPE_3__ linfo; int oct_dev; } ;
struct ifnet {int dummy; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lio*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_7, struct ifmediareq *VAR_8)
{
 struct lio *VAR_9 = FUNC_0(VAR_7);


 if (!FUNC_2(VAR_9, VAR_6)) {
  VAR_8->ifm_active |= VAR_5;
  return;
 }


 VAR_8->ifm_status = VAR_1;
 VAR_8->ifm_active = VAR_2;

 if (VAR_9->linfo.link.s.link_up) {
  VAR_8->ifm_status |= VAR_0;
 } else {
  VAR_8->ifm_active |= VAR_5;
  return;
 }

 VAR_8->ifm_active |= FUNC_1(VAR_9->oct_dev);

 if (VAR_9->linfo.link.s.duplex)
  VAR_8->ifm_active |= VAR_3;
 else
  VAR_8->ifm_active |= VAR_4;
}
