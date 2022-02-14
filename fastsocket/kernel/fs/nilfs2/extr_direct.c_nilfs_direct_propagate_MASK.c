
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {void* pr_entry_nr; } ;
struct nilfs_direct {int dummy; } ;
struct nilfs_bmap {scalar_t__ b_ptr_type; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef void* __u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nilfs_bmap const*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct nilfs_bmap const*,struct buffer_head*) ;
 struct inode* FUNC_3 (struct nilfs_bmap const*) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*,struct nilfs_palloc_req*,int) ;
 int FUNC_5 (struct inode*,void*) ;
 int FUNC_6 (struct inode*,struct nilfs_palloc_req*,struct nilfs_palloc_req*) ;
 void* FUNC_7 (struct nilfs_direct*,void*) ;
 int FUNC_8 (struct nilfs_direct*,void*,void*) ;
 int FUNC_9 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_10(const struct nilfs_bmap *VAR_1,
      struct buffer_head *VAR_2)
{
 struct nilfs_direct *VAR_3 = (struct nilfs_direct *)VAR_1;
 struct nilfs_palloc_req VAR_4, VAR_5;
 struct inode *VAR_6;
 __u64 VAR_7;
 __u64 VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_6 = FUNC_3(VAR_1);
 VAR_7 = FUNC_2(VAR_1, VAR_2);
 VAR_8 = FUNC_7(VAR_3, VAR_7);
 if (!FUNC_1(VAR_2)) {
  VAR_4.pr_entry_nr = VAR_8;
  VAR_5.pr_entry_nr = VAR_8;
  VAR_9 = FUNC_6(VAR_6, &VAR_4, &VAR_5);
  if (VAR_9 < 0)
   return VAR_9;
  FUNC_4(VAR_6, &VAR_4, &VAR_5,
     VAR_1->b_ptr_type == VAR_0);
  FUNC_9(VAR_2);
  FUNC_8(VAR_3, VAR_7, VAR_5.pr_entry_nr);
 } else
  VAR_9 = FUNC_5(VAR_6, VAR_8);

 return VAR_9;
}
