
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_2__ {int Filename; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,char*,char*) ;

UINT64
FUNC_5 (
    char *VAR_8)
{
    ACPI_STATUS VAR_9;
    UINT64 VAR_10;
    char VAR_11[64];


    VAR_9 = FUNC_2 (VAR_8, &VAR_10);
    if (FUNC_0 (VAR_9))
    {
        FUNC_4 (VAR_11, "While creating 64-bit constant: %s\n",
            FUNC_1 (VAR_9));

        FUNC_3 (VAR_0, VAR_2, VAR_4,
            VAR_7, VAR_5,
            VAR_3, VAR_6[VAR_1].Filename, VAR_11);
    }

    return (VAR_10);
}
