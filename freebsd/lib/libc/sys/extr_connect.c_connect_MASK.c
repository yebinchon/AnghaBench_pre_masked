
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int,struct sockaddr const*,int ) ;

int
FUNC_1(int VAR_2, const struct sockaddr *VAR_3, socklen_t VAR_4)
{

 return (((int (*)(int, const struct sockaddr *, socklen_t))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4));
}
