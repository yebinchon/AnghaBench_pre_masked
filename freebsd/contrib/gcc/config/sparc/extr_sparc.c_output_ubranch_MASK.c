
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;

const char *
FUNC_5 (rtx VAR_1, int VAR_2, rtx VAR_3)
{
  static char VAR_4[64];
  bool VAR_5 = 0;
  char *VAR_6;

  if (VAR_0 && FUNC_1 ())
    {
      int VAR_7 = (FUNC_0 (FUNC_2 (VAR_1))
     - FUNC_0 (FUNC_2 (VAR_3)));

      if (VAR_7 >= -260000 && VAR_7 < 260000)
 VAR_5 = 1;
    }

  if (VAR_5)
    FUNC_4 (VAR_4, "ba%*,pt\t%%xcc, ");
  else
    FUNC_4 (VAR_4, "b%*\t");

  VAR_6 = FUNC_3 (VAR_4, '\0');
  *VAR_6++ = '%';
  *VAR_6++ = 'l';
  *VAR_6++ = '0' + VAR_2;
  *VAR_6++ = '%';
  *VAR_6++ = '(';
  *VAR_6 = '\0';

  return VAR_4;
}
