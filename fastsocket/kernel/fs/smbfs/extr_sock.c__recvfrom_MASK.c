
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {unsigned int msg_flags; } ;
struct kvec {unsigned char* member_0; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_2, unsigned char *VAR_3, int VAR_4, unsigned VAR_5)
{
 struct kvec VAR_6 = {VAR_3, VAR_4};
 struct msghdr VAR_7 = {.msg_flags = VAR_5};
 VAR_7.msg_flags |= VAR_0 | VAR_1;
 return FUNC_0(VAR_2, &VAR_7, &VAR_6, 1, VAR_4, VAR_7.msg_flags);
}
