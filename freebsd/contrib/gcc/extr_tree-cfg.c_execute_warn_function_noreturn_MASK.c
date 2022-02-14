
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int preds; } ;
struct TYPE_7__ {int decl; } ;
struct TYPE_5__ {int (* missing_noreturn_ok_p ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ function; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static unsigned int
FUNC_4 (void)
{
  if (VAR_4
      && !FUNC_1 (VAR_2->decl)
      && FUNC_0 (VAR_0->preds) == 0
      && !VAR_3.function.missing_noreturn_ok_p (VAR_2->decl))
    FUNC_3 (VAR_1, "%Jfunction might be possible candidate "
      "for attribute %<noreturn%>",
      VAR_2->decl);
  return 0;
}
