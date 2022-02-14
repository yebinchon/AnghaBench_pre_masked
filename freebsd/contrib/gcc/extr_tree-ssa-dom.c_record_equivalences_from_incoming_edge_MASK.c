
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct edge_info {unsigned int max_cond_equivalences; scalar_t__* cond_equivalences; scalar_t__ rhs; scalar_t__ lhs; } ;
typedef TYPE_1__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_3__ {scalar_t__ src; scalar_t__ aux; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (basic_block VAR_1)
{
  edge VAR_2;
  basic_block VAR_3;
  struct edge_info *VAR_4;




  VAR_3 = FUNC_0 (VAR_0, VAR_1);

  VAR_2 = FUNC_3 (VAR_1);



  if (VAR_2 && VAR_2->src == VAR_3)
    {
      unsigned int VAR_5;

      VAR_4 = (struct edge_info *) VAR_2->aux;

      if (VAR_4)
 {
   tree VAR_6 = VAR_4->lhs;
   tree VAR_7 = VAR_4->rhs;
   tree *VAR_8 = VAR_4->cond_equivalences;

   if (VAR_6)
     FUNC_2 (VAR_6, VAR_7);

   if (VAR_8)
     {
       for (VAR_5 = 0; VAR_5 < VAR_4->max_cond_equivalences; VAR_5 += 2)
  {
    tree VAR_9 = VAR_8[VAR_5];
    tree VAR_10 = VAR_8[VAR_5 + 1];

    FUNC_1 (VAR_9, VAR_10);
  }
     }
 }
    }
}
