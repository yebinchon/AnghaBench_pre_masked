
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ link_ok; } ;
struct TYPE_3__ {int caps; } ;
struct port_info {int link_check_ch; TYPE_2__ link_config; TYPE_1__ phy; scalar_t__ link_fault; int port_id; struct adapter* adapter; } ;
struct adapter {int open_device_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct port_info*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, int VAR_4)
{
 struct port_info *VAR_5 = VAR_3;
 struct adapter *VAR_6 = VAR_5->adapter;

 if (!FUNC_1(&VAR_6->open_device_map, VAR_5->port_id))
  return;

 FUNC_2(VAR_6, VAR_5->port_id);

 if (VAR_5->link_fault || !(VAR_5->phy.caps & VAR_0) ||
     VAR_5->link_config.link_ok == 0)
  FUNC_0(&VAR_5->link_check_ch, VAR_1, VAR_2, VAR_5);
}
