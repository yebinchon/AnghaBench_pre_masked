
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenEAttr; TYPE_2__ i_ext; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_size; int i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct udf_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct buffer_head*) ;
 char* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 struct buffer_head* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int ,char*,int ,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_2, struct page *VAR_3)
{
 struct inode *VAR_4 = VAR_3->mapping->host;
 struct buffer_head *VAR_5 = ((void*)0);
 char *VAR_6;
 int VAR_7 = -VAR_0;
 char *VAR_8 = FUNC_4(VAR_3);
 struct udf_inode_info *VAR_9;

 FUNC_6();
 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9->i_alloc_type == VAR_1) {
  VAR_6 = VAR_9->i_ext.i_data + VAR_9->i_lenEAttr;
 } else {
  VAR_5 = FUNC_7(VAR_4->i_sb, FUNC_8(VAR_4, 0));

  if (!VAR_5)
   goto out;

  VAR_6 = VAR_5->b_data;
 }

 FUNC_9(VAR_4->i_sb, VAR_6, VAR_4->i_size, VAR_8);
 FUNC_3(VAR_5);

 FUNC_10();
 FUNC_1(VAR_3);
 FUNC_5(VAR_3);
 FUNC_11(VAR_3);
 return 0;

out:
 FUNC_10();
 FUNC_0(VAR_3);
 FUNC_5(VAR_3);
 FUNC_11(VAR_3);
 return VAR_7;
}
