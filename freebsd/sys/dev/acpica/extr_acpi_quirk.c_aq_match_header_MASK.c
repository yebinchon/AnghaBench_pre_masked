
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rev; int tid; } ;
struct TYPE_5__ {int op; int id; } ;
struct acpi_q_rule {int val; TYPE_2__ y; TYPE_1__ x; } ;
struct TYPE_7__ {int AslCompilerRevision; int OemRevision; int AslCompilerId; int OemTableId; int OemId; } ;
typedef TYPE_3__ ACPI_TABLE_HEADER ;




 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(ACPI_TABLE_HEADER *VAR_2, const struct acpi_q_rule *VAR_3)
{
    int VAR_4;

    VAR_4 = VAR_0;
    switch (VAR_3->val) {
    case 129:
 if (FUNC_1(VAR_2->OemId, VAR_3->x.id) &&
     FUNC_1(VAR_2->OemTableId, VAR_3->y.tid))
     VAR_4 = VAR_1;
 break;
    case 131:
 if (FUNC_1(VAR_2->AslCompilerId, VAR_3->x.id))
     VAR_4 = VAR_1;
 break;
    case 128:
 if (FUNC_0(VAR_2->OemRevision, VAR_3->x.op, VAR_3->y.rev))
     VAR_4 = VAR_1;
 break;
    case 130:
 if (FUNC_0(VAR_2->AslCompilerRevision, VAR_3->x.op, VAR_3->y.rev))
     VAR_4 = VAR_1;
 break;
    }

    return (VAR_4);
}
