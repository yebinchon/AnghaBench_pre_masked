
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct readdir_data {int used; void* dirent; scalar_t__ full; } ;
struct readdir_cd {scalar_t__ err; } ;
struct inode {int i_mutex; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct buffered_dirent {scalar_t__ namlen; int d_type; int ino; int offset; int name; } ;
typedef int loff_t ;
typedef scalar_t__ (* filldir_t ) (struct readdir_cd*,int ,scalar_t__,int ,int ,int ) ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {struct inode* d_inode; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct file*,int ,int ) ;
 int FUNC_7 (struct file*,int ,struct readdir_data*) ;

__attribute__((used)) static __be32 FUNC_8(struct file *VAR_6, filldir_t VAR_7,
        struct readdir_cd *VAR_8, loff_t *VAR_9)
{
 struct readdir_data VAR_10;
 struct buffered_dirent *VAR_11;
 int VAR_12;
 int VAR_13;
 loff_t VAR_14;

 VAR_10.dirent = (void *)FUNC_1(VAR_1);
 if (!VAR_10.dirent)
  return FUNC_5(-VAR_0);

 VAR_14 = *VAR_9;

 while (1) {
  struct inode *VAR_15 = VAR_6->f_path.dentry->d_inode;
  unsigned int VAR_16;

  VAR_8->err = VAR_5;
  VAR_10.used = 0;
  VAR_10.full = 0;

  VAR_12 = FUNC_7(VAR_6, VAR_4, &VAR_10);
  if (VAR_10.full)
   VAR_12 = 0;

  if (VAR_12 < 0)
   break;

  VAR_13 = VAR_10.used;

  if (!VAR_13)
   break;






  VAR_12 = FUNC_3(&VAR_15->i_mutex);
  if (VAR_12)
   break;

  VAR_11 = (struct buffered_dirent *)VAR_10.dirent;
  while (VAR_13 > 0) {
   VAR_14 = VAR_11->offset;

   if (VAR_7(VAR_8, VAR_11->name, VAR_11->namlen, VAR_11->offset,
     VAR_11->ino, VAR_11->d_type))
    break;

   if (VAR_8->err != VAR_3)
    break;

   VAR_16 = FUNC_0(sizeof(*VAR_11) + VAR_11->namlen,
           sizeof(u64));
   VAR_13 -= VAR_16;
   VAR_11 = (struct buffered_dirent *)((char *)VAR_11 + VAR_16);
  }
  FUNC_4(&VAR_15->i_mutex);
  if (VAR_13 > 0)
   break;

  VAR_14 = FUNC_6(VAR_6, 0, VAR_2);
 }

 FUNC_2((unsigned long)(VAR_10.dirent));

 if (VAR_12)
  return FUNC_5(VAR_12);

 *VAR_9 = VAR_14;
 return VAR_8->err;
}
