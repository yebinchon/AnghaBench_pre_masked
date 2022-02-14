
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (struct rfkill*,int) ;
 int FUNC_4 (char const*,int ,unsigned long*) ;
 struct rfkill* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
      struct device_attribute *VAR_7,
      const char *VAR_8, size_t VAR_9)
{
 struct rfkill *VAR_10 = FUNC_5(VAR_6);
 unsigned long VAR_11;
 int VAR_12;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_8, 0, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 != VAR_3 &&
     VAR_11 != VAR_4)
  return -VAR_1;

 FUNC_1(&VAR_5);
 FUNC_3(VAR_10, VAR_11 == VAR_3);
 FUNC_2(&VAR_5);

 return VAR_12 ?: VAR_9;
}
