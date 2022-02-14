
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* tpa_p ;
struct TYPE_8__ {int map; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;

void
FUNC_9 (FILE *VAR_2, tpa_p VAR_3)
{
  int VAR_4, VAR_5;

  if (!VAR_3)
    return;

  for (VAR_4 = 0; VAR_4 < FUNC_7 (VAR_3); VAR_4++)
    {
      FUNC_3 (VAR_2, FUNC_8 (VAR_3, VAR_4), VAR_0);
      FUNC_1 (VAR_2, " : (");
      for (VAR_5 = FUNC_5 (VAR_3, VAR_4);
    VAR_5 != VAR_1;
    VAR_5 = FUNC_6 (VAR_3, VAR_5))
 {
   FUNC_1 (VAR_2, "(%d)",VAR_5);
   FUNC_3 (VAR_2, FUNC_2 (VAR_3->map, VAR_5), VAR_0);
   FUNC_1 (VAR_2, " ");






 }
      FUNC_1 (VAR_2, ")\n");
    }
  FUNC_0 (VAR_2);
}
