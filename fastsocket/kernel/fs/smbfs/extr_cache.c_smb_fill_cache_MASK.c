
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_fattr {void* f_ino; } ;
struct smb_cache_control {scalar_t__ fpos; size_t idx; int ofs; scalar_t__ filled; int valid; TYPE_4__* cache; scalar_t__ page; } ;
struct qstr {int len; int name; int hash; } ;
struct inode {int i_sb; int i_data; void* i_ino; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_1__ f_path; } ;
struct TYPE_7__ {int len; scalar_t__ name; } ;
struct dentry {void* d_fsdata; struct inode* d_inode; TYPE_3__ d_name; TYPE_2__* d_op; } ;
typedef void* ino_t ;
typedef scalar_t__ (* filldir_t ) (void*,int ,int ,scalar_t__,void*,int ) ;
struct TYPE_8__ {struct dentry** dentry; } ;
struct TYPE_6__ {scalar_t__ (* d_hash ) (struct dentry*,struct qstr*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 void* FUNC_6 (struct dentry*,struct qstr*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 void* FUNC_9 (int ,int) ;
 TYPE_4__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 struct inode* FUNC_14 (int ,struct smb_fattr*) ;
 int FUNC_15 (struct dentry*) ;
 int FUNC_16 (struct dentry*) ;
 int FUNC_17 (struct inode*,struct smb_fattr*) ;
 scalar_t__ FUNC_18 (struct dentry*,struct qstr*) ;
 int FUNC_19 (scalar_t__) ;

int
FUNC_20(struct file *VAR_2, void *VAR_3, filldir_t VAR_4,
        struct smb_cache_control *VAR_5, struct qstr *VAR_6,
        struct smb_fattr *VAR_7)
{
 struct dentry *VAR_8, *VAR_9 = VAR_2->f_path.dentry;
 struct inode *VAR_10, *VAR_11 = VAR_9->d_inode;
 struct smb_cache_control VAR_12 = *VAR_5;
 int VAR_13 = 0;
 int VAR_14 = 0;
 ino_t VAR_15 = 0;

 VAR_6->hash = FUNC_7(VAR_6->name, VAR_6->len);

 if (VAR_9->d_op && VAR_9->d_op->d_hash)
  if (VAR_9->d_op->d_hash(VAR_9, VAR_6) != 0)
   goto end_advance;

 VAR_8 = FUNC_3(VAR_9, VAR_6);

 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_9, VAR_6);
  if (!VAR_8)
   goto end_advance;
 } else {
  VAR_14 = 1;
  FUNC_12((char *) VAR_8->d_name.name, VAR_6->name,
         VAR_8->d_name.len);
 }

 if (!VAR_8->d_inode) {
  FUNC_16(VAR_8);
  VAR_7->f_ino = FUNC_9(VAR_11->i_sb, 2);
  VAR_10 = FUNC_14(VAR_11->i_sb, VAR_7);
  if (VAR_10) {
   FUNC_15(VAR_8);
   FUNC_2(VAR_8, VAR_10);
   if (!VAR_14)
    FUNC_4(VAR_8);
  }
 } else
  FUNC_17(VAR_8->d_inode, VAR_7);

        if (VAR_8->d_inode) {
  VAR_15 = VAR_8->d_inode->i_ino;
  VAR_8->d_fsdata = (void *) VAR_12.fpos;
  FUNC_15(VAR_8);
 }

 if (VAR_12.idx >= VAR_1) {
  if (VAR_12.page) {
   FUNC_11(VAR_12.page);
   FUNC_0(VAR_12.page);
   FUNC_19(VAR_12.page);
   FUNC_13(VAR_12.page);
  }
  VAR_12.cache = ((void*)0);
  VAR_12.idx -= VAR_1;
  VAR_12.ofs += 1;
  VAR_12.page = FUNC_8(&VAR_11->i_data, VAR_12.ofs);
  if (VAR_12.page)
   VAR_12.cache = FUNC_10(VAR_12.page);
 }
 if (VAR_12.cache) {
  VAR_12.cache->dentry[VAR_12.idx] = VAR_8;
  VAR_13 = 1;
 }
 FUNC_5(VAR_8);

end_advance:
 if (!VAR_13)
  VAR_12.valid = 0;
 if (!VAR_12.filled && (VAR_12.fpos == VAR_2->f_pos)) {
  if (!VAR_15)
   VAR_15 = FUNC_6(VAR_9, VAR_6);
  if (!VAR_15)
   VAR_15 = FUNC_9(VAR_11->i_sb, 2);
  VAR_12.filled = VAR_4(VAR_3, VAR_6->name, VAR_6->len,
         VAR_2->f_pos, VAR_15, VAR_0);
  if (!VAR_12.filled)
   VAR_2->f_pos += 1;
 }
 VAR_12.fpos += 1;
 VAR_12.idx += 1;
 *VAR_5 = VAR_12;
 return (VAR_12.valid || !VAR_12.filled);
}
