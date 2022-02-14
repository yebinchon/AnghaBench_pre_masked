
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_state {int * fp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;
 if (((struct files_state *)VAR_0)->fp != ((void*)0))
  FUNC_0(((struct files_state *)VAR_0)->fp);
 FUNC_1(VAR_0);
}
