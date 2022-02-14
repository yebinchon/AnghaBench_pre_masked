
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int clockid_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int ,int,struct timespec const*,struct timespec*) ;

int
FUNC_1(clockid_t VAR_2, int VAR_3, const struct timespec *VAR_4,
    struct timespec *VAR_5)
{

 return (((int (*)(clockid_t, int, const struct timespec *,
     struct timespec *))
     VAR_1[VAR_0])(VAR_2, VAR_3,
     VAR_4, VAR_5));
}
