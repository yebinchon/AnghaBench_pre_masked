
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ duplex; int speed; scalar_t__ link_up; } ;
struct TYPE_3__ {TYPE_2__ s; } ;
struct octeon_link_info {TYPE_1__ link; } ;
struct lio {int oct_dev; struct octeon_link_info linfo; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct lio*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_2)
{
 struct lio *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_2(VAR_3, VAR_1) &&
     FUNC_2(VAR_3, VAR_0)) {
  struct octeon_link_info *VAR_4 = &VAR_3->linfo;

  if (VAR_4->link.s.link_up) {
   FUNC_1(VAR_3->oct_dev, "%d Mbps %s Duplex UP\n",
         VAR_4->link.s.speed,
         (VAR_4->link.s.duplex) ? "Full" : "Half");
  } else {
   FUNC_1(VAR_3->oct_dev, "Link Down\n");
  }
 }
}
