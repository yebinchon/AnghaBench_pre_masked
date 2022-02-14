
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int * dev; } ;
struct adapter {struct port_info** port; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct adapter* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, int VAR_4, device_t *VAR_5)
{
 struct adapter *VAR_6;
 struct port_info *VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return (VAR_0);
 VAR_7 = VAR_6->port[VAR_4];
 if (VAR_7 == ((void*)0) || VAR_7->dev == ((void*)0))
  return (VAR_1);
 *VAR_5 = VAR_7->dev;
 return (0);
}
