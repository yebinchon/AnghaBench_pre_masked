
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_TABLE_HEADER ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int ) ;

void
FUNC_3 (
    ACPI_TABLE_HEADER *VAR_0,
    UINT32 VAR_1,
    char *VAR_2,
    char *VAR_3)
{
    char *VAR_4;


    VAR_4 = FUNC_1 (VAR_2, VAR_3);
    FUNC_2 (VAR_4, (char *) VAR_0, VAR_1);

    FUNC_0 ("Table [%s] written to \"%s\"\n", VAR_2, VAR_4);
}
