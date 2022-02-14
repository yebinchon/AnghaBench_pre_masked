
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * history; } ;
typedef TYPE_1__ scr_stat ;
typedef int sc_vtb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(scr_stat *VAR_3, int VAR_4)
{
 sc_vtb_t *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->history;
 VAR_3->history = ((void*)0);
 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_1(VAR_1, VAR_4);
 VAR_2 += (VAR_6 > VAR_7) ?
      VAR_6 - VAR_7 : 0;

 FUNC_2(VAR_5);
 FUNC_0(VAR_5, VAR_0);
}
