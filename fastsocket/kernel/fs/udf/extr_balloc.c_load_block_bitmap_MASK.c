
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_bitmap {int * s_block_bitmap; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,struct udf_bitmap*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct super_block *VAR_1,
        struct udf_bitmap *VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_2->s_block_bitmap[VAR_4])
  return -VAR_0;

 return VAR_4;
}
