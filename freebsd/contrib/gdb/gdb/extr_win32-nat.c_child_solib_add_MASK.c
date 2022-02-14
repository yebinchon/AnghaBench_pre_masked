
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_2__ {int load_addr; scalar_t__ name; int objfile; } ;


 int FUNC_0 (scalar_t__,int *,struct target_ops*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (scalar_t__,int,int ) ;

void
FUNC_3 (char *VAR_3, int VAR_4, struct target_ops *VAR_5,
   int VAR_6)
{
  if (!VAR_6)
    return;
  if (VAR_0)
    {
      FUNC_1 ();
      FUNC_0 (VAR_0, &VAR_1, VAR_5);
    }
  else
    {
      if (VAR_2 && VAR_2->name)
      VAR_2->objfile = FUNC_2 (VAR_2->name, VAR_4,
      VAR_2->load_addr);
    }
}
