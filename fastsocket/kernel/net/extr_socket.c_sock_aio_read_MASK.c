
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_iocb {int async_msg; } ;
struct kiocb {scalar_t__ ki_left; int ki_filp; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_iocb* FUNC_0 (struct kiocb*,struct sock_iocb*) ;
 int FUNC_1 (int *,struct kiocb*,int ,struct iovec const*,unsigned long) ;

ssize_t FUNC_2(struct kiocb *VAR_2, const struct iovec *VAR_3,
    unsigned long VAR_4, loff_t VAR_5)
{
 struct sock_iocb VAR_6, *VAR_7;

 if (VAR_5 != 0)
  return -VAR_1;

 if (VAR_2->ki_left == 0)
  return 0;


 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 if (!VAR_7)
  return -VAR_0;
 return FUNC_1(&VAR_7->async_msg, VAR_2, VAR_2->ki_filp, VAR_3, VAR_4);
}
