
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_cond_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, int VAR_1)
{
 pthread_cond_t *VAR_2 = VAR_0;
 int VAR_3;
 if (VAR_1)
  VAR_3 = FUNC_0(VAR_2);
 else
  VAR_3 = FUNC_1(VAR_2);
 return VAR_3 ? -1 : 0;
}
