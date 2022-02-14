
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct sockaddr_in {scalar_t__ sin_family; } ;
struct msghdr {scalar_t__ msg_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct sockaddr_in*) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_1, struct msghdr *VAR_2,
    int VAR_3)
{
 struct sockaddr_in *VAR_4 = (struct sockaddr_in *) VAR_2->msg_name;




 if (VAR_4 == ((void*)0) || VAR_4->sin_family != VAR_0)
  return 0;

 return FUNC_0(VAR_1->sk, VAR_4);
}
