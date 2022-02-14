
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_dat_entry {int de_blocknr; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ sector_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct nilfs_dat_entry* FUNC_4 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_5 (struct inode*,int ,int ,struct buffer_head**) ;

int FUNC_6(struct inode *VAR_2, __u64 VAR_3, sector_t *VAR_4)
{
 struct buffer_head *VAR_5;
 struct nilfs_dat_entry *VAR_6;
 sector_t VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_2, VAR_3, 0, &VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_1(VAR_5->b_page, VAR_1);
 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_8);
 VAR_7 = FUNC_3(VAR_6->de_blocknr);
 if (VAR_7 == 0) {
  VAR_9 = -VAR_0;
  goto out;
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_7;

 out:
 FUNC_2(VAR_8, VAR_1);
 FUNC_0(VAR_5);
 return VAR_9;
}
