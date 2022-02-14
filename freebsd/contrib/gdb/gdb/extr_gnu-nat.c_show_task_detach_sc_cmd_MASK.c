
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int detach_sc; } ;


 int FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  FUNC_0 (VAR_0, "show task detach-suspend-count");
  FUNC_2 ("The inferior task will be left with a suspend count of %d when detaching.\n",
       FUNC_1 ()->detach_sc);
}
