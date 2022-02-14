
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_extent_rec {int e_flags; int e_cpos; scalar_t__ e_leaf_clusters; } ;
struct ocfs2_extent_list {scalar_t__ l_next_free_rec; struct ocfs2_extent_rec* l_recs; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; scalar_t__ h_next_leaf_blk; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,char*,int ,int) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 unsigned int FUNC_9 (int ,unsigned int,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ,unsigned long long) ;
 int FUNC_12 (int ,struct ocfs2_extent_list*,unsigned int,struct buffer_head**) ;
 scalar_t__ FUNC_13 (struct ocfs2_extent_rec*) ;
 int FUNC_14 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_2,
        struct ocfs2_extent_list *VAR_3,
        u32 VAR_4,
        u32 VAR_5,
        u32 VAR_6,
        u32 *VAR_7,
        u32 *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = FUNC_3(VAR_3->l_tree_depth), VAR_11;
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_extent_block *VAR_13 = ((void*)0);
 struct ocfs2_extent_rec *VAR_14;
 unsigned int VAR_15, VAR_16 = 0;
 int VAR_17 = FUNC_10(VAR_2->i_sb);
 int VAR_18;

 FUNC_0(VAR_4 + VAR_5 > VAR_6);

 if (VAR_10 > 0) {
  VAR_9 = FUNC_12(FUNC_1(VAR_2), VAR_3, VAR_4, &VAR_12);
  if (VAR_9) {
   FUNC_7(VAR_9);
   goto out;
  }

  VAR_13 = (struct ocfs2_extent_block *) VAR_12->b_data;
  VAR_3 = &VAR_13->h_list;

  if (VAR_3->l_tree_depth) {
   FUNC_11(VAR_2->i_sb,
        "Inode %lu has non zero tree depth in "
        "leaf block %llu\n", VAR_2->i_ino,
        (unsigned long long)VAR_12->b_blocknr);
   VAR_9 = -VAR_0;
   goto out;
  }
 }

 *VAR_8 = 0;
 for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_3->l_next_free_rec); VAR_11++) {
  VAR_14 = &VAR_3->l_recs[VAR_11];

  if (FUNC_13(VAR_14)) {
   FUNC_6(VAR_11 != 0, "Inode %lu has empty record in "
     "index %d\n", VAR_2->i_ino, VAR_11);
   continue;
  }

  if (FUNC_4(VAR_14->e_cpos) +
      FUNC_3(VAR_14->e_leaf_clusters) <= VAR_4)
   continue;

  if (*VAR_8 == 0) {




   FUNC_0(!(VAR_14->e_flags & VAR_1));
   *VAR_7 = FUNC_4(VAR_14->e_cpos);
  }





  if ((!(VAR_14->e_flags & VAR_1)) ||
      (*VAR_8 && VAR_16 != FUNC_4(VAR_14->e_cpos)) ||
      (VAR_6 <= FUNC_4(VAR_14->e_cpos)))
   break;

  VAR_18 = FUNC_3(VAR_14->e_leaf_clusters);
  VAR_16 = FUNC_4(VAR_14->e_cpos) + VAR_18;
  if (VAR_16 > VAR_6) {
   VAR_16 = VAR_6;
   VAR_18 = VAR_16 - FUNC_4(VAR_14->e_cpos);
  }







  if (!*VAR_8)
   VAR_15 = VAR_5;
  else
   VAR_15 = (VAR_4 + VAR_5) -
    (*VAR_7 + *VAR_8);
  if (VAR_15 < VAR_17)
   VAR_15 = VAR_17;
  if (VAR_18 <= VAR_17)
   *VAR_8 += VAR_18;
  else if (*VAR_8 || (*VAR_7 == VAR_4)) {







   VAR_15 = FUNC_8(VAR_2->i_sb,
              VAR_15);

   if (VAR_18 < VAR_15)
    *VAR_8 += VAR_18;
   else
    *VAR_8 += VAR_15;
  } else if ((*VAR_7 + VAR_17) >=
      (VAR_4 + VAR_5)) {





   *VAR_8 = VAR_17;
  } else if ((VAR_16 - VAR_4) <= VAR_17) {




   *VAR_7 = VAR_16 - VAR_17;
   *VAR_8 = VAR_17;
  } else if ((VAR_16 - VAR_4) <= VAR_15) {
   *VAR_7 = FUNC_9(VAR_2->i_sb,
          *VAR_7, VAR_4);
   *VAR_8 = VAR_16 - *VAR_7;
  } else {
   *VAR_7 = FUNC_9(VAR_2->i_sb,
          *VAR_7, VAR_4);

   VAR_15 = (VAR_4 + VAR_5) - *VAR_7;
   VAR_15 = FUNC_8(VAR_2->i_sb,
              VAR_15);
   if (*VAR_7 + VAR_15 <= VAR_16)
    *VAR_8 = VAR_15;
   else
    *VAR_8 = VAR_16 - *VAR_7;
  }


  if ((*VAR_7 + *VAR_8) >= (VAR_4 + VAR_5))
   break;





  if (VAR_11 + 1 == FUNC_3(VAR_3->l_next_free_rec) &&
      VAR_13 && VAR_13->h_next_leaf_blk) {
   FUNC_2(VAR_12);
   VAR_12 = ((void*)0);

   VAR_9 = FUNC_14(FUNC_1(VAR_2),
            FUNC_5(VAR_13->h_next_leaf_blk),
            &VAR_12);
   if (VAR_9) {
    FUNC_7(VAR_9);
    goto out;
   }

   VAR_13 = (struct ocfs2_extent_block *) VAR_12->b_data;
   VAR_3 = &VAR_13->h_list;
   VAR_11 = -1;
  }
 }

out:
 FUNC_2(VAR_12);
 return VAR_9;
}
