
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct backing_dev_info {unsigned long ra_pages; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct backing_dev_info* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct backing_dev_info *VAR_6 = FUNC_0(VAR_2);
 char *VAR_7;
 unsigned long VAR_8;
 ssize_t VAR_9 = -VAR_0;

 VAR_8 = FUNC_1(VAR_4, &VAR_7, 10);
 if (*VAR_4 && (VAR_7[0] == '\0' || (VAR_7[0] == '\n' && VAR_7[1] == '\0'))) {
  VAR_6->ra_pages = VAR_8 >> (VAR_1 - 10);
  VAR_9 = VAR_5;
 }
 return VAR_9;
}
