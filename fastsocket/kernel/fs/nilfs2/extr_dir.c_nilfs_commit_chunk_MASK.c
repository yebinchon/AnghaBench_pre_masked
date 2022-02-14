
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nilfs_sb_info {int dummy; } ;
struct inode {scalar_t__ i_size; int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct nilfs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int *,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,int *) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*) ;
 unsigned int FUNC_5 (struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (struct nilfs_sb_info*,struct inode*,unsigned int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct page *VAR_1,
         struct address_space *VAR_2,
         unsigned VAR_3, unsigned VAR_4)
{
 struct inode *VAR_5 = VAR_2->host;
 struct nilfs_sb_info *VAR_6 = FUNC_1(VAR_5->i_sb);
 loff_t VAR_7 = FUNC_8(VAR_1) + VAR_3;
 unsigned VAR_8 = VAR_4 - VAR_3;
 unsigned VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(VAR_1, VAR_3, VAR_4);
 VAR_10 = FUNC_2(((void*)0), VAR_2, VAR_7, VAR_8, VAR_8, VAR_1, ((void*)0));
 if (VAR_7 + VAR_10 > VAR_5->i_size) {
  FUNC_3(VAR_5, VAR_7 + VAR_10);
  FUNC_4(VAR_5);
 }
 if (FUNC_0(VAR_5))
  FUNC_7(VAR_0);
 VAR_11 = FUNC_6(VAR_6, VAR_5, VAR_9);
 FUNC_9(VAR_1);
 return VAR_11;
}
