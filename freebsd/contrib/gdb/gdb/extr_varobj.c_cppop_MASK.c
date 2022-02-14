
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpstack {char* name; struct cpstack* next; } ;


 int FUNC_0 (struct cpstack*) ;

__attribute__((used)) static char *
FUNC_1 (struct cpstack **VAR_0)
{
  struct cpstack *VAR_1;
  char *VAR_2;

  if ((*VAR_0)->name == ((void*)0) && (*VAR_0)->next == ((void*)0))
    return ((void*)0);

  VAR_1 = *VAR_0;
  VAR_2 = VAR_1->name;
  *VAR_0 = (*VAR_0)->next;
  FUNC_0 (VAR_1);

  return VAR_2;
}
