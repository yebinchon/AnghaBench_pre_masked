
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_flags; struct iovec* msg_iov; } ;
struct kvec {size_t iov_len; void* iov_base; } ;
struct iovec {int dummy; } ;
typedef int mm_segment_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,struct msghdr*,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4;
 mm_segment_t VAR_5;
 struct kvec VAR_6 = {
  .iov_len = VAR_3,
  .iov_base = VAR_2,
 };
 struct msghdr VAR_7 = {
  .msg_iovlen = 1,
  .msg_iov = (struct iovec *)&VAR_6,
         .msg_flags = VAR_0,
 };

 VAR_5 = FUNC_1();
 FUNC_2(FUNC_0());
 VAR_4 = FUNC_3(VAR_1, &VAR_7, VAR_3, VAR_7.msg_flags);
 FUNC_2(VAR_5);

 return VAR_4;
}
