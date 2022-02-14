
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char const*,int ,int *,int ) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_5 (const char *VAR_3, const char *VAR_4)
{
  int VAR_5;
  regex_t VAR_6;

  if (FUNC_2 (&VAR_6, "^([1-9][0-9]*|0)(\\.([1-9][0-9]*|0))*$",
        VAR_0 | VAR_2) != 0)
    FUNC_0 ();
  VAR_5 = FUNC_3 (&VAR_6, VAR_3, 0, ((void*)0), 0);
  if (VAR_5 == VAR_1)
    FUNC_1 ("invalid version number `%s'", VAR_3);
  else if (VAR_5 != 0)
    FUNC_0 ();
  VAR_5 = FUNC_3 (&VAR_6, VAR_4, 0, ((void*)0), 0);
  if (VAR_5 == VAR_1)
    FUNC_1 ("invalid version number `%s'", VAR_4);
  else if (VAR_5 != 0)
    FUNC_0 ();

  return FUNC_4 (VAR_3, VAR_4);
}
