
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ignore_main_file; int style; } ;
struct TYPE_4__ {TYPE_1__ deps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  char *VAR_7;

  FUNC_0 (VAR_7, "DEPENDENCIES_OUTPUT");
  if (VAR_7)
    VAR_3->deps.style = VAR_1;
  else
    {
      FUNC_0 (VAR_7, "SUNPRO_DEPENDENCIES");
      if (VAR_7)
 {
   VAR_3->deps.style = VAR_0;
   VAR_3->deps.ignore_main_file = 1;
 }
    }

  if (VAR_7)
    {

      char *VAR_8 = FUNC_2 (VAR_7, ' ');
      if (VAR_8)
 {

   FUNC_1 (VAR_2, VAR_8 + 1);
   *VAR_8 = '\0';
 }


      if (!VAR_5)
 VAR_5 = VAR_7;

      VAR_4 = 1;
      VAR_6 = 1;
    }
}
