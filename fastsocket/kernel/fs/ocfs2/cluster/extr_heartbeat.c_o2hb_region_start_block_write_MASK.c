
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {unsigned long long hr_start_block; scalar_t__ hr_bdev; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long long FUNC_0 (char*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct o2hb_region *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 unsigned long long VAR_4;
 char *VAR_5 = (char *)VAR_2;

 if (VAR_1->hr_bdev)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_5, &VAR_5, 0);
 if (!VAR_5 || (*VAR_5 && (*VAR_5 != '\n')))
  return -VAR_0;

 VAR_1->hr_start_block = VAR_4;

 return VAR_3;
}
