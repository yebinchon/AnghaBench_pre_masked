
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {struct table_elt* next_same_hash; struct table_elt* related_value; struct table_elt* prev_same_hash; struct table_elt* next_same_value; struct table_elt* first_same_value; struct table_elt* prev_same_value; } ;


 unsigned int VAR_0 ;
 struct table_elt* VAR_1 ;
 struct table_elt** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0 (struct table_elt *VAR_4, unsigned int VAR_5)
{
  if (VAR_4 == 0)
    return;


  VAR_4->first_same_value = 0;



  {
    struct table_elt *VAR_6 = VAR_4->prev_same_value;
    struct table_elt *VAR_7 = VAR_4->next_same_value;

    if (VAR_7)
      VAR_7->prev_same_value = VAR_6;

    if (VAR_6)
      VAR_6->next_same_value = VAR_7;
    else
      {
 struct table_elt *VAR_8 = VAR_7;
 while (VAR_7)
   {
     VAR_7->first_same_value = VAR_8;
     VAR_7 = VAR_7->next_same_value;
   }
      }
  }



  {
    struct table_elt *VAR_9 = VAR_4->prev_same_hash;
    struct table_elt *VAR_10 = VAR_4->next_same_hash;

    if (VAR_10)
      VAR_10->prev_same_hash = VAR_9;

    if (VAR_9)
      VAR_9->next_same_hash = VAR_10;
    else if (VAR_2[VAR_5] == VAR_4)
      VAR_2[VAR_5] = VAR_10;
    else
      {




 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_2[VAR_5] == VAR_4)
     VAR_2[VAR_5] = VAR_10;
      }
  }



  if (VAR_4->related_value != 0 && VAR_4->related_value != VAR_4)
    {
      struct table_elt *VAR_11 = VAR_4->related_value;

      while (VAR_11->related_value != VAR_4)
 VAR_11 = VAR_11->related_value;
      VAR_11->related_value = VAR_4->related_value;
      if (VAR_11->related_value == VAR_11)
 VAR_11->related_value = 0;
    }


  VAR_4->next_same_hash = VAR_1;
  VAR_1 = VAR_4;

  VAR_3--;
}
