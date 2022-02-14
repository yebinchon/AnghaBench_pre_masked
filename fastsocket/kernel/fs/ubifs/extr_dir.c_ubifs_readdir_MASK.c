
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct TYPE_8__ {int sqnum; } ;
struct ubifs_dent_node {char* name; int key; int type; int inum; int nlen; TYPE_3__ ch; } ;
struct qstr {char* name; int len; } ;
struct inode {scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct TYPE_7__ {TYPE_5__* dentry; } ;
struct file {int f_pos; struct ubifs_dent_node* private_data; TYPE_2__ f_path; } ;
typedef int (* filldir_t ) (void*,char*,int,int,scalar_t__,int ) ;
struct TYPE_10__ {struct inode* d_inode; } ;
struct TYPE_9__ {scalar_t__ creat_sqnum; } ;
struct TYPE_6__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ubifs_dent_node*) ;
 int FUNC_1 (struct ubifs_dent_node*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,unsigned long long,...) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key*,scalar_t__,int) ;
 void* FUNC_5 (struct ubifs_info*,int *) ;
 int FUNC_6 (struct ubifs_info*,int *,union ubifs_key*) ;
 int FUNC_7 (struct ubifs_dent_node*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ubifs_info*,union ubifs_key*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,int) ;
 TYPE_4__* FUNC_14 (struct inode*) ;
 struct ubifs_dent_node* FUNC_15 (struct ubifs_info*,union ubifs_key*,struct qstr*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_3, void *VAR_4, filldir_t VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct qstr VAR_8;
 union ubifs_key VAR_9;
 struct ubifs_dent_node *VAR_10;
 struct inode *VAR_11 = VAR_3->f_path.dentry->d_inode;
 struct ubifs_info *VAR_12 = VAR_11->i_sb->s_fs_info;

 FUNC_3("dir ino %lu, f_pos %#llx", VAR_11->i_ino, VAR_3->f_pos);

 if (VAR_3->f_pos > VAR_2 || VAR_3->f_pos == 2)




  return 0;


 if (VAR_3->f_pos == 0) {
  FUNC_12(!VAR_3->private_data);
  VAR_7 = VAR_5(VAR_4, ".", 1, 0, VAR_11->i_ino, VAR_0);
  if (VAR_7)
   return 0;
  VAR_3->f_pos = 1;
 }

 if (VAR_3->f_pos == 1) {
  FUNC_12(!VAR_3->private_data);
  VAR_7 = VAR_5(VAR_4, "..", 2, 1,
          FUNC_11(VAR_3->f_path.dentry), VAR_0);
  if (VAR_7)
   return 0;


  FUNC_10(VAR_12, &VAR_9, VAR_11->i_ino);
  VAR_8.name = ((void*)0);
  VAR_10 = FUNC_15(VAR_12, &VAR_9, &VAR_8);
  if (FUNC_0(VAR_10)) {
   VAR_6 = FUNC_1(VAR_10);
   goto out;
  }

  VAR_3->f_pos = FUNC_5(VAR_12, &VAR_10->key);
  VAR_3->private_data = VAR_10;
 }

 VAR_10 = VAR_3->private_data;
 if (!VAR_10) {





  FUNC_4(VAR_12, &VAR_9, VAR_11->i_ino, VAR_3->f_pos);
  VAR_8.name = ((void*)0);
  VAR_10 = FUNC_15(VAR_12, &VAR_9, &VAR_8);
  if (FUNC_0(VAR_10)) {
   VAR_6 = FUNC_1(VAR_10);
   goto out;
  }
  VAR_3->f_pos = FUNC_5(VAR_12, &VAR_10->key);
  VAR_3->private_data = VAR_10;
 }

 while (1) {
  FUNC_3("feed '%s', ino %llu, new f_pos %#x",
   VAR_10->name, (unsigned long long)FUNC_9(VAR_10->inum),
   FUNC_5(VAR_12, &VAR_10->key));
  FUNC_12(FUNC_9(VAR_10->ch.sqnum) >
        FUNC_14(VAR_11)->creat_sqnum);

  VAR_8.len = FUNC_8(VAR_10->nlen);
  VAR_7 = VAR_5(VAR_4, VAR_10->name, VAR_8.len, VAR_3->f_pos,
          FUNC_9(VAR_10->inum),
          FUNC_16(VAR_10->type));
  if (VAR_7)
   return 0;


  FUNC_6(VAR_12, &VAR_10->key, &VAR_9);
  VAR_8.name = VAR_10->name;
  VAR_10 = FUNC_15(VAR_12, &VAR_9, &VAR_8);
  if (FUNC_0(VAR_10)) {
   VAR_6 = FUNC_1(VAR_10);
   goto out;
  }

  FUNC_7(VAR_3->private_data);
  VAR_3->f_pos = FUNC_5(VAR_12, &VAR_10->key);
  VAR_3->private_data = VAR_10;
  FUNC_2();
 }

out:
 if (VAR_6 != -VAR_1) {
  FUNC_13("cannot find next direntry, error %d", VAR_6);
  return VAR_6;
 }

 FUNC_7(VAR_3->private_data);
 VAR_3->private_data = ((void*)0);
 VAR_3->f_pos = 2;
 return 0;
}
