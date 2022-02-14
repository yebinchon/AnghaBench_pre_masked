
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iovlen; int msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef int ssize_t ;
typedef int SOCKET ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (int ,void*,size_t,int ) ;
 int FUNC_3 (int ,struct msghdr*,int ) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(SOCKET VAR_5, void *VAR_6, size_t VAR_7,
    char *VAR_8, int VAR_9)
{
 ssize_t VAR_10;

 struct msghdr VAR_11;
 struct iovec VAR_12;


 if (VAR_7 == 0)
 {
  FUNC_0("I have been requested to read zero bytes");
  return 0;
 }
 if (VAR_7 > VAR_1)
 {
  if (VAR_8)
  {
   FUNC_1(VAR_8, VAR_9,
       "Can't read more than %u bytes with sock_recv_dgram",
       VAR_1);
  }
  return -1;
 }
 VAR_11.msg_name = ((void*)0);
 VAR_11.msg_namelen = 0;
 VAR_12.iov_base = VAR_6;
 VAR_12.iov_len = VAR_7;
 VAR_11.msg_iov = &VAR_12;
 VAR_11.msg_iovlen = 1;







 VAR_10 = FUNC_3(VAR_5, &VAR_11, 0);
 if (VAR_10 == -1)
 {
  if (VAR_4 == VAR_0)
   return -3;
  FUNC_4("recv(): ", VAR_8, VAR_9);
  return -1;
 }
 return (int)VAR_10;
}
