
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msym_bunch {struct msym_bunch* next; } ;


 struct msym_bunch* VAR_0 ;
 int FUNC_0 (struct msym_bunch*) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_1)
{
  struct msym_bunch *VAR_2;

  while (VAR_0 != ((void*)0))
    {
      VAR_2 = VAR_0->next;
      FUNC_0 (VAR_0);
      VAR_0 = VAR_2;
    }
}
