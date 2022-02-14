
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct edge_list {int dummy; } ;
typedef int sbitmap ;
typedef TYPE_1__* basic_block ;
struct TYPE_6__ {size_t index; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (struct edge_list*,int) ;
 TYPE_1__* FUNC_1 (struct edge_list*,int) ;
 int FUNC_2 (struct edge_list*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (struct edge_list *VAR_2, int VAR_3,
    sbitmap *VAR_4, sbitmap *VAR_5, sbitmap *VAR_6,
    sbitmap *VAR_7, sbitmap *VAR_8)
{
  sbitmap VAR_9, VAR_10;
  int VAR_11, VAR_12;
  basic_block VAR_13, VAR_14;

  VAR_12 = FUNC_2 (VAR_2);

  VAR_9 = FUNC_4 (VAR_3);
  VAR_10 = FUNC_4 (VAR_3);

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    {
      VAR_13 = FUNC_0 (VAR_2, VAR_11);
      VAR_14 = FUNC_1 (VAR_2, VAR_11);
      if (VAR_14 == VAR_1)
 FUNC_5 (VAR_8[VAR_11], VAR_4[VAR_13->index]);
      else
 {
   if (VAR_13 == VAR_0)
     FUNC_9 (VAR_8[VAR_11]);
   else
     {
       FUNC_6 (VAR_9, VAR_4[VAR_13->index],
      VAR_6[VAR_14->index]);
       FUNC_8 (VAR_10, VAR_5[VAR_14->index]);
       FUNC_3 (VAR_8[VAR_11], VAR_9,
        VAR_7[VAR_14->index], VAR_10);
     }
 }
    }

  FUNC_7 (VAR_10);
  FUNC_7 (VAR_9);
}
