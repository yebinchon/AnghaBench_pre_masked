
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {int Flags; } ;
struct TYPE_7__ {int Revision; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_TABLE_FADT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

void
FUNC_6 (
    ACPI_TABLE_HEADER *VAR_7,
    UINT32 VAR_8)
{






    if (VAR_8 > sizeof (ACPI_TABLE_FADT))
    {
        FUNC_0 ((VAR_2,
            "FADT (revision %u) is longer than %s length, "
            "truncating length %u to %u",
            VAR_7->Revision, VAR_0, VAR_8,
            (UINT32) sizeof (ACPI_TABLE_FADT)));
    }



    FUNC_5 (&VAR_3, 0, sizeof (ACPI_TABLE_FADT));



    FUNC_4 (&VAR_3, VAR_7,
        FUNC_1 (VAR_8, sizeof (ACPI_TABLE_FADT)));



    VAR_4 = VAR_5;
    if (VAR_3.Flags & VAR_1)
    {
        VAR_4 = VAR_6;
    }



    FUNC_2 ();



    FUNC_3 ();
}
