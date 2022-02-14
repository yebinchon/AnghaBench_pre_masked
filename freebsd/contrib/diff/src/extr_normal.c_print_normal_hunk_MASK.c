
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct change {int dummy; } ;
typedef size_t lin ;
typedef enum changes { ____Placeholder_changes } changes ;
struct TYPE_3__ {int * linbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct change*,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_1 () ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char,TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_5 (struct change *VAR_6)
{
  lin VAR_7, VAR_8, VAR_9, VAR_10;
  register lin VAR_11;


  enum changes VAR_12 = FUNC_0 (VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
  if (!VAR_12)
    return;

  FUNC_1 ();


  FUNC_4 (',', &VAR_4[0], VAR_7, VAR_8);
  FUNC_2 (VAR_5, "%c", VAR_3[VAR_12]);
  FUNC_4 (',', &VAR_4[1], VAR_9, VAR_10);
  FUNC_2 (VAR_5, "\n");


  if (VAR_12 & VAR_2)
    for (VAR_11 = VAR_7; VAR_11 <= VAR_8; VAR_11++)
      FUNC_3 ("<", &VAR_4[0].linbuf[VAR_11]);

  if (VAR_12 == VAR_0)
    FUNC_2 (VAR_5, "---\n");


  if (VAR_12 & VAR_1)
    for (VAR_11 = VAR_9; VAR_11 <= VAR_10; VAR_11++)
      FUNC_3 (">", &VAR_4[1].linbuf[VAR_11]);
}
