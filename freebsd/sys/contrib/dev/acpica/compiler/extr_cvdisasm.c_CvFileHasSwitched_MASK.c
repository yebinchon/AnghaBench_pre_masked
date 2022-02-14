
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ CvFilename; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN
FUNC_1(
    ACPI_PARSE_OBJECT *VAR_3)
{

    if (VAR_3->Common.CvFilename &&
        VAR_0 &&
        FUNC_0(VAR_3->Common.CvFilename, VAR_0))
    {
        return (VAR_2);
    }

    return (VAR_1);
}
