
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
struct uni_msg {scalar_t__ b_rptr; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
typedef int ssize_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct uni_msg*) ;
 void* FUNC_3 (struct uni_msg*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,struct iovec*,int) ;

void
FUNC_5(struct uni_msg *VAR_2)
{
 struct iovec VAR_3[2];
 u_int32_t VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_3(VAR_2);

 VAR_3[0].iov_len = VAR_0 ? 4 : 0;
 VAR_3[0].iov_base = (caddr_t)&VAR_4;
 VAR_3[1].iov_len = FUNC_3(VAR_2);
 VAR_3[1].iov_base = VAR_2->b_rptr;

 if ((VAR_5 = FUNC_4(VAR_1, VAR_3, 2)) == -1)
  FUNC_0(1, "write sscop");
 if ((size_t)VAR_5 != VAR_3[0].iov_len + VAR_3[1].iov_len)
  FUNC_1(1, "short sscop write");

 FUNC_2(VAR_2);
}
