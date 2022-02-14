
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,int,int) ;

__attribute__((used)) static void
FUNC_2 (
    const char *VAR_3,
    ACPI_PARSE_OBJECT *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6)
{

    FUNC_1 (VAR_2, "%s: length %u, required minimum is %u",
        VAR_3, VAR_5, VAR_6);

    FUNC_0 (VAR_0, VAR_1, VAR_4, VAR_2);
}
