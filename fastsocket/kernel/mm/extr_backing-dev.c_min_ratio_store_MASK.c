
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct backing_dev_info {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct backing_dev_info*,unsigned int) ;
 struct backing_dev_info* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct backing_dev_info *VAR_5 = FUNC_1(VAR_1);
 char *VAR_6;
 unsigned int VAR_7;
 ssize_t VAR_8 = -VAR_0;

 VAR_7 = FUNC_2(VAR_3, &VAR_6, 10);
 if (*VAR_3 && (VAR_6[0] == '\0' || (VAR_6[0] == '\n' && VAR_6[1] == '\0'))) {
  VAR_8 = FUNC_0(VAR_5, VAR_7);
  if (!VAR_8)
   VAR_8 = VAR_4;
 }
 return VAR_8;
}
