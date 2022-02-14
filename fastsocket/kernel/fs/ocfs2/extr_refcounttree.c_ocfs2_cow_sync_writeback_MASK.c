
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct ocfs2_cow_context {TYPE_1__* inode; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_4__ {int s_clustersize_bits; } ;
struct TYPE_3__ {int i_mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int,int) ;
 struct page* FUNC_4 (int ,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_2,
        struct ocfs2_cow_context *VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 loff_t VAR_7, VAR_8, VAR_9;
 pgoff_t VAR_10;
 struct page *VAR_11;

 if (FUNC_7(VAR_3->inode))
  return 0;

 VAR_7 = ((loff_t)VAR_4) << FUNC_1(VAR_2)->s_clustersize_bits;
 VAR_8 = VAR_7 + (VAR_5 << FUNC_1(VAR_2)->s_clustersize_bits);

 VAR_6 = FUNC_3(VAR_3->inode->i_mapping,
           VAR_7, VAR_8 - 1);
 if (VAR_6 < 0) {
  FUNC_6(VAR_6);
  return VAR_6;
 }

 while (VAR_7 < VAR_8) {
  VAR_10 = VAR_7 >> VAR_1;
  VAR_9 = (VAR_10 + 1) << VAR_1;
  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;

  VAR_11 = FUNC_4(VAR_3->inode->i_mapping, VAR_10);
  FUNC_0(!VAR_11);

  FUNC_10(VAR_11);
  if (FUNC_2(VAR_11)) {
   VAR_6 = -VAR_0;
   FUNC_6(VAR_6);
  } else
   FUNC_5(VAR_11);

  FUNC_9(VAR_11);
  FUNC_8(VAR_11);
  VAR_11 = ((void*)0);
  VAR_7 = VAR_9;
  if (VAR_6)
   break;
 }

 return VAR_6;
}
