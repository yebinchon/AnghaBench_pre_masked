
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_dx_root_block {int dr_signature; int dr_blkno; int dr_check; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ocfs2_dx_root_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 int FUNC_5 (struct super_block*,char*,unsigned long long,int,int ) ;
 int FUNC_6 (struct super_block*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_2,
      struct buffer_head *VAR_3)
{
 int VAR_4;
 struct ocfs2_dx_root_block *VAR_5;

 FUNC_0(!FUNC_2(VAR_3));

 VAR_5 = (struct ocfs2_dx_root_block *) VAR_3->b_data;

 VAR_4 = FUNC_6(VAR_2, VAR_3->b_data, &VAR_5->dr_check);
 if (VAR_4) {
  FUNC_4(VAR_1,
       "Checksum failed for dir index root block %llu\n",
       (unsigned long long)VAR_3->b_blocknr);
  return VAR_4;
 }

 if (!FUNC_1(VAR_5)) {
  FUNC_5(VAR_2,
       "Dir Index Root # %llu has bad signature %.*s",
       (unsigned long long)FUNC_3(VAR_5->dr_blkno),
       7, VAR_5->dr_signature);
  return -VAR_0;
 }

 return 0;
}
