
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; } ;
struct msghdr {unsigned long msg_iovlen; int msg_flags; struct iovec* msg_iov; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_namelen; int * msg_name; } ;
struct kiocb {int dummy; } ;
struct iovec {scalar_t__ iov_len; } ;
struct file {int f_flags; struct socket* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct msghdr *VAR_4, struct kiocb *VAR_5,
   struct file *VAR_6, const struct iovec *VAR_7,
   unsigned long VAR_8)
{
 struct socket *VAR_9 = VAR_6->private_data;
 size_t VAR_10 = 0;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  VAR_10 += VAR_7[VAR_11].iov_len;

 VAR_4->msg_name = ((void*)0);
 VAR_4->msg_namelen = 0;
 VAR_4->msg_control = ((void*)0);
 VAR_4->msg_controllen = 0;
 VAR_4->msg_iov = (struct iovec *)VAR_7;
 VAR_4->msg_iovlen = VAR_8;
 VAR_4->msg_flags = (VAR_6->f_flags & VAR_2) ? VAR_0 : 0;
 if (VAR_9->type == VAR_3)
  VAR_4->msg_flags |= VAR_1;

 return FUNC_0(VAR_5, VAR_9, VAR_4, VAR_10);
}
