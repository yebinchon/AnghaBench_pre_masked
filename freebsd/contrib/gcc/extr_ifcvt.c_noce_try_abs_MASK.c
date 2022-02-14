
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {scalar_t__ a; scalar_t__ b; scalar_t__ x; scalar_t__ cond_earliest; scalar_t__ cond; int insn_a; int jump; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;

 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

 int FUNC_4 (int ) ;


 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_11 (struct noce_if_info*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_14 (int ,int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (struct noce_if_info*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 () ;

__attribute__((used)) static int
FUNC_23 (struct noce_if_info *VAR_7)
{
  rtx VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  int VAR_15;


  if (VAR_6)
    return VAR_0;




  VAR_12 = VAR_7->a;
  VAR_13 = VAR_7->b;
  if (FUNC_2 (VAR_12) == VAR_1 && FUNC_20 (FUNC_9 (VAR_12, 0), VAR_13))
    VAR_15 = 0;
  else if (FUNC_2 (VAR_13) == VAR_1 && FUNC_20 (FUNC_9 (VAR_13, 0), VAR_12))
    {
      VAR_14 = VAR_12; VAR_12 = VAR_13; VAR_13 = VAR_14;
      VAR_15 = 1;
    }
  else
    return VAR_0;

  VAR_8 = FUNC_18 (VAR_7, VAR_13, &VAR_9);
  if (!VAR_8)
    return VAR_0;


  if (FUNC_20 (FUNC_9 (VAR_8, 0), VAR_13))
    VAR_14 = FUNC_9 (VAR_8, 1);
  else if (FUNC_20 (FUNC_9 (VAR_8, 1), VAR_13))
    {
      VAR_14 = FUNC_9 (VAR_8, 0);
      VAR_15 = !VAR_15;
    }
  else
    return VAR_0;



  if (FUNC_6 (VAR_14))
    {
      rtx VAR_16, VAR_17 = FUNC_19 (VAR_9);
      if (VAR_17
   && (VAR_16 = FUNC_21 (VAR_17))
   && FUNC_20 (FUNC_7 (VAR_16), VAR_14))
 {
   rtx VAR_18 = FUNC_15 (VAR_17);
   if (VAR_18)
     VAR_14 = FUNC_9 (VAR_18, 0);
   else
     VAR_14 = FUNC_8 (VAR_16);
 }
      else
 return VAR_0;
    }
  if (FUNC_5 (VAR_14)
      && FUNC_2 (FUNC_9 (VAR_14, 0)) == VAR_2
      && FUNC_1 (FUNC_9 (VAR_14, 0)))
    VAR_14 = FUNC_16 (FUNC_9 (VAR_14, 0));




  if (VAR_14 == VAR_5 && FUNC_2 (VAR_8) == 134)
    ;
  else if (VAR_14 == VAR_4 && FUNC_2 (VAR_8) == 132)
    ;
  else if (VAR_14 != FUNC_0 (FUNC_3 (VAR_13)))
    return VAR_0;


  switch (FUNC_2 (VAR_8))
    {
    case 132:
    case 133:
    case 128:
    case 129:
      VAR_15 = !VAR_15;
      break;
    case 134:
    case 135:
    case 130:
    case 131:
      break;
    default:
      return VAR_0;
    }

  FUNC_22 ();

  VAR_10 = FUNC_13 (FUNC_3 (VAR_7->x), VAR_13, VAR_7->x, 1);



  if (VAR_10 && VAR_15)
    VAR_10 = FUNC_14 (FUNC_3 (VAR_10), VAR_1, VAR_10, VAR_7->x, 0);

  if (! VAR_10)
    {
      FUNC_12 ();
      return VAR_0;
    }

  if (VAR_10 != VAR_7->x)
    FUNC_17 (VAR_7->x, VAR_10);

  VAR_11 = FUNC_11 (VAR_7);
  if (!VAR_11)
    return VAR_0;

  FUNC_10 (VAR_11, VAR_7->jump, FUNC_4 (VAR_7->insn_a));
  VAR_7->cond = VAR_8;
  VAR_7->cond_earliest = VAR_9;

  return VAR_3;
}
