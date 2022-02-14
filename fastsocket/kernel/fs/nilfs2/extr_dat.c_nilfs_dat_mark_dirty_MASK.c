
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {int pr_entry_nr; } ;
struct inode {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_1 (struct inode*,struct nilfs_palloc_req*,int ) ;

int FUNC_2(struct inode *VAR_0, __u64 VAR_1)
{
 struct nilfs_palloc_req VAR_2;
 int VAR_3;

 VAR_2.pr_entry_nr = VAR_1;
 VAR_3 = FUNC_1(VAR_0, &VAR_2, 0);
 if (VAR_3 == 0)
  FUNC_0(VAR_0, &VAR_2);
 return VAR_3;
}
