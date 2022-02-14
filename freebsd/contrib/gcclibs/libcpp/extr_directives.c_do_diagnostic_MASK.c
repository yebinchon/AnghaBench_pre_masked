
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int prevent_expansion; int in_diagnostic; } ;
struct TYPE_11__ {TYPE_1__ state; TYPE_3__* directive; TYPE_2__* cur_token; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {int src_loc; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_1, int VAR_2, int VAR_3)
{
  if (FUNC_0 (VAR_1, VAR_2, VAR_1->cur_token[-1].src_loc, 0))
    {
      if (VAR_3)
 FUNC_2 (VAR_0, "#%s ", VAR_1->directive->name);
      VAR_1->state.prevent_expansion++;

      VAR_1->state.in_diagnostic++;
      FUNC_1 (VAR_1, VAR_0);

      VAR_1->state.in_diagnostic--;
      VAR_1->state.prevent_expansion--;
    }
}
