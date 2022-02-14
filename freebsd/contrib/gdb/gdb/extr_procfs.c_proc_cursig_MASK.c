
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long pr_cursig; } ;
struct TYPE_4__ {long pr_cursig; TYPE_1__ pr_lwp; } ;
struct procinfo {TYPE_2__ prstatus; int status_valid; } ;


 int FUNC_0 (struct procinfo*) ;

long
FUNC_1 (struct procinfo *VAR_0)
{
  if (!VAR_0->status_valid)
    if (!FUNC_0 (VAR_0))
      return 0;




  return VAR_0->prstatus.pr_cursig;

}
