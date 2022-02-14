
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct file* file; } ;
struct splice_desc {size_t total_len; unsigned int flags; int pos; int num_spliced; TYPE_1__ u; } ;
struct pipe_inode_info {TYPE_5__* inode; } ;
struct inode {int i_mutex; } ;
struct TYPE_9__ {TYPE_3__* dentry; } ;
struct file {TYPE_4__ f_path; struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_10__ {int i_mutex; } ;
struct TYPE_7__ {int name; int len; } ;
struct TYPE_8__ {TYPE_2__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct address_space*,unsigned long) ;
 int FUNC_1 (struct file*,int,int) ;
 int FUNC_2 (char*,struct file*,struct pipe_inode_info*,unsigned int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct pipe_inode_info*,struct file*,struct splice_desc*) ;
 int FUNC_10 (struct splice_desc*) ;
 int FUNC_11 (struct pipe_inode_info*,struct splice_desc*) ;
 int FUNC_12 (struct pipe_inode_info*,struct splice_desc*) ;

__attribute__((used)) static ssize_t FUNC_13(struct pipe_inode_info *VAR_4,
           struct file *VAR_5,
           loff_t *VAR_6,
           size_t VAR_7,
           unsigned int VAR_8)
{
 int VAR_9;
 struct address_space *VAR_10 = VAR_5->f_mapping;
 struct inode *VAR_11 = VAR_10->host;
 struct splice_desc VAR_12 = {
  .total_len = VAR_7,
  .flags = VAR_8,
  .pos = *VAR_6,
  .u.file = VAR_5,
 };

 FUNC_2("(0x%p, 0x%p, %u, '%.*s')\n", VAR_5, VAR_4,
     (unsigned int)VAR_7,
     VAR_5->f_path.dentry->d_name.len,
     VAR_5->f_path.dentry->d_name.name);

 if (VAR_4->inode)
  FUNC_5(&VAR_4->inode->i_mutex, VAR_1);

 FUNC_10(&VAR_12);
 do {
  VAR_9 = FUNC_12(VAR_4, &VAR_12);
  if (VAR_9 <= 0)
   break;

  FUNC_5(&VAR_11->i_mutex, VAR_0);
  VAR_9 = FUNC_7(VAR_11, 1);
  if (VAR_9 < 0)
   FUNC_3(VAR_9);
  else {
   VAR_9 = FUNC_9(VAR_4, VAR_5, &VAR_12);
   FUNC_8(VAR_11, 1);
  }
  FUNC_6(&VAR_11->i_mutex);
 } while (VAR_9 > 0);
 FUNC_11(VAR_4, &VAR_12);

 if (VAR_4->inode)
  FUNC_6(&VAR_4->inode->i_mutex);

 if (VAR_12.num_spliced)
  VAR_9 = VAR_12.num_spliced;

 if (VAR_9 > 0) {
  unsigned long VAR_13;
  int VAR_14;

  VAR_13 = (VAR_9 + VAR_3 - 1) >> VAR_2;

  VAR_14 = FUNC_1(VAR_5, *VAR_6, VAR_9);
  if (VAR_14)
   VAR_9 = VAR_14;
  else
   *VAR_6 += VAR_9;

  FUNC_0(VAR_10, VAR_13);
 }

 FUNC_4(VAR_9);
 return VAR_9;
}
