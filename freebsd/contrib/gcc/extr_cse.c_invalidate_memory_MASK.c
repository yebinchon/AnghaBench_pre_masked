
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {scalar_t__ in_memory; struct table_elt* next_same_hash; } ;


 int VAR_0 ;
 int FUNC_0 (struct table_elt*,int) ;
 struct table_elt** VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_2;
  struct table_elt *VAR_3, *VAR_4;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    for (VAR_3 = VAR_1[VAR_2]; VAR_3; VAR_3 = VAR_4)
      {
 VAR_4 = VAR_3->next_same_hash;
 if (VAR_3->in_memory)
   FUNC_0 (VAR_3, VAR_2);
      }
}
