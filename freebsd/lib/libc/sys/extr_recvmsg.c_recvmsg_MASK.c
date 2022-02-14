
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int,struct msghdr*,int) ;

ssize_t
FUNC_1(int VAR_2, struct msghdr *VAR_3, int VAR_4)
{

 return (((int (*)(int, struct msghdr *, int))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4));
}
