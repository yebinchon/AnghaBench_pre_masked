
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* args; } ;
union node {scalar_t__ type; TYPE_3__ ncmd; } ;
struct cmdentry {int dummy; } ;
struct TYPE_4__ {int text; } ;
struct TYPE_5__ {TYPE_1__ narg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct cmdentry*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(union node *VAR_1)
{
 struct cmdentry VAR_2;

 if (VAR_1 && VAR_1->type == VAR_0 && VAR_1->ncmd.args)
  if (FUNC_1(VAR_1->ncmd.args->narg.text))
   FUNC_0(VAR_1->ncmd.args->narg.text, &VAR_2, 0,
         FUNC_2());
}
