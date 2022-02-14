
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sp_done; int sp_assign; int * sp_rcache; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int * VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (char*,int ) ;

void
FUNC_9(int VAR_7)
{

 FUNC_1();

 if (VAR_7) {
  VAR_4 = ((void*)0);
  FUNC_2();
  FUNC_6();
  FUNC_5();
  FUNC_7(VAR_6);
  FUNC_4(VAR_5, VAR_0);
  VAR_5 = ((void*)0);
  FUNC_0();
 } else {
  FUNC_2();
  VAR_6 = FUNC_8("nfsd",
      FUNC_3(VAR_1));
  VAR_6->sp_rcache = ((void*)0);
  VAR_6->sp_assign = VAR_3;
  VAR_6->sp_done = VAR_2;
  FUNC_0();
 }
}
