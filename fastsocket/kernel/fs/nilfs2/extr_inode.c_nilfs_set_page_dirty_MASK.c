
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nilfs_sb_info {int dummy; } ;
struct inode {int i_blkbits; int i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct nilfs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct nilfs_sb_info*,struct inode*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  struct inode *VAR_3 = VAR_1->mapping->host;
  struct nilfs_sb_info *VAR_4 = FUNC_0(VAR_3->i_sb);
  unsigned VAR_5 = 1 << (VAR_0 - VAR_3->i_blkbits);

  FUNC_2(VAR_4, VAR_3, VAR_5);
 }
 return VAR_2;
}
