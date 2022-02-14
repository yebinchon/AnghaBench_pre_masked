
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int,struct iovec const*,int) ;

ssize_t
FUNC_1(int VAR_2, const struct iovec *VAR_3, int VAR_4)
{

 return (((ssize_t (*)(int, const struct iovec *, int))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4));
}
