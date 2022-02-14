
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {char* hr_dev_name; scalar_t__ hr_bdev; } ;
typedef unsigned int ssize_t ;


 unsigned int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct o2hb_region *VAR_0,
        char *VAR_1)
{
 unsigned int VAR_2 = 0;

 if (VAR_0->hr_bdev)
  VAR_2 = FUNC_0(VAR_1, "%s\n", VAR_0->hr_dev_name);

 return VAR_2;
}
