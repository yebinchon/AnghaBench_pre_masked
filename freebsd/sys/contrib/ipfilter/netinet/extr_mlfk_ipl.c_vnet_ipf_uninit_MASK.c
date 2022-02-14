
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ipf_running; scalar_t__ ipf_refcnt; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void)
{

 if (VAR_0.ipf_refcnt)
  return;

 if (VAR_0.ipf_running >= 0) {

  if (FUNC_4(&VAR_0) != 0)
   return;

  VAR_0.ipf_running = -2;

  FUNC_1(&VAR_0);
  if (!FUNC_0(VAR_1)) {
   FUNC_2();
   (void)FUNC_3();
  }
 }
}
