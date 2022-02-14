
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int sb; } ;
struct TYPE_8__ {TYPE_1__* l_recs; } ;
struct TYPE_9__ {TYPE_2__ i_list; } ;
struct ocfs2_dinode {TYPE_3__ id2; int i_clusters; } ;
struct inode {TYPE_4__* i_sb; } ;
struct buffer_head {int b_size; scalar_t__ b_data; int b_page; } ;
typedef int sector_t ;
struct TYPE_10__ {int s_blocksize_bits; } ;
struct TYPE_7__ {int e_blkno; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct buffer_head*,TYPE_4__*,int) ;
 int FUNC_10 (void*,scalar_t__,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (char*,struct inode*,unsigned long long,struct buffer_head*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,struct buffer_head**) ;
 struct buffer_head* FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_4, sector_t VAR_5,
       struct buffer_head *VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9;
 struct ocfs2_dinode *VAR_10 = ((void*)0);
 struct buffer_head *VAR_11 = ((void*)0);
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_super *VAR_13 = FUNC_1(VAR_4->i_sb);
 void *VAR_14;

 FUNC_12("(0x%p, %llu, 0x%p, %d)\n", VAR_4,
     (unsigned long long)VAR_5, VAR_6, VAR_7);

 FUNC_0(FUNC_16(VAR_4));

 if ((VAR_5 << VAR_4->i_sb->s_blocksize_bits) > VAR_3 + 1) {
  FUNC_11(VAR_2, "block offset > PATH_MAX: %llu",
       (unsigned long long)VAR_5);
  goto bail;
 }

 VAR_9 = FUNC_18(VAR_4, &VAR_11);
 if (VAR_9 < 0) {
  FUNC_13(VAR_9);
  goto bail;
 }
 VAR_10 = (struct ocfs2_dinode *) VAR_11->b_data;

 if ((u64)VAR_5 >= FUNC_15(VAR_4->i_sb,
          FUNC_7(VAR_10->i_clusters))) {
  FUNC_11(VAR_2, "block offset is outside the allocated size: "
       "%llu\n", (unsigned long long)VAR_5);
  goto bail;
 }



 if (!FUNC_4(VAR_6) && FUNC_17(VAR_4)) {
  u64 VAR_15 = FUNC_8(VAR_10->id2.i_list.l_recs[0].e_blkno) +
       VAR_5;
  VAR_12 = FUNC_19(VAR_13->sb, VAR_15);
  if (!VAR_12) {
   FUNC_11(VAR_2, "couldn't getblock for symlink!\n");
   goto bail;
  }





  if (FUNC_3(VAR_12)
      && FUNC_17(VAR_4)) {
   VAR_14 = FUNC_5(VAR_6->b_page, VAR_1);
   if (!VAR_14) {
    FUNC_11(VAR_2, "couldn't kmap!\n");
    goto bail;
   }
   FUNC_10(VAR_14 + (VAR_6->b_size * VAR_5),
          VAR_12->b_data,
          VAR_6->b_size);
   FUNC_6(VAR_14, VAR_1);
   FUNC_20(VAR_6);
  }
  FUNC_2(VAR_12);
 }

 FUNC_9(VAR_6, VAR_4->i_sb,
        FUNC_8(VAR_10->id2.i_list.l_recs[0].e_blkno) + VAR_5);

 VAR_8 = 0;

bail:
 FUNC_2(VAR_11);

 FUNC_14(VAR_8);
 return VAR_8;
}
