
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pollfd {int dummy; } ;
typedef int sigset_t ;
typedef int nfds_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct pollfd*,int ,struct timespec const*,int const*) ;

int
FUNC_1(struct pollfd VAR_2[], nfds_t VAR_3, const struct timespec *__restrict
    VAR_4, const sigset_t *__restrict VAR_5)
{

 return (((int (*)(struct pollfd *, nfds_t, const struct timespec *,
     const sigset_t *)) VAR_1[VAR_0])(VAR_2, VAR_3,
     VAR_4, VAR_5));
}
