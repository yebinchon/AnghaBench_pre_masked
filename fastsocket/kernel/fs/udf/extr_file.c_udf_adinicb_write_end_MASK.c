
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_lenEAttr; TYPE_1__ i_ext; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,char*,unsigned int) ;
 int FUNC_4 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page*,void*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2,
   struct address_space *VAR_3,
   loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
   struct page *VAR_7, void *VAR_8)
{
 struct inode *VAR_9 = VAR_3->host;
 unsigned VAR_10 = VAR_4 & (VAR_1 - 1);
 char *VAR_11;
 struct udf_inode_info *VAR_12 = FUNC_0(VAR_9);

 VAR_11 = FUNC_1(VAR_7, VAR_0);
 FUNC_3(VAR_12->i_ext.i_data + VAR_12->i_lenEAttr + VAR_10,
  VAR_11 + VAR_10, VAR_6);
 FUNC_2(VAR_11, VAR_0);

 return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
