
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_xattr_search {TYPE_1__* bucket; } ;
struct ocfs2_xattr_info {int name_index; scalar_t__ value_len; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_6__ {int * bu_bhs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,unsigned long,int ,unsigned long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1,
        handle_t *VAR_2,
        struct ocfs2_xattr_info *VAR_3,
        struct ocfs2_xattr_search *VAR_4,
        u32 VAR_5,
        int VAR_6)
{
 int VAR_7;
 u64 VAR_8;

 FUNC_1(0, "Set xattr entry len = %lu index = %d in bucket %llu\n",
      (unsigned long)VAR_3->value_len, VAR_3->name_index,
      (unsigned long long)FUNC_0(VAR_4->bucket));

 if (!VAR_4->bucket->bu_bhs[1]) {
  VAR_8 = FUNC_0(VAR_4->bucket);
  FUNC_6(VAR_4->bucket);
  VAR_7 = FUNC_3(VAR_4->bucket, VAR_8);
  if (VAR_7) {
   FUNC_2(VAR_7);
   goto out;
  }
 }

 VAR_7 = FUNC_4(VAR_2, VAR_4->bucket,
      VAR_0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_7);
  goto out;
 }

 FUNC_7(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_5(VAR_2, VAR_4->bucket);

out:
 return VAR_7;
}
