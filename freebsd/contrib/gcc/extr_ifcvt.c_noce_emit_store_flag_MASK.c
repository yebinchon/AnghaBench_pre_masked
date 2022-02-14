
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {int jump; int cond_earliest; int cond; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int ,int ,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;

__attribute__((used)) static rtx
FUNC_16 (struct noce_if_info *VAR_7, rtx VAR_8, int VAR_9,
        int VAR_10)
{
  rtx VAR_11 = VAR_7->cond;
  int VAR_12;
  enum rtx_code VAR_13;

  VAR_12 = (! FUNC_10 (FUNC_4 (VAR_11, 0), VAR_6)
    || ! FUNC_10 (FUNC_4 (VAR_11, 1), VAR_6));




  if (VAR_12)
    VAR_11 = FUNC_4 (FUNC_3 (FUNC_12 (VAR_7->jump)), 0);

  if (VAR_9)
    VAR_13 = FUNC_14 (VAR_11, VAR_7->jump);
  else
    VAR_13 = FUNC_0 (VAR_11);

  if ((VAR_7->cond_earliest == VAR_7->jump || VAR_12)
      && (VAR_10 == 0 || VAR_5 == VAR_10))
    {
      rtx VAR_14;

      VAR_14 = FUNC_9 (VAR_13, FUNC_1 (VAR_8), FUNC_4 (VAR_11, 0),
       FUNC_4 (VAR_11, 1));
      VAR_14 = FUNC_8 (VAR_6, VAR_8, VAR_14);

      FUNC_15 ();
      VAR_14 = FUNC_5 (VAR_14);

      if (FUNC_13 (VAR_14) >= 0)
 {
   VAR_14 = FUNC_11 ();
   FUNC_7 ();
   FUNC_5 (VAR_14);

   VAR_7->cond_earliest = VAR_7->jump;

   return VAR_8;
 }

      FUNC_7 ();
    }


  if (VAR_12 || !FUNC_2 (FUNC_1 (VAR_8)))
    return VAR_4;

  return FUNC_6 (VAR_8, VAR_13, FUNC_4 (VAR_11, 0),
     FUNC_4 (VAR_11, 1), VAR_6,
     (VAR_13 == VAR_3 || VAR_13 == VAR_2
      || VAR_13 == VAR_0 || VAR_13 == VAR_1), VAR_10);
}
