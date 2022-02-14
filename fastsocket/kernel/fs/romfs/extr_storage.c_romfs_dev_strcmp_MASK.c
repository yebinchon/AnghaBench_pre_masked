
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_bdev; scalar_t__ s_mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct super_block*,unsigned long,char const*,size_t) ;
 size_t FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,unsigned long,char const*,size_t) ;

int FUNC_3(struct super_block *VAR_3, unsigned long VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 size_t VAR_7;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_4 >= VAR_7)
  return -VAR_0;
 if (VAR_6 > VAR_2)
  return -VAR_1;
 if (VAR_6 + 1 > VAR_7 - VAR_4)
  return -VAR_0;
 return -VAR_0;
}
