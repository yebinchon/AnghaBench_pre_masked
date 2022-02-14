
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int num; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef TYPE_1__* edge ;
struct TYPE_3__ {int flags; int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;





 unsigned int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,char*,int,unsigned int) ;
 scalar_t__ FUNC_9 (struct loop*,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct loop*) ;
 int FUNC_15 (struct loop*) ;
 int VAR_10 ;
 scalar_t__ FUNC_16 (scalar_t__) ;

tree
FUNC_17 (struct loop *VAR_11, edge VAR_12)
{
  tree VAR_13, VAR_14, VAR_15;
  tree VAR_16[2], VAR_17[2], VAR_18[2], VAR_19[2], VAR_20[2];
  unsigned VAR_21, VAR_22;
  enum tree_code VAR_23;

  VAR_13 = FUNC_13 (VAR_12->src);
  if (!VAR_13 || FUNC_2 (VAR_13) != VAR_0)
    return VAR_7;

  VAR_14 = FUNC_0 (VAR_13);
  if (VAR_12->flags & VAR_1)
    VAR_14 = FUNC_11 (VAR_14);

  VAR_23 = FUNC_2 (VAR_14);
  switch (VAR_23)
    {
    case 133:
    case 128:
    case 131:
    case 132:
    case 129:
    case 130:
      for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
 VAR_16[VAR_22] = FUNC_3 (VAR_14, VAR_22);
      break;

    default:
      return VAR_7;
    }

  for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
    {
      VAR_20[VAR_22] = FUNC_9 (VAR_11, VAR_16[VAR_22]);
      if (!VAR_20[VAR_22])
 return VAR_7;
    }

  for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
    {
      if (FUNC_2 (VAR_20[VAR_22]) == VAR_4)
 {
   VAR_17[VAR_22] = FUNC_1 (VAR_20[VAR_22], FUNC_15 (VAR_11));
   VAR_18[VAR_22] = FUNC_1 (VAR_20[VAR_22], FUNC_14 (VAR_11));
 }
      else
 {
   VAR_17[VAR_22] = VAR_20[VAR_22];
   VAR_18[VAR_22] = VAR_3;
   VAR_16[VAR_22] = VAR_3;
 }
    }


  FUNC_6 ();

  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
    {
      for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
 VAR_19[VAR_22] = FUNC_10 (VAR_16[VAR_22], VAR_17[VAR_22]);

      VAR_15 = FUNC_5 (VAR_23, VAR_6, VAR_19[0], VAR_19[1]);
      if (VAR_15 && FUNC_16 (VAR_15))
 {
   FUNC_7 ();
   if (VAR_8 && (VAR_9 & VAR_5))
     FUNC_8 (VAR_8,
       "Proved that loop %d iterates %d times using brute force.\n",
       VAR_11->num, VAR_21);
   return FUNC_4 (VAR_10, VAR_21);
 }

      for (VAR_22 = 0; VAR_22 < 2; VAR_22++)
 {
   VAR_17[VAR_22] = FUNC_10 (VAR_18[VAR_22], VAR_17[VAR_22]);
   if (!FUNC_12 (VAR_17[VAR_22]))
     {
       FUNC_7 ();
       return VAR_7;
     }
 }
    }

  FUNC_7 ();

  return VAR_7;
}
