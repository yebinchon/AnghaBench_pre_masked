
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int dummy; } ;


 int VAR_0 ;
 struct device_info* VAR_1 ;

struct device_info *
FUNC_0(int VAR_2)
{

 return ((VAR_2 < 0 || VAR_2 >= VAR_0) ? ((void*)0) : &VAR_1[VAR_2]);
}
