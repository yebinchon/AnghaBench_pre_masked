
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct elt_loc_list {scalar_t__ loc; struct elt_loc_list* next; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_6__ {scalar_t__ val_rtx; } ;
struct TYPE_7__ {struct elt_loc_list* locs; TYPE_1__ u; } ;
typedef TYPE_2__ cselib_val ;
struct TYPE_8__ {int (* commutative_p ) (scalar_t__,int ) ;} ;



 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;

 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int) ;
 TYPE_2__* FUNC_13 (scalar_t__,scalar_t__,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (scalar_t__,int ) ;
 TYPE_3__ VAR_2 ;

int
FUNC_17 (rtx VAR_3, rtx VAR_4)
{
  enum rtx_code VAR_5;
  const char *VAR_6;
  int VAR_7;

  if (FUNC_6 (VAR_3) || FUNC_5 (VAR_3))
    {
      cselib_val *VAR_8 = FUNC_13 (VAR_3, FUNC_2 (VAR_3), 0);

      if (VAR_8)
 VAR_3 = VAR_8->u.val_rtx;
    }

  if (FUNC_6 (VAR_4) || FUNC_5 (VAR_4))
    {
      cselib_val *VAR_9 = FUNC_13 (VAR_4, FUNC_2 (VAR_4), 0);

      if (VAR_9)
 VAR_4 = VAR_9->u.val_rtx;
    }

  if (VAR_3 == VAR_4)
    return 1;

  if (FUNC_1 (VAR_3) == VAR_1 && FUNC_1 (VAR_4) == VAR_1)
    return FUNC_0 (VAR_3) == FUNC_0 (VAR_4);

  if (FUNC_1 (VAR_3) == VAR_1)
    {
      cselib_val *VAR_10 = FUNC_0 (VAR_3);
      struct elt_loc_list *VAR_11;

      for (VAR_11 = VAR_10->locs; VAR_11; VAR_11 = VAR_11->next)
 {
   rtx VAR_12 = VAR_11->loc;


   if (FUNC_6 (VAR_12) || FUNC_5 (VAR_12))
     continue;
   else if (FUNC_17 (VAR_12, VAR_4))
     return 1;
 }

      return 0;
    }

  if (FUNC_1 (VAR_4) == VAR_1)
    {
      cselib_val *VAR_13 = FUNC_0 (VAR_4);
      struct elt_loc_list *VAR_14;

      for (VAR_14 = VAR_13->locs; VAR_14; VAR_14 = VAR_14->next)
 {
   rtx VAR_15 = VAR_14->loc;

   if (FUNC_6 (VAR_15) || FUNC_5 (VAR_15))
     continue;
   else if (FUNC_17 (VAR_3, VAR_15))
     return 1;
 }

      return 0;
    }

  if (FUNC_1 (VAR_3) != FUNC_1 (VAR_4) || FUNC_2 (VAR_3) != FUNC_2 (VAR_4))
    return 0;


  switch (FUNC_1 (VAR_3))
    {
    case 129:
      return 0;

    case 128:
      return FUNC_7 (VAR_3, 0) == FUNC_7 (VAR_4, 0);

    default:
      break;
    }

  VAR_5 = FUNC_1 (VAR_3);
  VAR_6 = FUNC_3 (VAR_5);

  for (VAR_7 = FUNC_4 (VAR_5) - 1; VAR_7 >= 0; VAR_7--)
    {
      int VAR_16;

      switch (VAR_6[VAR_7])
 {
 case 'w':
   if (FUNC_12 (VAR_3, VAR_7) != FUNC_12 (VAR_4, VAR_7))
     return 0;
   break;

 case 'n':
 case 'i':
   if (FUNC_8 (VAR_3, VAR_7) != FUNC_8 (VAR_4, VAR_7))
     return 0;
   break;

 case 'V':
 case 'E':

   if (FUNC_11 (VAR_3, VAR_7) != FUNC_11 (VAR_4, VAR_7))
     return 0;


   for (VAR_16 = 0; VAR_16 < FUNC_11 (VAR_3, VAR_7); VAR_16++)
     if (! FUNC_17 (FUNC_10 (VAR_3, VAR_7, VAR_16),
       FUNC_10 (VAR_4, VAR_7, VAR_16)))
       return 0;
   break;

 case 'e':
   if (VAR_7 == 1
       && VAR_2.commutative_p (VAR_3, VAR_0)
       && FUNC_17 (FUNC_7 (VAR_3, 1), FUNC_7 (VAR_4, 0))
       && FUNC_17 (FUNC_7 (VAR_3, 0), FUNC_7 (VAR_4, 1)))
     return 1;
   if (! FUNC_17 (FUNC_7 (VAR_3, VAR_7), FUNC_7 (VAR_4, VAR_7)))
     return 0;
   break;

 case 'S':
 case 's':
   if (FUNC_15 (FUNC_9 (VAR_3, VAR_7), FUNC_9 (VAR_4, VAR_7)))
     return 0;
   break;

 case 'u':

   break;

 case '0':
 case 't':
   break;




 default:
   FUNC_14 ();
 }
    }
  return 1;
}
