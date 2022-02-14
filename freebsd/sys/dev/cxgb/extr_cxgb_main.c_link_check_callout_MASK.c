
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int link_check_task; int port_id; struct adapter* adapter; } ;
struct adapter {int tq; int open_device_map; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct port_info *VAR_1 = VAR_0;
 struct adapter *VAR_2 = VAR_1->adapter;

 if (!FUNC_0(&VAR_2->open_device_map, VAR_1->port_id))
  return;

 FUNC_1(VAR_2->tq, &VAR_1->link_check_task);
}
