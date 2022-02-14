
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct likely_spilled_retval_info {unsigned int regno; unsigned int nregs; unsigned int mask; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 unsigned int FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 unsigned int** VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int ,int ,struct likely_spilled_retval_info*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_13 (rtx VAR_4)
{
  rtx VAR_5 = FUNC_0 (VAR_3);
  rtx VAR_6, VAR_7;
  unsigned VAR_8, VAR_9;



  unsigned VAR_10;
  struct likely_spilled_retval_info VAR_11;

  if (!FUNC_5 (VAR_5) || FUNC_3 (FUNC_6 (VAR_5)) != VAR_0 || VAR_4 == VAR_5)
    return 0;
  VAR_6 = FUNC_11 (FUNC_6 (VAR_5), 0);
  if (!FUNC_10 (VAR_6) || !FUNC_2 (FUNC_8 (VAR_6)))
    return 0;
  VAR_8 = FUNC_8 (VAR_6);
  VAR_9 = VAR_1[VAR_8][FUNC_4 (VAR_6)];
  if (VAR_9 == 1)
    return 0;
  VAR_10 = (2U << (VAR_9 - 1)) - 1;


  VAR_11.regno = VAR_8;
  VAR_11.nregs = VAR_9;
  VAR_11.mask = VAR_10;
  for (VAR_7 = FUNC_7 (VAR_5); VAR_11.mask && VAR_7 != VAR_4; VAR_7 = FUNC_7 (VAR_7))
    FUNC_12 (FUNC_6 (VAR_4), VAR_2, &VAR_11);
  VAR_10 = VAR_11.mask;



  VAR_9 --;
  do
    {
      if ((VAR_10 & 1 << VAR_9)
   && FUNC_1 (FUNC_9 (VAR_8 + VAR_9)))
 return 1;
    } while (VAR_9--);
  return 0;
}
