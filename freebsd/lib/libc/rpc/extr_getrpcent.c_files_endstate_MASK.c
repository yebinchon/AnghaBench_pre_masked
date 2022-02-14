
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_state {int * fp; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 FILE * VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = ((struct files_state *)VAR_0)->fp;
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1);

 FUNC_1(VAR_0);
}
