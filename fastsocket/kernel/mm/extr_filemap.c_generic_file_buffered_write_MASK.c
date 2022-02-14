
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct address_space*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct file*,struct iov_iter*,scalar_t__) ;
 int FUNC_2 (struct iov_iter*,struct iovec const*,unsigned long,size_t,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

ssize_t
FUNC_5(struct kiocb *VAR_1, const struct iovec *VAR_2,
  unsigned long VAR_3, loff_t VAR_4, loff_t *VAR_5,
  size_t VAR_6, ssize_t VAR_7)
{
 struct file *VAR_8 = VAR_1->ki_filp;
 struct address_space *VAR_9 = VAR_8->f_mapping;
 ssize_t VAR_10;
 struct iov_iter VAR_11;

 FUNC_2(&VAR_11, VAR_2, VAR_3, VAR_6, VAR_7);
 VAR_10 = FUNC_1(VAR_8, &VAR_11, VAR_4);

 if (FUNC_3(VAR_10 >= 0)) {
  VAR_7 += VAR_10;
  *VAR_5 = VAR_4 + VAR_10;
   }






 if (FUNC_4(VAR_8->f_flags & VAR_0) && VAR_7)
  VAR_10 = FUNC_0(VAR_9,
     VAR_4, VAR_4 + VAR_7 - 1);

 return VAR_7 ? VAR_7 : VAR_10;
}
