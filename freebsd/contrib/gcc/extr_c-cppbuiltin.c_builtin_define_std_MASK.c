
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*,size_t) ;
 int VAR_1 ;
 size_t FUNC_4 (char const*) ;

void
FUNC_5 (const char *VAR_2)
{
  size_t VAR_3 = FUNC_4 (VAR_2);
  char *VAR_4 = (char *) FUNC_1 (VAR_3 + 5);
  char *VAR_5 = VAR_4 + 2;
  char *VAR_6 = VAR_5 + VAR_3;


  FUNC_3 (VAR_5, VAR_2, VAR_3 + 1);
  if (!( *VAR_5 == '_' && (VAR_5[1] == '_' || FUNC_0 (VAR_5[1]))))
    {
      if (*VAR_5 != '_')
 *--VAR_5 = '_';
      if (VAR_5[1] != '_')
 *--VAR_5 = '_';
    }
  FUNC_2 (VAR_1, VAR_5);


  if (VAR_5 != VAR_4 + 2)
    {

      if (VAR_6[-1] != '_')
 *VAR_6++ = '_';
      if (VAR_6[-2] != '_')
 *VAR_6++ = '_';
      *VAR_6 = '\0';
      FUNC_2 (VAR_1, VAR_5);


      if (!VAR_0)
 FUNC_2 (VAR_1, VAR_2);
    }
}
