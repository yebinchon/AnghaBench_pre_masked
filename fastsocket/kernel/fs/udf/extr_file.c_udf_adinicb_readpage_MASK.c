
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_lenEAttr; TYPE_2__ i_ext; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_size; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct udf_inode_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,scalar_t__,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_2->mapping->host;
 char *VAR_4;
 struct udf_inode_info *VAR_5 = FUNC_3(VAR_3);

 FUNC_0(!FUNC_1(VAR_2));

 VAR_4 = FUNC_5(VAR_2);
 FUNC_8(VAR_4, 0, VAR_0);
 FUNC_7(VAR_4, VAR_5->i_ext.i_data + VAR_5->i_lenEAttr, VAR_3->i_size);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);
 FUNC_6(VAR_2);
 FUNC_9(VAR_2);

 return 0;
}
