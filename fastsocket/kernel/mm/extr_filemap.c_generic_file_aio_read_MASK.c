
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iovec {size_t iov_len; scalar_t__ iov_base; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct address_space* f_mapping; } ;
struct address_space {TYPE_1__* a_ops; struct inode* host; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {scalar_t__ buf; } ;
struct TYPE_7__ {size_t error; scalar_t__ count; scalar_t__ written; TYPE_2__ arg; } ;
typedef TYPE_3__ read_descriptor_t ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {size_t (* direct_IO ) (int ,struct kiocb*,struct iovec const*,scalar_t__,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,scalar_t__*,TYPE_3__*,int ) ;
 int FUNC_1 (struct file*) ;
 int VAR_3 ;
 size_t FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 size_t FUNC_3 (struct iovec const*,unsigned long*,size_t*,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct iovec const*,unsigned long) ;
 size_t FUNC_6 (int ,struct kiocb*,struct iovec const*,scalar_t__,unsigned long) ;

ssize_t
FUNC_7(struct kiocb *VAR_4, const struct iovec *VAR_5,
  unsigned long VAR_6, loff_t VAR_7)
{
 struct file *VAR_8 = VAR_4->ki_filp;
 ssize_t VAR_9;
 unsigned long VAR_10 = 0;
 size_t VAR_11;
 loff_t *VAR_12 = &VAR_4->ki_pos;

 VAR_11 = 0;
 VAR_9 = FUNC_3(VAR_5, &VAR_6, &VAR_11, VAR_2);
 if (VAR_9)
  return VAR_9;


 if (VAR_8->f_flags & VAR_0) {
  loff_t VAR_13;
  struct address_space *VAR_14;
  struct inode *VAR_15;

  VAR_14 = VAR_8->f_mapping;
  VAR_15 = VAR_14->host;
  if (!VAR_11)
   goto out;
  VAR_13 = FUNC_4(VAR_15);
  if (VAR_7 < VAR_13) {
   VAR_9 = FUNC_2(VAR_14, VAR_7,
     VAR_7 + FUNC_5(VAR_5, VAR_6) - 1);
   if (!VAR_9) {
    VAR_9 = VAR_14->a_ops->direct_IO(VAR_1, VAR_4,
       VAR_5, VAR_7, VAR_6);
   }
   if (VAR_9 > 0) {
    *VAR_12 = VAR_7 + VAR_9;
    VAR_11 -= VAR_9;
   }
   if (VAR_9 < 0 || !VAR_11 || *VAR_12 >= VAR_13) {
    FUNC_1(VAR_8);
    goto out;
   }
  }
 }

 VAR_11 = VAR_9;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  read_descriptor_t VAR_16;
  loff_t VAR_17 = 0;





  if (VAR_11) {
   if (VAR_11 > VAR_5[VAR_10].iov_len) {
    VAR_11 -= VAR_5[VAR_10].iov_len;
    continue;
   }
   VAR_17 = VAR_11;
   VAR_11 = 0;
  }

  VAR_16.written = 0;
  VAR_16.arg.buf = VAR_5[VAR_10].iov_base + VAR_17;
  VAR_16.count = VAR_5[VAR_10].iov_len - VAR_17;
  if (VAR_16.count == 0)
   continue;
  VAR_16.error = 0;
  FUNC_0(VAR_8, VAR_12, &VAR_16, VAR_3);
  VAR_9 += VAR_16.written;
  if (VAR_16.error) {
   VAR_9 = VAR_9 ?: VAR_16.error;
   break;
  }
  if (VAR_16.count > 0)
   break;
 }
out:
 return VAR_9;
}
