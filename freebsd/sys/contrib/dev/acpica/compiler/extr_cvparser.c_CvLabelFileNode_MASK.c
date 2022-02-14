
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int Filename; TYPE_2__* Parent; } ;
struct TYPE_7__ {int CvParentFilename; int CvFilename; scalar_t__ Aml; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
struct TYPE_8__ {int Filename; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_FILE_NODE ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (char*,int ) ;

void
FUNC_1(
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_FILE_NODE *VAR_2;


    if (!VAR_1)
    {
        return;
    }

    VAR_2 = FUNC_0 ((char *)
        VAR_1->Common.Aml, VAR_0);
    if (!VAR_2)
    {
       return;
    }

    VAR_1->Common.CvFilename = VAR_2->Filename;
    if (VAR_2->Parent)
    {
        VAR_1->Common.CvParentFilename = VAR_2->Parent->Filename;
    }
    else
    {
        VAR_1->Common.CvParentFilename = VAR_2->Filename;
    }
}
