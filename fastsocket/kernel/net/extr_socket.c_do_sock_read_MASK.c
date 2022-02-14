
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {unsigned long msg_iovlen; int msg_flags; struct iovec* msg_iov; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_namelen; int * msg_name; } ;
struct kiocb {int dummy; } ;
struct iovec {scalar_t__ iov_len; } ;
struct file {int f_flags; struct socket* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct msghdr *VAR_2, struct kiocb *VAR_3,
  struct file *VAR_4, const struct iovec *VAR_5,
  unsigned long VAR_6)
{
 struct socket *VAR_7 = VAR_4->private_data;
 size_t VAR_8 = 0;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_8 += VAR_5[VAR_9].iov_len;

 VAR_2->msg_name = ((void*)0);
 VAR_2->msg_namelen = 0;
 VAR_2->msg_control = ((void*)0);
 VAR_2->msg_controllen = 0;
 VAR_2->msg_iov = (struct iovec *)VAR_5;
 VAR_2->msg_iovlen = VAR_6;
 VAR_2->msg_flags = (VAR_4->f_flags & VAR_1) ? VAR_0 : 0;

 return FUNC_0(VAR_3, VAR_7, VAR_2, VAR_8, VAR_2->msg_flags);
}
