
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_5 (scalar_t__) ;

void
FUNC_6 (void)
{
  FUNC_1 ();
  if (VAR_1[(unsigned char) *VAR_0])
    VAR_0++;
  else
    {
      if (FUNC_0 (*VAR_0))
 FUNC_3 (FUNC_2("junk at end of line, first unrecognized character is `%c'"),
   *VAR_0);
      else
 FUNC_3 (FUNC_2("junk at end of line, first unrecognized character valued 0x%x"),
   *VAR_0);
      FUNC_4 ();
    }


  FUNC_5 (VAR_1[(unsigned char) VAR_0[-1]]);
}
