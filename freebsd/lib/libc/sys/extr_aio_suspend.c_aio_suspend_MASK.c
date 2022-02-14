
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct aiocb {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct aiocb const* const*,int,struct timespec const*) ;

int
FUNC_1(const struct aiocb * const VAR_2[], int VAR_3,
    const struct timespec *VAR_4)
{

 return (((int (*)(const struct aiocb * const[], int,
     const struct timespec *))
     VAR_1[VAR_0])(VAR_2, VAR_3, VAR_4));
}
