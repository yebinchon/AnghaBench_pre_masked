
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct kevent {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int,struct kevent const*,int,struct kevent*,int,struct timespec const*) ;

int
FUNC_1(int VAR_2, const struct kevent *VAR_3, int VAR_4,
    struct kevent *VAR_5, int VAR_6, const struct timespec *VAR_7)
{

 return (((int (*)(int, const struct kevent *, int,
     struct kevent *, int, const struct timespec *))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4,
    VAR_5, VAR_6, VAR_7));
}
