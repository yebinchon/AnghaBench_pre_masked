
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {int s_alloc_mutex; scalar_t__ s_lvid_dirty; int s_lvid_bh; } ;
struct super_block {scalar_t__ s_dirt; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 struct udf_sb_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->s_alloc_mutex);
 if (VAR_2->s_lvid_dirty) {




  FUNC_1(VAR_2->s_lvid_bh);
  VAR_0->s_dirt = 0;
  VAR_2->s_lvid_dirty = 0;
 }
 FUNC_3(&VAR_2->s_alloc_mutex);

 return 0;
}
