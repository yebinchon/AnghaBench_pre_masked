
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpstack {char* name; struct cpstack* next; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct cpstack **VAR_0, char *VAR_1)
{
  struct cpstack *VAR_2;

  VAR_2 = (struct cpstack *) FUNC_0 (sizeof (struct cpstack));
  VAR_2->name = VAR_1;
  VAR_2->next = *VAR_0;
  *VAR_0 = VAR_2;
}
