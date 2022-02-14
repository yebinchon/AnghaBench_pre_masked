
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int dummy; } ;
typedef int lbastart_t ;
typedef int lbasize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct device_info* VAR_3 ;
 int FUNC_1 (int ,int*,struct device_info*,void*,int *,int *,int *) ;

int
FUNC_2(int VAR_4, void *VAR_5, lbasize_t VAR_6, lbastart_t VAR_7,
    lbasize_t *VAR_8)
{
 struct device_info *VAR_9;
 lbasize_t VAR_10;
 int VAR_11 = 0;

 if (!FUNC_0(VAR_4))
  return (VAR_1);

 VAR_9 = &VAR_3[VAR_4];
 if (!FUNC_1(VAR_0, &VAR_11, VAR_9, VAR_5, &VAR_6, &VAR_7, &VAR_10))
  return (VAR_2);

 if (!VAR_11 && VAR_8)
  *VAR_8 = VAR_10;

 return (VAR_11);
}
