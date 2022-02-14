
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {struct ocfs2_caching_info* et_ci; } ;
struct ocfs2_cow_context {TYPE_2__* inode; TYPE_1__ data_et; } ;
struct ocfs2_caching_info {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_6__ {int s_clustersize_bits; } ;
struct TYPE_5__ {struct address_space* i_mapping; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ) ;
 struct page* FUNC_5 (struct address_space*,int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int ,char*,int,int,int,int) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int FUNC_10 (struct super_block*,int) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_2__*,int *,unsigned int,unsigned int,struct page*,int ,int *) ;
 struct super_block* FUNC_12 (struct ocfs2_caching_info*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int *,int ,unsigned int,unsigned int,int*,int ) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_4,
         struct ocfs2_cow_context *VAR_5,
         u32 VAR_6, u32 VAR_7,
         u32 VAR_8, u32 VAR_9)
{
 int VAR_10 = 0, VAR_11;
 struct ocfs2_caching_info *VAR_12 = VAR_5->data_et.et_ci;
 struct super_block *VAR_13 = FUNC_12(VAR_12);
 u64 VAR_14 = FUNC_10(VAR_13, VAR_8);
 struct page *VAR_15;
 pgoff_t VAR_16;
 unsigned int VAR_17, VAR_18;
 loff_t VAR_19, VAR_20, VAR_21;
 struct address_space *VAR_22 = VAR_5->inode->i_mapping;

 FUNC_8(0, "old_cluster %u, new %u, len %u at offset %u\n", VAR_7,
      VAR_8, VAR_9, VAR_6);

 VAR_19 = ((loff_t)VAR_6) << FUNC_1(VAR_13)->s_clustersize_bits;
 VAR_20 = VAR_19 + (VAR_9 << FUNC_1(VAR_13)->s_clustersize_bits);

 while (VAR_19 < VAR_20) {
  VAR_16 = VAR_19 >> VAR_0;
  VAR_21 = (VAR_16 + 1) << VAR_0;
  if (VAR_21 > VAR_20)
   VAR_21 = VAR_20;


  VAR_17 = VAR_19 & (VAR_1 - 1);
  VAR_18 = VAR_1;
  if (VAR_21 & (VAR_1 - 1))
   VAR_18 = VAR_21 & (VAR_1 - 1);

  VAR_15 = FUNC_5(VAR_22, VAR_16);


  FUNC_0(FUNC_2(VAR_15));

  if (!FUNC_3(VAR_15)) {
   VAR_10 = FUNC_4(VAR_15, VAR_3);
   if (VAR_10) {
    FUNC_9(VAR_10);
    goto unlock;
   }
   FUNC_6(VAR_15);
  }

  if (FUNC_15(VAR_15)) {
   VAR_10 = FUNC_17(VAR_4, FUNC_13(VAR_15),
      VAR_17, VAR_18, &VAR_11,
      VAR_2);
   if (VAR_10) {
    FUNC_9(VAR_10);
    goto unlock;
   }
  }

  FUNC_11(VAR_5->inode,
      VAR_4, VAR_17, VAR_18,
      VAR_15, 0, &VAR_14);
  FUNC_7(VAR_15);
unlock:
  FUNC_16(VAR_15);
  FUNC_14(VAR_15);
  VAR_15 = ((void*)0);
  VAR_19 = VAR_21;
  if (VAR_10)
   break;
 }

 return VAR_10;
}
