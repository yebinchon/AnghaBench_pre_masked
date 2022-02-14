
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; int msg_flags; struct sockaddr* msg_name; } ;
struct kvec {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_2, struct sockaddr *VAR_3, int VAR_4, struct kvec *VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct msghdr VAR_8 = {
  .msg_name = VAR_3,
  .msg_namelen = VAR_4,
  .msg_flags = VAR_1 | (VAR_7 ? VAR_0 : 0),
 };
 struct kvec VAR_9 = {
  .iov_base = VAR_5->iov_base + VAR_6,
  .iov_len = VAR_5->iov_len - VAR_6,
 };

 if (VAR_9.iov_len != 0)
  return FUNC_0(VAR_2, &VAR_8, &VAR_9, 1, VAR_9.iov_len);
 return FUNC_0(VAR_2, &VAR_8, ((void*)0), 0, 0);
}
