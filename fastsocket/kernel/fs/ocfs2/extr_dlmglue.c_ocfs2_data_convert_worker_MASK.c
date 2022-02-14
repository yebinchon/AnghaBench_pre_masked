
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_mode; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct address_space*) ;
 scalar_t__ FUNC_3 (struct address_space*) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 struct inode* FUNC_5 (struct ocfs2_lock_res*) ;
 int FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct address_space*,int ) ;
 int FUNC_8 (struct address_space*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_lock_res *VAR_3,
         int VAR_4)
{
 struct inode *VAR_5;
 struct address_space *VAR_6;

        VAR_5 = FUNC_5(VAR_3);
 VAR_6 = VAR_5->i_mapping;

 if (!FUNC_1(VAR_5->i_mode))
  goto out;
 FUNC_8(VAR_6, 0, 0, 0);

 if (FUNC_3(VAR_6)) {
  FUNC_4(VAR_1, "Could not sync inode %llu for downconvert!",
       (unsigned long long)FUNC_0(VAR_5)->ip_blkno);
 }
 FUNC_6(VAR_6);
 if (VAR_4 == VAR_0) {
  FUNC_7(VAR_6, 0);
 } else {





  FUNC_2(VAR_6);
 }

out:
 return VAR_2;
}
