
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_3__ {scalar_t__ (* return_in_memory ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;




 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int const VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int const FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 size_t FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,scalar_t__,int ) ;
 int** VAR_6 ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_7 ;

int
FUNC_14 (tree VAR_8, tree VAR_9)
{
  int VAR_10, VAR_11, VAR_12;
  rtx VAR_13;

  tree VAR_14 = (FUNC_9 (VAR_8)) ? VAR_8 : FUNC_7 (VAR_8);




  tree VAR_15 = VAR_0;

  if (VAR_9)
    switch (FUNC_6 (VAR_9))
      {
      case 132:
 VAR_15 = FUNC_11 (VAR_9);
 VAR_9 = VAR_15 ? FUNC_7 (VAR_15) : 0;
 break;
      case 131:
 VAR_15 = VAR_9;
 VAR_9 = FUNC_7 (VAR_15);
 break;
      case 130:
      case 128:
        break;
      case 129:
 VAR_9 = 0;
 break;
      default:

 FUNC_10 ();
      }

  if (FUNC_6 (VAR_14) == VAR_3)
    return 0;



  if ((FUNC_6 (VAR_8) == VAR_1 || FUNC_6 (VAR_8) == VAR_2)
      && FUNC_1 (VAR_8))
    return 1;







  if (FUNC_6 (VAR_8) == 132 && VAR_15 && FUNC_2 (VAR_15)
      && FUNC_1 (FUNC_2 (VAR_15)))
    return 1;

  if (VAR_7.calls.return_in_memory (VAR_14, VAR_9))
    return 1;


  if (FUNC_5 (VAR_14))
    return 1;
  if (VAR_5 && FUNC_0 (VAR_14))
    return 1;


  VAR_13 = FUNC_12 (VAR_14, 0, VAR_9, 0);



  if (!FUNC_4 (VAR_13))
    return 0;

  VAR_11 = FUNC_3 (VAR_13);
  VAR_12 = VAR_6[VAR_11][FUNC_8 (VAR_14)];
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
    if (! VAR_4[VAR_11 + VAR_10])
      return 1;
  return 0;
}
