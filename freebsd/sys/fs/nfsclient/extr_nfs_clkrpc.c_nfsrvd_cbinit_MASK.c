
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sp_done; int * sp_assign; int * sp_rcache; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__*,int ,int ,char*,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (char*,int *) ;

void
FUNC_6(int VAR_4)
{

 FUNC_1();

 if (VAR_4) {

  while (VAR_2 > 0)
   FUNC_3(&VAR_2, VAR_0, VAR_1,
       "nfscbdt", 0);
  if (VAR_3 != ((void*)0)) {
   FUNC_2();
   FUNC_4(VAR_3);
   FUNC_0();
  }
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_2();
  VAR_3 = FUNC_5("nfscbd", ((void*)0));
  VAR_3->sp_rcache = ((void*)0);
  VAR_3->sp_assign = ((void*)0);
  VAR_3->sp_done = ((void*)0);
  FUNC_0();
 }
}
