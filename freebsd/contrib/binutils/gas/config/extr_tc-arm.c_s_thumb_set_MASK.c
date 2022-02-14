
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int symbolS ;
struct list_info_struct {int dummy; } ;
struct TYPE_6__ {int * fr_symbol; struct list_info_struct* line; int fr_type; } ;
typedef TYPE_1__ fragS ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 () ;
 char FUNC_11 () ;
 int FUNC_12 () ;
 char* VAR_1 ;
 int VAR_2 ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (TYPE_1__*,int ,int) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_16 (char*) ;
 int * FUNC_17 (char*,int ,int ,TYPE_1__*) ;
 int FUNC_18 (int *) ;
 int VAR_6 ;
 TYPE_1__* FUNC_19 (int) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void
FUNC_20 (int VAR_8)
{



  char * VAR_9;
  char VAR_10;
  char * VAR_11;
  symbolS * VAR_12;




  VAR_9 = VAR_1;
  VAR_10 = FUNC_11 ();
  VAR_11 = VAR_1;
  *VAR_11 = VAR_10;

  if (*VAR_1 != ',')
    {
      *VAR_11 = 0;
      FUNC_9 (FUNC_7("expected comma after name \"%s\""), VAR_9);
      *VAR_11 = VAR_10;
      FUNC_12 ();
      return;
    }

  VAR_1++;
  *VAR_11 = 0;

  if (VAR_9[0] == '.' && VAR_9[1] == '\0')
    {

      FUNC_8 ();
    }

  if ((VAR_12 = FUNC_16 (VAR_9)) == ((void*)0)
      && (VAR_12 = FUNC_13 (VAR_9)) == ((void*)0))
    {




      if (VAR_2 & VAR_0)
 {
   extern struct list_info_struct * VAR_13;
   fragS * VAR_14 = FUNC_19 (sizeof (fragS));

   FUNC_14 (VAR_14, 0, sizeof (fragS));
   VAR_14->fr_type = VAR_4;
   VAR_14->line = VAR_13;
   VAR_12 = FUNC_17 (VAR_9, VAR_6, 0, VAR_14);
   VAR_14->fr_symbol = VAR_12;
 }
      else

 VAR_12 = FUNC_17 (VAR_9, VAR_6, 0, &VAR_7);





    }

  FUNC_18 (VAR_12);

  * VAR_11 = VAR_10;

  if (VAR_8
      && FUNC_5 (VAR_12)
      && FUNC_4 (VAR_12) != VAR_3)
    FUNC_9 (FUNC_7("symbol `%s' already defined"), FUNC_3 (VAR_12));

  FUNC_15 (VAR_12);

  FUNC_10 ();



  FUNC_6 (VAR_12, 1);
  FUNC_1 (VAR_12, 1);



}
