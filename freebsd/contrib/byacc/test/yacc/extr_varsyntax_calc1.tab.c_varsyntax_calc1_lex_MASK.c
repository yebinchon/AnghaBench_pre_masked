
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ival; int dval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int,int ) ;
 TYPE_1__ VAR_5 ;

int
FUNC_7(void)
{
    int VAR_6;

    while ((VAR_6 = FUNC_1()) == ' ')
    {
    }

    if (FUNC_4(VAR_6))
    {
 VAR_5.ival = VAR_6 - 'A';
 return (VAR_3);
    }
    if (FUNC_3(VAR_6))
    {
 VAR_5.ival = VAR_6 - 'a';
 return (VAR_2);
    }

    if (FUNC_2(VAR_6) || VAR_6 == '.')
    {

 char VAR_7[VAR_0 + 1], *VAR_8 = VAR_7;
 int VAR_9 = 0, VAR_10 = 0;

 for (; (VAR_8 - VAR_7) < VAR_0; ++VAR_8, VAR_6 = FUNC_1())
 {

     *VAR_8 = (char) VAR_6;
     if (FUNC_2(VAR_6))
  continue;
     if (VAR_6 == '.')
     {
  if (VAR_9++ || VAR_10)
      return ('.');
  continue;
     }

     if (VAR_6 == 'e')
     {
  if (VAR_10++)
      return ('e');
  continue;
     }


     break;
 }
 *VAR_8 = '\0';

 if ((VAR_8 - VAR_7) >= VAR_0)
     FUNC_5("constant  too  long:  truncated\n");
 else
     FUNC_6(VAR_6, VAR_4);
 VAR_5.dval = FUNC_0(VAR_7);
 return (VAR_1);
    }
    return (VAR_6);
}
