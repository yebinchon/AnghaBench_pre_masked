
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {unsigned int hr_blocks; scalar_t__ hr_bdev; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (char*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct o2hb_region *VAR_3,
     const char *VAR_4,
     size_t VAR_5)
{
 unsigned long VAR_6;
 char *VAR_7 = (char *)VAR_4;

 if (VAR_3->hr_bdev)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_7, &VAR_7, 0);
 if (!VAR_7 || (*VAR_7 && (*VAR_7 != '\n')))
  return -VAR_0;

 if (VAR_6 > VAR_2 || VAR_6 == 0)
  return -VAR_1;

 VAR_3->hr_blocks = (unsigned int)VAR_6;

 return VAR_5;
}
