
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_4__* type_p ;
typedef int outf_p ;
struct TYPE_8__ {int * file; } ;
struct TYPE_9__ {TYPE_1__ line; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
struct TYPE_11__ {scalar_t__ kind; TYPE_3__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3 (outf_p VAR_1, type_p VAR_2)
{
  if (VAR_2->kind == VAR_0 && VAR_2->u.s.line.file != ((void*)0))
    {
      FUNC_1 (VAR_1, ", gt_e_");
      FUNC_2 (VAR_1, VAR_2);
    }
  else if (FUNC_0 (VAR_2) && VAR_2->u.s.line.file != ((void*)0))
    {
      FUNC_1 (VAR_1, ", gt_ggc_e_");
      FUNC_2 (VAR_1, VAR_2);
    }
  else
    FUNC_1 (VAR_1, ", gt_types_enum_last");
}
