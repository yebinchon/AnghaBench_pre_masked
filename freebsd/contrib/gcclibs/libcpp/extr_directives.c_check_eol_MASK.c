
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* directive; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_2)
{
  if (! FUNC_0 () && FUNC_1 (VAR_2)->type != VAR_1)
    FUNC_2 (VAR_2, VAR_0, "extra tokens at end of #%s directive",
        VAR_2->directive->name);
}
