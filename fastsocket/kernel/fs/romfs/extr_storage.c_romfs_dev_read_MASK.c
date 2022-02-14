
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_bdev; scalar_t__ s_mtd; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,unsigned long,void*,size_t) ;
 size_t FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,unsigned long,void*,size_t) ;

int FUNC_3(struct super_block *VAR_1, unsigned long VAR_2,
     void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_2 >= VAR_5)
  return -VAR_0;
 if (VAR_4 > VAR_5 - VAR_2)
  VAR_4 = VAR_5 - VAR_2;
 return -VAR_0;
}
