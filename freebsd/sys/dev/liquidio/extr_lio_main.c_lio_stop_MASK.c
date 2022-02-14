
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ link_up; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__ link; } ;
struct lio {int link_changes; TYPE_3__ linfo; scalar_t__ intf_open; struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*,int ,int ) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 int FUNC_4 (struct lio*,int ) ;
 int FUNC_5 (struct lio*,int ) ;

void
FUNC_6(struct ifnet *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_3);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;

 FUNC_4(VAR_4, VAR_2);
 FUNC_1(VAR_3, VAR_1);

 VAR_4->intf_open = 0;
 VAR_4->linfo.link.s.link_up = 0;
 VAR_4->link_changes++;

 FUNC_5(VAR_4, 0);


 FUNC_2(VAR_3, 0, VAR_0);

 FUNC_3(VAR_5, "Interface is stopped\n");
}
