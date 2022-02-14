
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int arg; int (* function ) (int ) ;struct cleanup* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cleanup*) ;

__attribute__((used)) static void
FUNC_2 (struct cleanup **VAR_0,
  struct cleanup *VAR_1)
{
  struct cleanup *VAR_2;
  while ((VAR_2 = *VAR_0) != VAR_1)
    {
      *VAR_0 = VAR_2->next;
      (*VAR_2->function) (VAR_2->arg);
      FUNC_1 (VAR_2);
    }
}
