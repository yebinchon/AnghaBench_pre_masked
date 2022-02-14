
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union octeon_link_status {scalar_t__ link_status64; } ;
struct TYPE_4__ {scalar_t__ link_up; } ;
struct TYPE_5__ {scalar_t__ link_status64; TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__ link; } ;
struct lio {TYPE_3__ linfo; int link_changes; scalar_t__ intf_open; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static inline void
FUNC_3(struct ifnet *VAR_2, union octeon_link_status *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = (VAR_4->linfo.link.link_status64 != VAR_3->link_status64);

 VAR_4->linfo.link.link_status64 = VAR_3->link_status64;

 if ((VAR_4->intf_open) && (VAR_5)) {
  FUNC_2(VAR_2);
  VAR_4->link_changes++;
  if (VAR_4->linfo.link.s.link_up)
   FUNC_1(VAR_2, VAR_1);
  else
   FUNC_1(VAR_2, VAR_0);
 }
}
