
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 char FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7 (int VAR_7)
{

  int VAR_8 = 0;

  FUNC_0 ();
  if (!VAR_4[(unsigned char) *VAR_2])
    {
      char *VAR_9 = VAR_2;
      int VAR_10 = FUNC_5 ();

      if (FUNC_6 (VAR_9, "prefix") == 0)
 VAR_8 = 1;
      else if (FUNC_6 (VAR_9, "noprefix") == 0)
 VAR_8 = -1;
      else
 FUNC_2 (FUNC_1("bad argument to syntax directive."));
      *VAR_2 = VAR_10;
    }
  FUNC_4 ();

  VAR_3 = VAR_7;

  if (VAR_8 == 0)
    VAR_0 = (VAR_3
         && (FUNC_3 (VAR_6) != '\0'));
  else
    VAR_0 = (VAR_8 < 0);

  VAR_1['%'] = VAR_3 && VAR_0 ? '%' : 0;
  VAR_1['$'] = VAR_3 ? '$' : 0;
  VAR_5 = VAR_0 ? "" : "%";
}
