
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ ip_summed; int dev; int csum; int data; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,int,int,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,struct iovec*,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sk_buff *VAR_3,
         int VAR_4, struct iovec *VAR_5)
{
 __wsum VAR_6;
 int VAR_7 = VAR_3->len - VAR_4;

 if (!VAR_7)
  return 0;




 while (!VAR_5->iov_len)
  VAR_5++;

 if (VAR_5->iov_len < VAR_7) {
  if (FUNC_0(VAR_3))
   goto csum_error;
  if (FUNC_5(VAR_3, VAR_4, VAR_5, VAR_7))
   goto fault;
 } else {
  VAR_6 = FUNC_2(VAR_3->data, VAR_4, VAR_3->csum);
  if (FUNC_4(VAR_3, VAR_4, VAR_5->iov_base,
            VAR_7, &VAR_6))
   goto fault;
  if (FUNC_1(VAR_6))
   goto csum_error;
  if (FUNC_6(VAR_3->ip_summed == VAR_0))
   FUNC_3(VAR_3->dev);
  VAR_5->iov_len -= VAR_7;
  VAR_5->iov_base += VAR_7;
 }
 return 0;
csum_error:
 return -VAR_2;
fault:
 return -VAR_1;
}
