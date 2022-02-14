
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct addr_const {int offset; int base; } ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int ) ;

 int VAR_3 ;


 int FUNC_1 (int ) ;
 int VAR_4 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static void
FUNC_17 (tree VAR_5, struct addr_const *VAR_6)
{
  tree VAR_7 = FUNC_3 (VAR_5, 0);
  int VAR_8 = 0;
  rtx VAR_9;

  while (1)
    {
      if (FUNC_2 (VAR_7) == VAR_2
   && FUNC_13 (FUNC_7 (FUNC_3 (VAR_7, 1)), 0))

 {
   VAR_8 += FUNC_14 (FUNC_3 (VAR_7, 1));
   VAR_7 = FUNC_3 (VAR_7, 0);
 }
      else if (FUNC_2 (VAR_7) == VAR_1
        || FUNC_2 (VAR_7) == VAR_0)
 {
   VAR_8 += (FUNC_16 (FUNC_5 (FUNC_4 (VAR_7)), 1)
       * FUNC_16 (FUNC_3 (VAR_7, 1), 0));
   VAR_7 = FUNC_3 (VAR_7, 0);
 }
      else
 break;
    }

  switch (FUNC_2 (VAR_7))
    {
    case 128:
    case 133:
      VAR_9 = FUNC_0 (VAR_7);
      break;

    case 131:
      VAR_9 = FUNC_12 (VAR_3,
         FUNC_11 (VAR_4, FUNC_8 (VAR_7)));
      break;

    case 130:
    case 129:
    case 135:
    case 134:
    case 132:
      VAR_9 = FUNC_15 (VAR_7, 1);
      break;

    default:
      FUNC_10 ();
    }

  FUNC_9 (FUNC_1 (VAR_9));
  VAR_9 = FUNC_6 (VAR_9, 0);

  VAR_6->base = VAR_9;
  VAR_6->offset = VAR_8;
}
