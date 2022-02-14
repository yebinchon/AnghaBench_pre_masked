
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct tree_niter_desc {int dummy; } ;
struct loop {unsigned int num_nodes; } ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_12__ {scalar_t__ has_volatile_ops; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int dest; } ;



 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;


 scalar_t__ FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct loop*,scalar_t__) ;
 int FUNC_12 (TYPE_2__**) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 TYPE_2__** FUNC_14 (struct loop*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct loop*,TYPE_1__*,struct tree_niter_desc*,int) ;
 scalar_t__ FUNC_17 (int ) ;
 TYPE_1__* FUNC_18 (struct loop*) ;
 TYPE_3__* FUNC_19 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_20 (struct loop *VAR_2)
{
  edge VAR_3;
  struct tree_niter_desc VAR_4;
  tree VAR_5, VAR_6;
  basic_block *VAR_7;
  block_stmt_iterator VAR_8;
  unsigned VAR_9;
  tree VAR_10;




  VAR_3 = FUNC_18 (VAR_2);
  if (!VAR_3)
    return 0;


  if (!FUNC_16 (VAR_2, VAR_3, &VAR_4, 0))
    return 0;


  for (VAR_5 = FUNC_17 (VAR_3->dest); VAR_5; VAR_5 = FUNC_2 (VAR_5))
    {
      if (!FUNC_15 (FUNC_3 (VAR_5)))
 continue;

      VAR_6 = FUNC_1 (VAR_5, VAR_3);

      if (!FUNC_11 (VAR_2, VAR_6))
 return 0;
    }



  VAR_7 = FUNC_14 (VAR_2);
  for (VAR_9 = 0; VAR_9 < VAR_2->num_nodes; VAR_9++)
    {

      if (VAR_7[VAR_9]->flags & VAR_0)
 {
   FUNC_12 (VAR_7);
   return 0;
 }

      for (VAR_8 = FUNC_9 (VAR_7[VAR_9]); !FUNC_7 (VAR_8); FUNC_8 (&VAR_8))
 {
   VAR_10 = FUNC_10 (VAR_8);
   if (!FUNC_6 (VAR_10, VAR_1)
       || FUNC_19 (VAR_10)->has_volatile_ops)
     {
       FUNC_12 (VAR_7);
       return 0;
     }



   switch (FUNC_4 (VAR_10))
     {
     case 128:
     case 129:
       VAR_10 = FUNC_13 (VAR_10);
       if (!VAR_10)
  break;

     case 130:
       if (FUNC_5 (VAR_10))
  {
    FUNC_12 (VAR_7);
    return 0;
  }
       break;

     case 131:

       if (FUNC_0 (VAR_10))
  {
    FUNC_12 (VAR_7);
    return 0;
  }
       break;

     default:
       break;
     }
 }
      }
  FUNC_12 (VAR_7);

  return 1;
}
