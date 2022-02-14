
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abbrev_info {struct abbrev_info* attrs; struct abbrev_info* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct abbrev_info*) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_1)
{
  int VAR_2;
  struct abbrev_info *VAR_3, *VAR_4;
  struct abbrev_info **VAR_5;

  VAR_5 = (struct abbrev_info **)VAR_1;

  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
    {
      VAR_4 = ((void*)0);
      VAR_3 = VAR_5[VAR_2];
      while (VAR_3)
 {
   VAR_4 = VAR_3->next;
   FUNC_0 (VAR_3->attrs);
   FUNC_0 (VAR_3);
   VAR_3 = VAR_4;
 }
      VAR_5[VAR_2] = ((void*)0);
    }
}
