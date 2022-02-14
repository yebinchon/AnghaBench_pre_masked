
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int target; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_13__ {TYPE_1__ target_statement; TYPE_3__ output_statement; TYPE_2__ header; } ;
typedef TYPE_4__ lang_statement_union_type ;
struct TYPE_16__ {int text_read_only; int magic_demand_paged; } ;
struct TYPE_15__ {int traditional_format; int relocatable; } ;
struct TYPE_14__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__ VAR_3 ;
 int VAR_4 ;


 int FUNC_1 () ;
 TYPE_7__ VAR_5 ;
 TYPE_5__* FUNC_2 (int ) ;
 TYPE_5__* VAR_6 ;

__attribute__((used)) static void
FUNC_3 (lang_statement_union_type *VAR_7)
{
  switch (VAR_7->header.type)
    {
    case 129:
      FUNC_0 (VAR_6 == ((void*)0));
      VAR_6 = FUNC_2 (VAR_7->output_statement.name);
      FUNC_1 ();
      if (VAR_3.magic_demand_paged && !VAR_5.relocatable)
 VAR_6->flags |= VAR_1;
      else
 VAR_6->flags &= ~VAR_1;
      if (VAR_3.text_read_only)
 VAR_6->flags |= VAR_2;
      else
 VAR_6->flags &= ~VAR_2;
      if (VAR_5.traditional_format)
 VAR_6->flags |= VAR_0;
      else
 VAR_6->flags &= ~VAR_0;
      break;

    case 128:
      VAR_4 = VAR_7->target_statement.target;
      break;
    default:
      break;
    }
}
