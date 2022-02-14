
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_2__ {int MessageId; char* MessageIdStr; int MessageReceived; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;

ACPI_STATUS
FUNC_2 (
    char *VAR_8)
{
    UINT32 VAR_9;




    VAR_9 = (UINT32) FUNC_1 (VAR_8, ((void*)0), 0);

    if (VAR_9 > 6999)
    {
        FUNC_0 ("\"%s\" is not a valid warning/remark/erro ID\n",
            VAR_8);
        return (VAR_0);
    }



    if (VAR_6 >= VAR_4)
    {
        FUNC_0 ("Too many messages have been registered as expected (max %d)\n",
            VAR_3);
        return (VAR_1);
    }

    VAR_5[VAR_6].MessageId = VAR_9;
    VAR_5[VAR_6].MessageIdStr = VAR_8;
    VAR_5[VAR_6].MessageReceived = VAR_7;
    VAR_6++;
    return (VAR_2);
}
