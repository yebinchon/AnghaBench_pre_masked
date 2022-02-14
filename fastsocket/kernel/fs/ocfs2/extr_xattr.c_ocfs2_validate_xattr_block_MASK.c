
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_xattr_block {int xb_fs_generation; int xb_blkno; int xb_signature; int xb_check; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned long long fs_generation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_xattr_block*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 unsigned long long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned long long) ;
 int FUNC_7 (struct super_block*,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_8 (struct super_block*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_1,
          struct buffer_head *VAR_2)
{
 int VAR_3;
 struct ocfs2_xattr_block *VAR_4 =
  (struct ocfs2_xattr_block *)VAR_2->b_data;

 FUNC_6(0, "Validating xattr block %llu\n",
      (unsigned long long)VAR_2->b_blocknr);

 FUNC_0(!FUNC_3(VAR_2));






 VAR_3 = FUNC_8(VAR_1, VAR_2->b_data, &VAR_4->xb_check);
 if (VAR_3)
  return VAR_3;





 if (!FUNC_1(VAR_4)) {
  FUNC_7(VAR_1,
       "Extended attribute block #%llu has bad "
       "signature %.*s",
       (unsigned long long)VAR_2->b_blocknr, 7,
       VAR_4->xb_signature);
  return -VAR_0;
 }

 if (FUNC_5(VAR_4->xb_blkno) != VAR_2->b_blocknr) {
  FUNC_7(VAR_1,
       "Extended attribute block #%llu has an "
       "invalid xb_blkno of %llu",
       (unsigned long long)VAR_2->b_blocknr,
       (unsigned long long)FUNC_5(VAR_4->xb_blkno));
  return -VAR_0;
 }

 if (FUNC_4(VAR_4->xb_fs_generation) != FUNC_2(VAR_1)->fs_generation) {
  FUNC_7(VAR_1,
       "Extended attribute block #%llu has an invalid "
       "xb_fs_generation of #%u",
       (unsigned long long)VAR_2->b_blocknr,
       FUNC_4(VAR_4->xb_fs_generation));
  return -VAR_0;
 }

 return 0;
}
