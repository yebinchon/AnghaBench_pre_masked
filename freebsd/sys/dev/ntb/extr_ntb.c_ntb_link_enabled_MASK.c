
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {scalar_t__ enabled; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct ntb_child* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool
FUNC_3(device_t VAR_0)
{
 struct ntb_child *VAR_1 = FUNC_1(VAR_0);

 return (VAR_1->enabled && FUNC_0(FUNC_2(VAR_0)));
}
