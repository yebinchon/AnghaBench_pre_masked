
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;
 unsigned int FUNC_2 (struct page*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,struct inode*,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, struct address_space *VAR_2,
      loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
      struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_2->host;
 unsigned VAR_9 = VAR_3 & (VAR_0 - 1);
 unsigned VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_6, VAR_9,
        VAR_9 + VAR_5);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7);
 FUNC_3(FUNC_0(VAR_8->i_sb), VAR_8, VAR_10);
 VAR_11 = FUNC_4(VAR_8->i_sb);
 return VAR_11 ? : VAR_5;
}
