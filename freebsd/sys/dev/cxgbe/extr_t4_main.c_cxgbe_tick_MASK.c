
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int tick; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct port_info*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct adapter*,struct port_info*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct port_info *VAR_2 = VAR_1;
 struct adapter *VAR_3 = VAR_2->adapter;

 FUNC_0(VAR_2);
 FUNC_2(VAR_3, VAR_2);

 FUNC_1(&VAR_2->tick, VAR_0);
}
