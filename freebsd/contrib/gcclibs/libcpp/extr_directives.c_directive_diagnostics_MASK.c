
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ origin; int name; } ;
typedef TYPE_2__ directive ;
struct TYPE_10__ {int skipping; } ;
struct TYPE_12__ {TYPE_1__ state; } ;
typedef TYPE_3__ cpp_reader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 TYPE_2__ const* VAR_5 ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_6, const directive *VAR_7, int VAR_8)
{

  if (FUNC_0 (VAR_6)
      && ! VAR_6->state.skipping
      && VAR_7->origin == VAR_2)
    FUNC_2 (VAR_6, VAR_0, "#%s is a GCC extension", VAR_7->name);







  if (FUNC_1 (VAR_6))
    {
      if (VAR_7 == &VAR_5[VAR_4])
 FUNC_2 (VAR_6, VAR_1,
     "suggest not using #elif in traditional C");
      else if (VAR_8 && VAR_7->origin == VAR_3)
 FUNC_2 (VAR_6, VAR_1,
     "traditional C ignores #%s with the # indented",
     VAR_7->name);
      else if (!VAR_8 && VAR_7->origin != VAR_3)
 FUNC_2 (VAR_6, VAR_1,
     "suggest hiding #%s from traditional C with an indented #",
     VAR_7->name);
    }
}
