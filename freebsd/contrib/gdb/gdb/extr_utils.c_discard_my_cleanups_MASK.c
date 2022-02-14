
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {struct cleanup* next; } ;


 int FUNC_0 (struct cleanup*) ;

void
FUNC_1 (struct cleanup **VAR_0,
       struct cleanup *VAR_1)
{
  struct cleanup *VAR_2;
  while ((VAR_2 = *VAR_0) != VAR_1)
    {
      *VAR_0 = VAR_2->next;
      FUNC_0 (VAR_2);
    }
}
