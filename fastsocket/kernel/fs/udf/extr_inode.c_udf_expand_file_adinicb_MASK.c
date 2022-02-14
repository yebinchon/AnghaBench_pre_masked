
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int nr_to_write; int sync_mode; } ;
struct TYPE_4__ {char* i_data; } ;
struct udf_inode_info {int i_lenAlloc; int i_lenEAttr; void* i_alloc_type; TYPE_1__ i_ext; } ;
struct page {int dummy; } ;
struct TYPE_5__ {TYPE_3__* a_ops; } ;
struct inode {TYPE_2__ i_data; int i_sb; int i_mapping; } ;
struct TYPE_6__ {int (* writepage ) (struct page*,struct writeback_control*) ;} ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_3 ;
 struct udf_inode_info* FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (int ,int ) ;
 char* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*,struct writeback_control*) ;
 TYPE_3__ VAR_5 ;

void FUNC_15(struct inode *VAR_6, int VAR_7, int *VAR_8)
{
 struct page *VAR_9;
 char *VAR_10;
 struct udf_inode_info *VAR_11 = FUNC_4(VAR_6);
 struct writeback_control VAR_12 = {
  .sync_mode = VAR_4,
  .nr_to_write = 1,
 };


 VAR_6->i_data.a_ops = &VAR_5;

 if (!VAR_11->i_lenAlloc) {
  if (FUNC_5(VAR_6->i_sb, VAR_3))
   VAR_11->i_alloc_type = VAR_1;
  else
   VAR_11->i_alloc_type = VAR_0;
  FUNC_10(VAR_6);
  return;
 }

 VAR_9 = FUNC_7(VAR_6->i_mapping, 0);
 FUNC_0(!FUNC_1(VAR_9));

 if (!FUNC_2(VAR_9)) {
  VAR_10 = FUNC_8(VAR_9);
  FUNC_12(VAR_10 + VAR_11->i_lenAlloc, 0x00,
         VAR_2 - VAR_11->i_lenAlloc);
  FUNC_11(VAR_10, VAR_11->i_ext.i_data + VAR_11->i_lenEAttr,
   VAR_11->i_lenAlloc);
  FUNC_6(VAR_9);
  FUNC_3(VAR_9);
  FUNC_9(VAR_9);
 }
 FUNC_12(VAR_11->i_ext.i_data + VAR_11->i_lenEAttr, 0x00,
        VAR_11->i_lenAlloc);
 VAR_11->i_lenAlloc = 0;
 if (FUNC_5(VAR_6->i_sb, VAR_3))
  VAR_11->i_alloc_type = VAR_1;
 else
  VAR_11->i_alloc_type = VAR_0;

 VAR_6->i_data.a_ops->writepage(VAR_9, &VAR_12);
 FUNC_13(VAR_9);

 FUNC_10(VAR_6);
}
