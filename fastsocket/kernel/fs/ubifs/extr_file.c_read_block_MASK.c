
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct TYPE_5__ {int len; int sqnum; } ;
struct ubifs_data_node {int compr_type; int data; TYPE_2__ ch; int size; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_6__ {scalar_t__ creat_sqnum; } ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct ubifs_info*,union ubifs_key*,int ,unsigned int) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_data_node*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned int,void*,int*,int ) ;
 int FUNC_8 (char*,unsigned int,int ) ;
 TYPE_3__* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ubifs_info*,union ubifs_key*,struct ubifs_data_node*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_4, void *VAR_5, unsigned int VAR_6,
        struct ubifs_data_node *VAR_7)
{
 struct ubifs_info *VAR_8 = VAR_4->i_sb->s_fs_info;
 int VAR_9, VAR_10, VAR_11;
 union ubifs_key VAR_12;
 unsigned int VAR_13;

 FUNC_0(VAR_8, &VAR_12, VAR_4->i_ino, VAR_6);
 VAR_9 = FUNC_10(VAR_8, &VAR_12, VAR_7);
 if (VAR_9) {
  if (VAR_9 == -VAR_1)

   FUNC_5(VAR_5, 0, VAR_2);
  return VAR_9;
 }

 FUNC_6(FUNC_4(VAR_7->ch.sqnum) >
       FUNC_9(VAR_4)->creat_sqnum);
 VAR_10 = FUNC_3(VAR_7->size);
 if (VAR_10 <= 0 || VAR_10 > VAR_2)
  goto dump;

 VAR_13 = FUNC_3(VAR_7->ch.len) - VAR_3;
 VAR_11 = VAR_2;
 VAR_9 = FUNC_7(&VAR_7->data, VAR_13, VAR_5, &VAR_11,
          FUNC_2(VAR_7->compr_type));
 if (VAR_9 || VAR_10 != VAR_11)
  goto dump;






 if (VAR_10 < VAR_2)
  FUNC_5(VAR_5 + VAR_10, 0, VAR_2 - VAR_10);

 return 0;

dump:
 FUNC_8("bad data node (block %u, inode %lu)",
    VAR_6, VAR_4->i_ino);
 FUNC_1(VAR_8, VAR_7);
 return -VAR_0;
}
