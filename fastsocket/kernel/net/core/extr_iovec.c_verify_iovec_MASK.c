
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; struct iovec* msg_iov; struct sockaddr* msg_name; scalar_t__ msg_namelen; } ;
struct iovec {size_t iov_len; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iovec*,struct iovec*,int) ;
 long FUNC_1 (struct sockaddr*,scalar_t__,struct sockaddr*) ;

long FUNC_2(struct msghdr *VAR_3, struct iovec *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 long VAR_9;

 if (VAR_3->msg_namelen) {
  if (VAR_6 == VAR_2) {
   VAR_9 = FUNC_1(VAR_3->msg_name, VAR_3->msg_namelen,
        VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
  }
  VAR_3->msg_name = VAR_5;
 } else {
  VAR_3->msg_name = ((void*)0);
 }

 VAR_7 = VAR_3->msg_iovlen * sizeof(struct iovec);
 if (FUNC_0(VAR_4, VAR_3->msg_iov, VAR_7))
  return -VAR_0;

 VAR_3->msg_iov = VAR_4;
 VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3->msg_iovlen; VAR_8++) {
  size_t VAR_10 = VAR_4[VAR_8].iov_len;

  if (VAR_10 > VAR_1 - VAR_9) {
   VAR_10 = VAR_1 - VAR_9;
   VAR_4[VAR_8].iov_len = VAR_10;
  }
  VAR_9 += VAR_10;
 }

 return VAR_9;
}
