
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
 int FUNC_0 (struct change*,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_1 () ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char,TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_5 (struct change *VAR_4)
{
  lin VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;


  enum changes VAR_10 = FUNC_0 (VAR_4, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
  if (!VAR_10)
    return;

  FUNC_1 ();

  FUNC_2 (VAR_3, "%c", VAR_1[VAR_10]);
  FUNC_4 (' ', VAR_2, VAR_6, VAR_7);
  FUNC_2 (VAR_3, "\n");



  if (VAR_10 == VAR_0)
    return;




  for (VAR_5 = VAR_8; VAR_5 <= VAR_9; VAR_5++)
    FUNC_3 ("", &VAR_2[1].linbuf[VAR_5]);

  FUNC_2 (VAR_3, ".\n");
}
