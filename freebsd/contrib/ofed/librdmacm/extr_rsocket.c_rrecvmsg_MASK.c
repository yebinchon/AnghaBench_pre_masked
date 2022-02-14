
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_flags; scalar_t__ msg_iovlen; int msg_iov; scalar_t__ msg_controllen; scalar_t__ msg_control; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int,int ) ;

ssize_t FUNC_2(int VAR_1, struct msghdr *VAR_2, int VAR_3)
{
 if (VAR_2->msg_control && VAR_2->msg_controllen)
  return FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2->msg_iov, (int) VAR_2->msg_iovlen, VAR_2->msg_flags);
}
