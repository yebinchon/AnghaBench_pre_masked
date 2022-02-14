
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;

void
FUNC_5 (char *VAR_5)
{
  if (VAR_5 == ((void*)0))
    return;

  if (FUNC_0 (VAR_5, "reg-names-"))
    {
      int VAR_6;

      VAR_5 += 10;

      for (VAR_6 = VAR_0; VAR_6--;)
 if (FUNC_4 (VAR_5, VAR_3[VAR_6].name, FUNC_3 (VAR_3[VAR_6].name)))
   {
     VAR_2 = VAR_6;
     break;
   }

      if (VAR_6 < 0)

 FUNC_2 (VAR_4, FUNC_1("Unrecognised register name set: %s\n"), VAR_5);
    }
  else if (FUNC_0 (VAR_5, "force-thumb"))
    VAR_1 = 1;
  else if (FUNC_0 (VAR_5, "no-force-thumb"))
    VAR_1 = 0;
  else

    FUNC_2 (VAR_4, FUNC_1("Unrecognised disassembler option: %s\n"), VAR_5);

  return;
}
