
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dfaacc_state; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_8 ()
{
 int VAR_8;
 int VAR_9 = VAR_4 + 1;

 FUNC_7 (VAR_3 ? FUNC_5 () : FUNC_4 (),
       "yy_accept", VAR_2 + 1);

 VAR_0[VAR_1].dfaacc_state = VAR_9;

 for (VAR_8 = 1; VAR_8 <= VAR_2; ++VAR_8) {
  int VAR_10 = VAR_0[VAR_8].dfaacc_state;

  FUNC_6 (VAR_10);

  if (VAR_6 && VAR_10)
   FUNC_2 (VAR_5, FUNC_0("state # %d accepts: [%d]\n"),
     VAR_8, VAR_10);
 }

 FUNC_1 ();

 if (VAR_7)
  FUNC_3 ();




}
