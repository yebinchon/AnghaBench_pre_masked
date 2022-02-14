
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchan_t ;
struct TYPE_3__ {scalar_t__ w; scalar_t__ pid; int wchan; } ;
typedef TYPE_1__ pjob ;
typedef int opaque_t ;
typedef int cb_fun ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

void
FUNC_2(cb_fun *VAR_0, opaque_t VAR_1, wchan_t VAR_2)
{



  pjob *VAR_3 = FUNC_1(VAR_0, VAR_1);

  FUNC_0("SLEEP on %p", VAR_2);
  VAR_3->wchan = VAR_2;
  VAR_3->pid = 0;
  VAR_3->w = 0;
}
