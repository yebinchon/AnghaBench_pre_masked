
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_start_block; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct o2hb_region *VAR_0,
         char *VAR_1)
{
 return FUNC_0(VAR_1, "%llu\n", VAR_0->hr_start_block);
}
