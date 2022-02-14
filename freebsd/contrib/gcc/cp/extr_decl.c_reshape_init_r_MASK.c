
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
struct TYPE_9__ {TYPE_1__* cur; } ;
typedef TYPE_2__ reshape_iter ;
struct TYPE_10__ {int value; } ;
struct TYPE_8__ {int value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 TYPE_7__* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_6 ;
 int FUNC_13 (char*,int ) ;
 int VAR_7 ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,TYPE_2__*) ;
 int FUNC_18 (int ,TYPE_2__*,int) ;
 int FUNC_19 (int ,TYPE_2__*) ;
 int FUNC_20 (int ,char*,int ) ;

__attribute__((used)) static tree
FUNC_21 (tree VAR_8, reshape_iter *VAR_9, bool VAR_10)
{
  tree VAR_11 = VAR_9->cur->value;



  if (!FUNC_4 (VAR_8))
    {





      if (FUNC_5 (VAR_11) == VAR_1
   && FUNC_0 (VAR_11))
 {
   FUNC_13 ("braces around scalar initializer for type %qT", VAR_8);
   VAR_11 = VAR_7;
 }

      VAR_9->cur++;
      return VAR_11;
    }
  if (FUNC_5 (VAR_11) != VAR_1
      && FUNC_11 (VAR_8, FUNC_6 (VAR_11), VAR_11, VAR_2))
    {
      VAR_9->cur++;
      return VAR_11;
    }







  if (FUNC_5 (VAR_8) == VAR_0
      && FUNC_12 (FUNC_7 (FUNC_6 (VAR_8))))
    {
      tree VAR_12 = VAR_11;



      if (!VAR_10
   && FUNC_5 (VAR_12) == VAR_1
   && FUNC_10 (VAR_6, FUNC_3 (VAR_12)) == 1)
 {
   VAR_12 = FUNC_9 (VAR_6,
    FUNC_3 (VAR_12), 0)->value;
 }




      if (FUNC_5 (VAR_12) == VAR_4)
 {
   VAR_9->cur++;
   return VAR_12;
 }
    }





  if (!VAR_10)
    {
      if (FUNC_5 (VAR_11) == VAR_1)
 {
   if (FUNC_6 (VAR_11) && FUNC_8 (FUNC_6 (VAR_11)))



           ;
   else if (FUNC_2 (VAR_11))





     FUNC_14 (!FUNC_0 (VAR_11));
   else
     {
       ++VAR_9->cur;
       FUNC_14 (FUNC_0 (VAR_11));
       return FUNC_16 (VAR_8, VAR_11);
     }
 }

      FUNC_20 (VAR_3, "missing braces around initializer for %qT",
        VAR_8);
    }


  if (FUNC_1 (VAR_8))
    return FUNC_18 (VAR_8, VAR_9, VAR_10);
  else if (FUNC_5 (VAR_8) == VAR_0)
    return FUNC_17 (VAR_8, VAR_9);
  else if (FUNC_5 (VAR_8) == VAR_5)
    return FUNC_19 (VAR_8, VAR_9);
  else
    FUNC_15();
}
