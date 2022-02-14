
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int td_pflags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(void)
{

 FUNC_3();

 FUNC_5(&VAR_3);
 FUNC_2("GEOM events");
 while (!FUNC_0(&VAR_4))
  FUNC_4(&VAR_5, &VAR_3, VAR_0,
      "g_waitidle", VAR_6/5);
 FUNC_1("GEOM events");
 FUNC_6(&VAR_3);
 VAR_2->td_pflags &= ~VAR_1;
}
