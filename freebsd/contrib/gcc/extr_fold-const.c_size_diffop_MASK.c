
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

tree
FUNC_10 (tree VAR_6, tree VAR_7)
{
  tree VAR_8 = FUNC_1 (VAR_6);
  tree VAR_9;

  FUNC_6 (FUNC_0 (VAR_8) == VAR_1 && FUNC_2 (VAR_8)
       && VAR_8 == FUNC_1 (VAR_7));


  if (!FUNC_3 (VAR_8))
    return FUNC_7 (VAR_2, VAR_6, VAR_7);

  VAR_9 = VAR_8 == VAR_3 ? VAR_4 : VAR_5;




  if (FUNC_0 (VAR_6) != VAR_0 || FUNC_0 (VAR_7) != VAR_0)
    return FUNC_7 (VAR_2, FUNC_5 (VAR_9, VAR_6),
         FUNC_5 (VAR_9, VAR_7));





  if (FUNC_8 (VAR_6, VAR_7))
    return FUNC_4 (VAR_9, 0);
  else if (FUNC_9 (VAR_7, VAR_6))
    return FUNC_5 (VAR_9, FUNC_7 (VAR_2, VAR_6, VAR_7));
  else
    return FUNC_7 (VAR_2, FUNC_4 (VAR_9, 0),
         FUNC_5 (VAR_9, FUNC_7 (VAR_2,
       VAR_7, VAR_6)));
}
