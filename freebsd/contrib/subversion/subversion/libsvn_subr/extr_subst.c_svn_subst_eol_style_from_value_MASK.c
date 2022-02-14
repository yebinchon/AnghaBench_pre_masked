
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_subst_eol_style_t ;


 char* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(svn_subst_eol_style_t *VAR_5,
                               const char **VAR_6,
                               const char *VAR_7)
{
  if (VAR_7 == ((void*)0))
    {

      *VAR_6 = ((void*)0);
      if (VAR_5)
        *VAR_5 = VAR_3;
    }
  else if (! FUNC_0("native", VAR_7))
    {
      *VAR_6 = VAR_0;
      if (VAR_5)
        *VAR_5 = VAR_2;
    }
  else if (! FUNC_0("LF", VAR_7))
    {
      *VAR_6 = "\n";
      if (VAR_5)
        *VAR_5 = VAR_1;
    }
  else if (! FUNC_0("CR", VAR_7))
    {
      *VAR_6 = "\r";
      if (VAR_5)
        *VAR_5 = VAR_1;
    }
  else if (! FUNC_0("CRLF", VAR_7))
    {
      *VAR_6 = "\r\n";
      if (VAR_5)
        *VAR_5 = VAR_1;
    }
  else
    {
      *VAR_6 = ((void*)0);
      if (VAR_5)
        *VAR_5 = VAR_4;
    }
}
