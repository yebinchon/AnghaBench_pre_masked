
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_info* VAR_3 ;
 int FUNC_0 (int ,int *,struct device_info*) ;

int
FUNC_1(int VAR_4)
{
 struct device_info *VAR_5;

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return (VAR_1);

 VAR_5 = &VAR_3[VAR_4];
 if (!FUNC_0(VAR_0, ((void*)0), VAR_5))
  return (-1);

 return (0);
}
