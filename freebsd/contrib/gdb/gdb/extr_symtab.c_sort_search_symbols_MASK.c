
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_search {struct symbol_search* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct symbol_search**,int,int,int ) ;
 int FUNC_1 (struct symbol_search**) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct symbol_search *
FUNC_3 (struct symbol_search *VAR_1, int VAR_2)
{
  struct symbol_search **VAR_3, *VAR_4, *VAR_5;
  int VAR_6;

  VAR_3 = (struct symbol_search **) FUNC_2 (sizeof (struct symbol_search *)
            * VAR_2);
  VAR_4 = VAR_1->next;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_3[VAR_6] = VAR_4;
      VAR_4 = VAR_4->next;
    }

  VAR_5 = VAR_4;

  FUNC_0 (VAR_3, VAR_2, sizeof (struct symbol_search *),
  VAR_0);

  VAR_4 = VAR_1;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_4->next = VAR_3[VAR_6];
      VAR_4 = VAR_4->next;
    }
  VAR_4->next = VAR_5;

  FUNC_1 (VAR_3);
  return VAR_4;
}
