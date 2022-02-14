
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int flags; int type; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,char*) ;





 int FUNC_2 (char*) ;
 int FUNC_3 (int ,...) ;
 char** FUNC_4 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (char const**) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;

int
FUNC_10 (int VAR_10, char *VAR_11)
{
  unsigned int VAR_12;

  switch (VAR_10)
    {
    case 'n':
      VAR_8 = 0;
      break;

    case 'q':
      VAR_9 = 1;
      break;
    case 132:
      VAR_6 = "i386";
      break;

    case 130:
      break;

    case 129:
      if (*VAR_11 == '.')
 FUNC_3 (FUNC_2("Invalid -march= option: `%s'"), VAR_11);
      for (VAR_12 = 0; VAR_12 < FUNC_0 (VAR_0); VAR_12++)
 {
   if (FUNC_7 (VAR_11, VAR_0 [VAR_12].name) == 0)
     {
       VAR_1 = VAR_0[VAR_12].type;
       VAR_2 = VAR_0[VAR_12].flags;
       if (!VAR_5)
  {
    VAR_3 = VAR_1;
    VAR_4 = VAR_2;
  }
       break;
     }
 }
      if (VAR_12 >= FUNC_0 (VAR_0))
 FUNC_3 (FUNC_2("Invalid -march= option: `%s'"), VAR_11);
      break;

    case 128:
      if (*VAR_11 == '.')
 FUNC_3 (FUNC_2("Invalid -mtune= option: `%s'"), VAR_11);
      for (VAR_12 = 0; VAR_12 < FUNC_0 (VAR_0); VAR_12++)
 {
   if (FUNC_7 (VAR_11, VAR_0 [VAR_12].name) == 0)
     {
       VAR_5 = 1;
       VAR_3 = VAR_0 [VAR_12].type;
       VAR_4 = VAR_0[VAR_12].flags;
       break;
     }
 }
      if (VAR_12 >= FUNC_0 (VAR_0))
 FUNC_3 (FUNC_2("Invalid -mtune= option: `%s'"), VAR_11);
      break;

    default:
      return 0;
    }
  return 1;
}
