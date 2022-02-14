
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int pthread_mutex_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int *,struct timespec*) ;
 int FUNC_3 (struct timespec*,struct timespec const*,struct timespec*) ;

__attribute__((used)) static int
FUNC_4(pthread_mutex_t *VAR_1, const struct timespec *VAR_2)
{
 struct timespec VAR_3;
 FUNC_0(FUNC_1(VAR_0, &VAR_3) != -1);
 FUNC_3(&VAR_3, VAR_2, &VAR_3);

 return FUNC_2(VAR_1, &VAR_3);
}
