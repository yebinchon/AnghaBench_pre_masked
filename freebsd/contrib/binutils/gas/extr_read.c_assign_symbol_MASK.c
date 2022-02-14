
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct list_info_struct {int dummy; } ;
typedef int segT ;
struct TYPE_3__ {int * fr_symbol; struct list_info_struct* line; } ;
typedef TYPE_1__ fragS ;
typedef int expressionS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int * FUNC_10 (char*) ;
 int VAR_2 ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int * FUNC_14 (char*) ;
 int * FUNC_15 (char*) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_17 (int,int) ;

__attribute__((used)) static void
FUNC_18 (char *VAR_4, int VAR_5)
{
  symbolS *VAR_6;

  if (VAR_4[0] == '.' && VAR_4[1] == '\0')
    {

      segT VAR_7;
      expressionS VAR_8;

      VAR_7 = FUNC_9 (&VAR_8);

      if (!VAR_2)
 FUNC_8 (VAR_7, &VAR_8, 0);

      return;
    }

  if ((VAR_6 = FUNC_14 (VAR_4)) == ((void*)0)
      && (VAR_6 = FUNC_10 (VAR_4)) == ((void*)0))
    {
      VAR_6 = FUNC_15 (VAR_4);




      if (VAR_1 & VAR_0)
 {
   extern struct list_info_struct *VAR_9;
   fragS *VAR_10 = (fragS *) FUNC_17 (1, sizeof (fragS));
   VAR_10->line = VAR_9;
   VAR_10->fr_symbol = VAR_6;
   FUNC_16 (VAR_6, VAR_10);
 }





    }

  if (FUNC_2 (VAR_6) || FUNC_13 (VAR_6))
    {

      if ((VAR_5 != 0 || !FUNC_3 (VAR_6))
   && FUNC_1 (VAR_6) != VAR_3)
 {
   FUNC_7 (FUNC_6("symbol `%s' is already defined"), VAR_4);
   VAR_6 = FUNC_12 (VAR_6, 0);
 }



      else if (FUNC_3 (VAR_6))
 VAR_6 = FUNC_12 (VAR_6, 1);
    }

  if (VAR_5 == 0)
    FUNC_5 (VAR_6);
  else if (VAR_5 < 0)
    FUNC_4 (VAR_6);

  FUNC_11 (VAR_6);
}
