
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_spinlock_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int **,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(pthread_spinlock_t *VAR_2)
{
 void *VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0)) {
  VAR_4 = VAR_0;
 } else if (*VAR_2 == VAR_1) {
  VAR_3 = FUNC_1(VAR_2, 0);
  if (VAR_3 != ((void*)0))
   FUNC_0(VAR_3);
  VAR_4 = 0;
 } else {
  FUNC_2(*VAR_2);
  *VAR_2 = ((void*)0);
  VAR_4 = 0;
 }
 return (VAR_4);
}
