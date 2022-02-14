
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_controllen; int * msg_control; } ;


 int * FUNC_0 (struct msghdr*) ;

int
FUNC_1(void)
{
 struct msghdr VAR_0;

 VAR_0.msg_control = ((void*)0);
 VAR_0.msg_controllen = 0;

 return FUNC_0(&VAR_0) != ((void*)0);
}
