
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {char* ExternalName; int CompileFlags; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,TYPE_2__*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static UINT32
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_8,
    char *VAR_9)
{
    if ((VAR_9[1] == 'L') ||
        (VAR_9[1] == 'E') ||
        (VAR_9[1] == 'W') ||
        (VAR_9[1] == 'Q'))
    {


        if ((FUNC_1 ((int) VAR_9[2])) &&
            (FUNC_1 ((int) VAR_9[3])))
        {
            return (VAR_1);
        }
    }



    else if ((VAR_8->Asl.ExternalName[1] == 'T') &&
             (VAR_8->Asl.ExternalName[2] == '_'))
    {


        if (VAR_8->Asl.CompileFlags & VAR_7)
        {
            return (VAR_2);
        }
        FUNC_0 (VAR_5, VAR_3,
            VAR_8, VAR_8->Asl.ExternalName);
        return (VAR_0);
    }






    FUNC_0 (VAR_6, VAR_4,
        VAR_8, VAR_8->Asl.ExternalName);

    return (VAR_2);
}
