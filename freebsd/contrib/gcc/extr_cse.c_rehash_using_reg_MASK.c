
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {struct table_elt* prev_same_hash; struct table_elt* next_same_hash; int mode; int exp; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 struct table_elt** VAR_2 ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_3)
{
  unsigned int VAR_4;
  struct table_elt *VAR_5, *VAR_6;
  unsigned VAR_7;

  if (FUNC_0 (VAR_3) == VAR_1)
    VAR_3 = FUNC_6 (VAR_3);




  if (!FUNC_3 (VAR_3)
      || FUNC_2 (FUNC_1 (VAR_3)) < 0
      || FUNC_2 (FUNC_1 (VAR_3)) != FUNC_4 (FUNC_1 (VAR_3)))
    return;




  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    for (VAR_5 = VAR_2[VAR_4]; VAR_5; VAR_5 = VAR_6)
      {
 VAR_6 = VAR_5->next_same_hash;
 if (FUNC_8 (VAR_3, VAR_5->exp)
     && FUNC_7 (VAR_5->exp, VAR_5->exp, 1, 0)
     && VAR_4 != (VAR_7 = FUNC_5 (VAR_5->exp, VAR_5->mode)))
   {
     if (VAR_5->next_same_hash)
       VAR_5->next_same_hash->prev_same_hash = VAR_5->prev_same_hash;

     if (VAR_5->prev_same_hash)
       VAR_5->prev_same_hash->next_same_hash = VAR_5->next_same_hash;
     else
       VAR_2[VAR_4] = VAR_5->next_same_hash;

     VAR_5->next_same_hash = VAR_2[VAR_7];
     VAR_5->prev_same_hash = 0;
     if (VAR_2[VAR_7])
       VAR_2[VAR_7]->prev_same_hash = VAR_5;
     VAR_2[VAR_7] = VAR_5;
   }
      }
}
