
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct completer_entry {TYPE_1__* name; struct completer_entry* alternative; struct completer_entry* addl_entries; } ;
struct TYPE_2__ {scalar_t__ num; } ;


 scalar_t__ FUNC_0 (struct completer_entry*,struct completer_entry*) ;
 struct completer_entry** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct completer_entry**,int) ;

__attribute__((used)) static struct completer_entry *
FUNC_2 (struct completer_entry *VAR_3)
{
  if (VAR_3 != ((void*)0))
    {
      int VAR_4;
      int VAR_5;
      int VAR_6 = 0, VAR_7;

      VAR_3->addl_entries = FUNC_2 (VAR_3->addl_entries);
      VAR_3->alternative = FUNC_2 (VAR_3->alternative);

      VAR_4 = VAR_1 / 2;
      VAR_7 = VAR_1;

      if (VAR_2 == VAR_1)
 {
   VAR_2 += 20;
   VAR_0 = (struct completer_entry **)
     FUNC_1 (VAR_0, sizeof (struct completer_entry *) * VAR_2);
 }

      if (VAR_1 == 0)
 {
   VAR_0[0] = VAR_3;
   VAR_1 = 1;
   return VAR_3;
 }

      if (VAR_3->name->num < VAR_0[0]->name->num)
 VAR_4 = 0;
      else if (VAR_3->name->num > VAR_0[VAR_7 - 1]->name->num)
 VAR_4 = VAR_7;
      else
 {
   int VAR_8;

   while (1)
     {
       VAR_4 = (VAR_6 + VAR_7) / 2;
       VAR_8 = VAR_3->name->num - VAR_0[VAR_4]->name->num;

       if (VAR_8 < 0)
  VAR_7 = VAR_4 - 1;
       else if (VAR_8 == 0)
  {
    while (VAR_4 > 0
    && VAR_3->name->num == VAR_0[VAR_4 - 1]->name->num)
      VAR_4--;

    break;
  }
       else
  VAR_6 = VAR_4 + 1;

       if (VAR_6 > VAR_7)
  break;
     }

   if (VAR_8 == 0)
     {
       while (VAR_4 < VAR_1)
  {
    if (VAR_3->name->num != VAR_0[VAR_4]->name->num)
      break;

    if (FUNC_0 (VAR_3, VAR_0[VAR_4]))
      return VAR_0[VAR_4];

    VAR_4++;
  }
     }
 }

      for (; VAR_4 > 0 && VAR_4 < VAR_1; VAR_4--)
 if (VAR_3->name->num >= VAR_0[VAR_4 - 1]->name->num)
   break;

      for (; VAR_4 < VAR_1; VAR_4++)
 if (VAR_3->name->num < VAR_0[VAR_4]->name->num)
   break;

      for (VAR_5 = VAR_1 - 1; VAR_5 >= VAR_4; VAR_5--)
 VAR_0[VAR_5 + 1] = VAR_0[VAR_5];

      VAR_0[VAR_4] = VAR_3;
      VAR_1++;
    }
  return VAR_3;
}
