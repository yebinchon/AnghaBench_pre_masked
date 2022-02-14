
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct change {int dummy; } ;
typedef size_t lin ;
typedef enum changes { ____Placeholder_changes } changes ;
struct TYPE_3__ {char** linbuf; } ;


 int VAR_0 ;
 int FUNC_0 (struct change*,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_1 () ;
 int* VAR_1 ;
 int FUNC_2 (struct change*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (char,TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_6 (struct change *VAR_4)
{
  lin VAR_5, VAR_6, VAR_7, VAR_8;
  enum changes VAR_9;






  VAR_9 = FUNC_0 (VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
  if (!VAR_9)
    return;

  FUNC_1 ();


  FUNC_5 (',', &VAR_2[0], VAR_5, VAR_6);
  FUNC_3 (VAR_3, "%c\n", VAR_1[VAR_9]);


  if (VAR_9 != VAR_0)
    {
      lin VAR_10;
      for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++)
 {
   if (VAR_2[1].linbuf[VAR_10][0] == '.' && VAR_2[1].linbuf[VAR_10][1] == '\n')
     {




       FUNC_3 (VAR_3, "..\n.\ns/.//\na\n");
     }
   else
     FUNC_4 ("", &VAR_2[1].linbuf[VAR_10]);
 }

      FUNC_3 (VAR_3, ".\n");
    }
}
