
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int,void const*,size_t,int,struct sockaddr const*,int ) ;

ssize_t
FUNC_1(int VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5,
    const struct sockaddr *VAR_6, socklen_t VAR_7)
{

 return (((ssize_t (*)(int, const void *, size_t, int,
     const struct sockaddr *, socklen_t))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7));
}
