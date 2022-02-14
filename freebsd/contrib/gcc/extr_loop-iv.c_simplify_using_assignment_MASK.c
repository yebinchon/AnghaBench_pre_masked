
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int regset ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__*,scalar_t__ (*) (scalar_t__*,int ),int ) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static void
FUNC_15 (rtx VAR_4, rtx *VAR_5, regset VAR_6)
{
  rtx VAR_7 = FUNC_14 (VAR_4);
  rtx VAR_8 = VAR_1, VAR_9;
  bool VAR_10 = 0;

  if (VAR_7)
    {
      VAR_8 = FUNC_3 (VAR_7);
      if (!FUNC_2 (VAR_8)
   || FUNC_8 (&VAR_8, VAR_6))
 VAR_10 = 1;
    }
  else
    VAR_10 = 1;

  FUNC_11 (FUNC_1 (VAR_4), VAR_2, VAR_6);
  if (FUNC_0 (VAR_4))
    {
      int VAR_11;


      for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
 if (FUNC_6 (VAR_3, VAR_11))
   FUNC_4 (VAR_6, VAR_11);
    }

  if (VAR_10)
    return;

  VAR_9 = FUNC_9 (VAR_4);
  if (VAR_9)
    VAR_9 = FUNC_7 (VAR_9, 0);
  else
    VAR_9 = FUNC_5 (VAR_7);

  if (!FUNC_12 (VAR_9))
    return;

  if (FUNC_10 (&VAR_9, FUNC_8, VAR_6))
    return;

  *VAR_5 = FUNC_13 (*VAR_5, VAR_8, VAR_9);
}
