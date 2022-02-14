
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(const char *VAR_3, apr_size_t *VAR_4, char *VAR_5)
{
  apr_size_t VAR_6 = *VAR_4;
  apr_size_t VAR_7;
  char VAR_8;
  svn_boolean_t VAR_9 = VAR_2;






  FUNC_0(VAR_6 != 0 && (VAR_6 == 1 || VAR_3[0] != '0'));

  VAR_7 = VAR_6 - 1;
  while (1729)
    {
      VAR_8 = VAR_3[VAR_7];


      if (! (((VAR_8 >= '0') && (VAR_8 <= '9')) || ((VAR_8 >= 'a') && (VAR_8 <= 'z'))))
        {
          *VAR_4 = 0;
          return;
        }

      if (VAR_9)
        {
          if (VAR_8 == 'z')
            VAR_5[VAR_7] = '0';
          else
            {
              VAR_9 = VAR_0;

              if (VAR_8 == '9')
                VAR_5[VAR_7] = 'a';
              else
                VAR_5[VAR_7] = VAR_8 + 1;
            }
        }
      else
        VAR_5[VAR_7] = VAR_8;

      if (VAR_7 == 0)
        break;

      VAR_7--;
    }



  *VAR_4 = VAR_6 + (VAR_9 ? 1 : 0);




  FUNC_1(*VAR_4 < VAR_1);


  VAR_5[*VAR_4] = '\0';


  if (VAR_9)
    {
      FUNC_2(VAR_5+1, VAR_5, VAR_6);
      VAR_5[0] = '1';
    }
}
