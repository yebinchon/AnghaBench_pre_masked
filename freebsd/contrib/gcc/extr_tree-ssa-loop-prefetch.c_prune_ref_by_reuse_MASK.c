
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {scalar_t__ write_p; struct mem_ref* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ref*,struct mem_ref*,int) ;
 int FUNC_1 (struct mem_ref*) ;

__attribute__((used)) static void
FUNC_2 (struct mem_ref *VAR_2, struct mem_ref *VAR_3)
{
  struct mem_ref *VAR_4;
  bool VAR_5 = 1;

  FUNC_1 (VAR_2);

  for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
    {
      if (VAR_4 == VAR_2)
 {
   VAR_5 = 0;
   continue;
 }

      if (!VAR_1
   && VAR_2->write_p
   && !VAR_4->write_p)
 continue;
      if (!VAR_0
   && !VAR_2->write_p
   && VAR_4->write_p)
 continue;

      FUNC_0 (VAR_2, VAR_4, VAR_5);
    }
}
