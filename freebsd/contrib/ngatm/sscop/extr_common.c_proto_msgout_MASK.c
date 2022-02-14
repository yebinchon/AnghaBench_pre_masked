
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
struct uni_msg {scalar_t__ b_rptr; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
typedef int ssize_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,void*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct uni_msg*) ;
 void* FUNC_5 (struct uni_msg*) ;
 int VAR_6 ;
 int FUNC_6 (int ,struct iovec*,int) ;

void
FUNC_7(struct uni_msg *VAR_7)
{
 struct iovec VAR_8[2];
 u_int32_t VAR_9;
 ssize_t VAR_10;
 static int VAR_11;
 int VAR_12;

 if (VAR_6 & 0x0002)
  FUNC_1("send", VAR_7->b_rptr, FUNC_5(VAR_7));
 if (VAR_3 > 0 && (VAR_11++ % VAR_3) == VAR_3 - 1) {
  FUNC_0(("loosing message"));
  FUNC_4(VAR_7);
  return;
 }

 VAR_9 = FUNC_5(VAR_7);

 VAR_8[0].iov_len = VAR_5 ? 4 : 0;
 VAR_8[0].iov_base = (caddr_t)&VAR_9;
 VAR_8[1].iov_len = FUNC_5(VAR_7);
 VAR_8[1].iov_base = VAR_7->b_rptr;

 if ((VAR_12 = FUNC_3(VAR_4, VAR_0, 0)) == -1)
  FUNC_2(1, "cannot get flags for sscop fd");
 VAR_12 &= ~VAR_2;
 if (FUNC_3(VAR_4, VAR_1, VAR_12) == -1)
  FUNC_2(1, "cannot set flags for sscop fd");

 if ((VAR_10 = FUNC_6(VAR_4, VAR_8, 2)) == -1)
  FUNC_2(1, "write sscop");
 if ((size_t)VAR_10 != VAR_8[0].iov_len + VAR_8[1].iov_len)
  FUNC_2(1, "short sscop write %zu %zu %zd",
      VAR_8[0].iov_len, VAR_8[1].iov_len, VAR_10);

 VAR_12 |= VAR_2;
 if (FUNC_3(VAR_4, VAR_1, VAR_12) == -1)
  FUNC_2(1, "cannot restore flags for sscop fd");

 FUNC_4(VAR_7);
}
