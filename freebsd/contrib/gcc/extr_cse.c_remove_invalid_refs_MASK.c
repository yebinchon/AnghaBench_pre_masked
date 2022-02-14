
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int exp; struct table_elt* next_same_hash; } ;
typedef int rtx ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,int ,int *) ;
 int FUNC_2 (struct table_elt*,unsigned int) ;
 struct table_elt** VAR_1 ;

__attribute__((used)) static void
FUNC_3 (unsigned int VAR_2)
{
  unsigned int VAR_3;
  struct table_elt *VAR_4, *VAR_5;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    for (VAR_4 = VAR_1[VAR_3]; VAR_4; VAR_4 = VAR_5)
      {
 VAR_5 = VAR_4->next_same_hash;
 if (!FUNC_0 (VAR_4->exp)
     && FUNC_1 (VAR_2, VAR_2 + 1, VAR_4->exp, (rtx *) 0))
   FUNC_2 (VAR_4, VAR_3);
      }
}
