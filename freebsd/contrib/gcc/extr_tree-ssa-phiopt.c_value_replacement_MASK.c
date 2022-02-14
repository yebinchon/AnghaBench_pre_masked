
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_8__ {scalar_t__ dest; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,TYPE_1__**,TYPE_1__**) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_11 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_12 (basic_block VAR_2, basic_block VAR_3,
     edge VAR_4, edge VAR_5, tree VAR_6,
     tree VAR_7, tree VAR_8)
{
  tree VAR_9;
  edge VAR_10, VAR_11;



  if (FUNC_1 (FUNC_5 (FUNC_4 (VAR_8))))
    return 0;

  if (!FUNC_6 (VAR_3))
    return 0;

  VAR_9 = FUNC_0 (FUNC_8 (VAR_2));


  if (FUNC_2 (VAR_9) != VAR_1 && FUNC_2 (VAR_9) != VAR_0)
    return 0;



  FUNC_7 (VAR_2, &VAR_10, &VAR_11);
  if ((FUNC_9 (VAR_7, FUNC_3 (VAR_9, 0))
       && FUNC_9 (VAR_8, FUNC_3 (VAR_9, 1)))
      || (FUNC_9 (VAR_8, FUNC_3 (VAR_9, 0))
   && FUNC_9 (VAR_7, FUNC_3 (VAR_9, 1))))
    {
      edge VAR_12;
      tree VAR_13;




      VAR_12 = (FUNC_2 (VAR_9) == VAR_1 ? VAR_10 : VAR_11);





      if (VAR_12->dest == VAR_3)
 VAR_12 = FUNC_11 (VAR_12->dest);



      if (VAR_4 == VAR_12)
 VAR_13 = VAR_7;
      else
 VAR_13 = VAR_8;

      FUNC_10 (VAR_2, VAR_5, VAR_6, VAR_13);


      return 1;
    }
  return 0;
}
