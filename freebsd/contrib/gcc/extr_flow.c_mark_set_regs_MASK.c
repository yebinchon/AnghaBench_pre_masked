
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct propagate_block_info {int flags; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;





 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct propagate_block_info*,int,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_11 (struct propagate_block_info *VAR_3, rtx VAR_4, rtx VAR_5)
{
  rtx VAR_6 = VAR_0;
  rtx VAR_7;
  enum rtx_code VAR_8;
  int VAR_9 = VAR_3->flags;

  if (VAR_5)
    for (VAR_7 = FUNC_3 (VAR_5); VAR_7; VAR_7 = FUNC_6 (VAR_7, 1))
      {
 if (FUNC_4 (VAR_7) == VAR_2)
   FUNC_10 (VAR_3, 128, FUNC_6 (VAR_7, 0),
        (FUNC_2 (VAR_4) == 130
         ? FUNC_1 (VAR_4) : VAR_0),
        VAR_5, VAR_9);
      }
 retry:
  switch (VAR_8 = FUNC_2 (VAR_4))
    {
    case 128:
      if (FUNC_2 (FUNC_6 (VAR_4, 1)) == 132)
 VAR_9 |= VAR_1;

    case 131:
      FUNC_10 (VAR_3, VAR_8, FUNC_5 (VAR_4), VAR_6, VAR_5, VAR_9);
      return;

    case 130:
      VAR_6 = FUNC_1 (VAR_4);
      VAR_4 = FUNC_0 (VAR_4);
      goto retry;

    case 129:
      {
 int VAR_10;



 for (VAR_10 = 0; VAR_10 < FUNC_8 (VAR_4, 0); VAR_10++)
   {
     rtx VAR_11 = FUNC_7 (VAR_4, 0, VAR_10);
     switch (VAR_8 = FUNC_2 (VAR_11))
       {
       case 130:
  FUNC_9 (!VAR_6);

  VAR_6 = FUNC_1 (VAR_11);
  VAR_11 = FUNC_0 (VAR_11);
  if (FUNC_2 (VAR_11) == 128)
    goto mark_set;
  if (FUNC_2 (VAR_11) == 131)
    goto mark_clob;
  break;

       case 128:
       mark_set:
  if (FUNC_2 (FUNC_6 (VAR_11, 1)) == 132)
    VAR_9 |= VAR_1;

       case 131:
       mark_clob:
  FUNC_10 (VAR_3, VAR_8, FUNC_5 (VAR_11), VAR_6, VAR_5, VAR_9);
  break;

       case 132:
  VAR_9 |= VAR_1;
  break;

       default:
  break;
       }
   }
 break;
      }

    default:
      break;
    }
}
