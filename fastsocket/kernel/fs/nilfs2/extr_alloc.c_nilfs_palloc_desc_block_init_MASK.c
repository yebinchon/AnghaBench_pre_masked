
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_group_desc {int pg_nfrees; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 unsigned long FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0,
      struct buffer_head *VAR_1, void *VAR_2)
{
 struct nilfs_palloc_group_desc *VAR_3 = VAR_2 + FUNC_0(VAR_1);
 unsigned long VAR_4 = FUNC_3(VAR_0);
 __le32 VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_0));
 while (VAR_4-- > 0) {
  VAR_3->pg_nfrees = VAR_5;
  VAR_3++;
 }
}
