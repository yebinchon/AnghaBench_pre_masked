
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {scalar_t__ unlikely_text_section_name; } ;
struct TYPE_3__ {char* (* strip_name_encoding ) (char*) ;} ;


 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 char* FUNC_8 (char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  const char *VAR_5;
  char *VAR_6, *VAR_7;
  tree VAR_8;

  FUNC_5 (VAR_1 && VAR_2);
  if (VAR_1->unlikely_text_section_name)
    return;

  VAR_8 = FUNC_1 (VAR_2);
  if (VAR_3 && VAR_8)
    {
      VAR_6 = FUNC_4 (FUNC_2 (VAR_8) + 1);
      FUNC_7 (VAR_6, FUNC_3 (VAR_8), FUNC_2 (VAR_8) + 1);

      VAR_5 = VAR_4.strip_name_encoding (VAR_6);

      VAR_7 = FUNC_0 ((VAR_5, "_unlikely", ((void*)0)));
      VAR_1->unlikely_text_section_name = FUNC_6 (VAR_7);
    }
  else
    VAR_1->unlikely_text_section_name = VAR_0;
}
