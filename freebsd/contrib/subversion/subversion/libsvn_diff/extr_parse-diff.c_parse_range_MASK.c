
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_linenum_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(svn_linenum_t *VAR_1, svn_linenum_t *VAR_2, char *VAR_3)
{
  char *VAR_4;

  if (*VAR_3 == 0)
    return VAR_0;

  VAR_4 = FUNC_2(VAR_3, ",");
  if (VAR_4)
    {
      if (FUNC_1(VAR_4 + 1) > 0)
        {

          if (! FUNC_0(VAR_2, VAR_4 + 1))
            return VAR_0;




          *VAR_4 = '\0';
        }
       else

         return VAR_0;
    }
  else
    {
      *VAR_2 = 1;
    }


  return FUNC_0(VAR_1, VAR_3);
}
