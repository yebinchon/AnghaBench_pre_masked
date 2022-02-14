
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_2__ {int warn_invalid_pch; int preprocessed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int,char const*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,int,int) ;

void
FUNC_8 (cpp_reader *VAR_2, const char *VAR_3)
{
  int VAR_4;

  if (!FUNC_3 (VAR_2)->preprocessed)
    {
      FUNC_4 ("pch_preprocess pragma should only be used with -fpreprocessed");
      FUNC_6 ("use #include instead");
      return;
    }

  VAR_4 = FUNC_7 (VAR_3, VAR_1 | VAR_0, 0666);
  if (VAR_4 == -1)
    FUNC_5 ("%s: couldn%'t open PCH file: %m", VAR_3);

  if (FUNC_1 (VAR_2, VAR_3, VAR_4) != 1)
    {
      if (!FUNC_3 (VAR_2)->warn_invalid_pch)
 FUNC_6 ("use -Winvalid-pch for more information");
      FUNC_5 ("%s: PCH file was invalid", VAR_3);
    }

  FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_3);

  FUNC_2 (VAR_4);
}
