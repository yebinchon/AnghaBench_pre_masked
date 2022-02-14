
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct symtab_and_line {int symtab; } ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;
struct TYPE_12__ {int addr; } ;
struct TYPE_13__ {TYPE_4__ start_line_or_addr; } ;
struct TYPE_14__ {TYPE_5__ source_info; } ;
struct TYPE_16__ {TYPE_6__ detail; } ;
struct TYPE_9__ {int line_no; } ;
struct TYPE_10__ {TYPE_1__ start_line_or_addr; } ;
struct TYPE_11__ {TYPE_2__ source_info; } ;
struct TYPE_15__ {TYPE_3__ detail; } ;
typedef int CORE_ADDR ;







 TYPE_8__* VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 struct symtab_and_line FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (void)
{
  enum tui_layout_type VAR_2 = FUNC_2 ();
  CORE_ADDR VAR_3;
  CORE_ADDR VAR_4;
  struct symtab_and_line VAR_5 = FUNC_1 ();

  switch (VAR_2)
    {
    case 130:
    case 129:
      FUNC_0 (VAR_5.symtab,
      VAR_1->detail.source_info.start_line_or_addr.line_no,
      &VAR_4);
      VAR_3 = VAR_4;
      break;
    case 132:
    case 128:
    case 131:
      VAR_3 = VAR_0->detail.source_info.start_line_or_addr.addr;
      break;
    default:
      VAR_3 = 0;
      break;
    }

  return VAR_3;
}
