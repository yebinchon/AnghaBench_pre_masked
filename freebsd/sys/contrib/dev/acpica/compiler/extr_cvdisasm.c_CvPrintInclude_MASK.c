
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ IncludeWritten; int Filename; int IncludeComment; TYPE_1__* Parent; } ;
struct TYPE_4__ {int File; int Filename; } ;
typedef TYPE_2__ ACPI_FILE_NODE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(
    ACPI_FILE_NODE *VAR_1,
    UINT32 VAR_2)
{

    if (!VAR_1 || VAR_1->IncludeWritten)
    {
        return;
    }

    FUNC_3 ("Writing include for %s within %s\n",
        VAR_1->Filename, VAR_1->Parent->Filename);
    FUNC_2 (VAR_1->Parent->File);
    FUNC_4 (VAR_1->IncludeComment, VAR_2);

    FUNC_0 (VAR_2);
    FUNC_1 ("Include (\"%s\")\n", VAR_1->Filename);
    FUNC_3 ("emitted the following: Include (\"%s\")\n",
        VAR_1->Filename);
    VAR_1->IncludeWritten = VAR_0;
}
