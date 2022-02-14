
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {char* (* strip_name_encoding ) (char const*) ;} ;
typedef int FILE ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_7 (scalar_t__*) ;

void
FUNC_8 (FILE *VAR_1, const char *VAR_2)
{
  const char *VAR_3;
  tree VAR_4;

  VAR_3 = VAR_0.strip_name_encoding (VAR_2);

  VAR_4 = FUNC_5 (VAR_3);
  if (VAR_4)
    {
      tree VAR_5 = VAR_4;

      FUNC_4 (VAR_4);
      FUNC_7 (&VAR_4);
      if (VAR_4 != VAR_5)
 VAR_2 = FUNC_0 (VAR_4);
      FUNC_3 (! FUNC_1 (VAR_4));
    }

  FUNC_2 (VAR_1, VAR_2);
}
