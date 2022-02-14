
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct port_info*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct port_info *VAR_1 = VAR_0;
 struct adapter *VAR_2 = VAR_1->adapter;

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);
 FUNC_1(VAR_2);
}
