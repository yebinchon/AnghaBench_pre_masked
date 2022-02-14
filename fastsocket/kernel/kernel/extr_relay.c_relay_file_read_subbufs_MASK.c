
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int (* subbuf_actor_t ) (size_t,struct rchan_buf*,size_t,TYPE_4__*,int ) ;
struct rchan_buf {int dummy; } ;
struct TYPE_10__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; struct rchan_buf* private_data; } ;
typedef int ssize_t ;
struct TYPE_11__ {scalar_t__ error; int written; scalar_t__ count; } ;
typedef TYPE_4__ read_descriptor_t ;
typedef int read_actor_t ;
typedef int loff_t ;
struct TYPE_9__ {TYPE_1__* d_inode; } ;
struct TYPE_8__ {int i_mutex; } ;


 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rchan_buf*,int ) ;
 int FUNC_4 (struct rchan_buf*,size_t,int) ;
 int FUNC_5 (struct rchan_buf*,size_t,int) ;
 size_t FUNC_6 (int ,struct rchan_buf*) ;
 size_t FUNC_7 (size_t,struct rchan_buf*) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_0, loff_t *VAR_1,
     subbuf_actor_t VAR_2,
     read_actor_t VAR_3,
     read_descriptor_t *VAR_4)
{
 struct rchan_buf *VAR_5 = VAR_0->private_data;
 size_t VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_4->count)
  return 0;

 FUNC_1(&VAR_0->f_path.dentry->d_inode->i_mutex);
 do {
  if (!FUNC_3(VAR_5, *VAR_1))
   break;

  VAR_6 = FUNC_6(*VAR_1, VAR_5);
  VAR_7 = FUNC_7(VAR_6, VAR_5);
  if (!VAR_7)
   break;

  VAR_7 = FUNC_0(VAR_4->count, VAR_7);
  VAR_8 = VAR_2(VAR_6, VAR_5, VAR_7, VAR_4, VAR_3);
  if (VAR_4->error < 0)
   break;

  if (VAR_8) {
   FUNC_4(VAR_5, VAR_6, VAR_8);
   *VAR_1 = FUNC_5(VAR_5, VAR_6, VAR_8);
  }
 } while (VAR_4->count && VAR_8);
 FUNC_2(&VAR_0->f_path.dentry->d_inode->i_mutex);

 return VAR_4->written;
}
