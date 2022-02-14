
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rose_neigh {scalar_t__ dce_mode; } ;


 int * FUNC_0 (int,struct rose_neigh*) ;
 int * FUNC_1 (int,struct rose_neigh*) ;
 int VAR_0 ;

unsigned int FUNC_2(struct rose_neigh *VAR_1)
{
 int VAR_2;

 if (VAR_1->dce_mode) {
  for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++)
   if (FUNC_0(VAR_2, VAR_1) == ((void*)0) && FUNC_1(VAR_2, VAR_1) == ((void*)0))
    return VAR_2;
 } else {
  for (VAR_2 = VAR_0; VAR_2 > 0; VAR_2--)
   if (FUNC_0(VAR_2, VAR_1) == ((void*)0) && FUNC_1(VAR_2, VAR_1) == ((void*)0))
    return VAR_2;
 }

 return 0;
}
