
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_dx_leaf {int dl_signature; int dl_check; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ocfs2_dx_leaf*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 (struct super_block*,char*,int,int ) ;
 int FUNC_5 (struct super_block*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2,
      struct buffer_head *VAR_3)
{
 int VAR_4;
 struct ocfs2_dx_leaf *VAR_5 = (struct ocfs2_dx_leaf *)VAR_3->b_data;

 FUNC_0(!FUNC_2(VAR_3));

 VAR_4 = FUNC_5(VAR_2, VAR_3->b_data, &VAR_5->dl_check);
 if (VAR_4) {
  FUNC_3(VAR_1,
       "Checksum failed for dir index leaf block %llu\n",
       (unsigned long long)VAR_3->b_blocknr);
  return VAR_4;
 }

 if (!FUNC_1(VAR_5)) {
  FUNC_4(VAR_2, "Dir Index Leaf has bad signature %.*s",
       7, VAR_5->dl_signature);
  return -VAR_0;
 }

 return 0;
}
