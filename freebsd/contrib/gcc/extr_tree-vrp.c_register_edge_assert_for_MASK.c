
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int FUNC_13 () ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (scalar_t__,int,scalar_t__,int *,TYPE_1__*,int ) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_17 (tree VAR_8, edge VAR_9, block_stmt_iterator VAR_10)
{
  tree VAR_11, VAR_12;
  enum tree_code VAR_13;

  VAR_12 = FUNC_11 (VAR_10);



  if (FUNC_3 (VAR_8))
    return 0;



  if (!FUNC_5 (VAR_7, FUNC_4 (VAR_8)))
    return 0;




  if (FUNC_6 (VAR_12) == VAR_0)
    {



      tree VAR_14 = FUNC_0 (VAR_12);
      bool VAR_15 = (VAR_9->flags & VAR_1) != 0;


      if (VAR_14 == VAR_8)
 {



   VAR_13 = VAR_2;
   VAR_11 = (VAR_15) ? VAR_5 : VAR_6;
 }
      else
 {


   if (VAR_8 == FUNC_7 (VAR_14, 1))
     {



       VAR_13 = FUNC_16 (FUNC_6 (VAR_14));
       VAR_11 = FUNC_7 (VAR_14, 0);
     }
   else
     {


       VAR_13 = FUNC_6 (VAR_14);
       VAR_11 = FUNC_7 (VAR_14, 1);
     }



   if (VAR_15)
     VAR_13 = FUNC_14 (VAR_13, 0);





   if ((VAR_13 == VAR_3 || VAR_13 == VAR_4)
       && (FUNC_1 (FUNC_8 (VAR_11))
    || FUNC_2 (FUNC_8 (VAR_11))))
     {
       tree VAR_16 = FUNC_10 (FUNC_8 (VAR_11));
       tree VAR_17 = FUNC_9 (FUNC_8 (VAR_11));

       if (VAR_13 == VAR_3 && FUNC_12 (VAR_11, VAR_17) == 0)
  return 0;

       if (VAR_13 == VAR_4 && FUNC_12 (VAR_11, VAR_16) == 0)
  return 0;
     }
 }
    }
  else
    {

      FUNC_13 ();
    }

  FUNC_15 (VAR_8, VAR_13, VAR_11, ((void*)0), VAR_9, VAR_10);
  return 1;
}
