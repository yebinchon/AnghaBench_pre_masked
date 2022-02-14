
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct device_info* VAR_3 ;
 int FUNC_1 (int ,int*,struct device_info*,void*,int*) ;

int
FUNC_2(int VAR_4, void *VAR_5, int VAR_6)
{
 struct device_info *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_0(VAR_4))
  return (VAR_1);

 VAR_7 = &VAR_3[VAR_4];
 if (!FUNC_1(VAR_0, &VAR_8, VAR_7, VAR_5, &VAR_6))
  return (VAR_2);

 return (VAR_8);
}
