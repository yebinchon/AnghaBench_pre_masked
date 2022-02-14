
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_bitmap {int s_nr_groups; scalar_t__* s_block_bitmap; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (struct super_block*,struct udf_bitmap*,unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0,
          struct udf_bitmap *VAR_1,
          unsigned int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_1->s_nr_groups;

 if (VAR_2 >= VAR_4) {
  FUNC_1("block_group (%d) > nr_groups (%d)\n", VAR_2,
     VAR_4);
 }

 if (VAR_1->s_block_bitmap[VAR_2]) {
  return VAR_2;
 } else {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2,
        VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  return VAR_2;
 }
}
