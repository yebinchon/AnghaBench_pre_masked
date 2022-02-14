
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;

ACPI_STATUS
FUNC_2 (
    char *VAR_7)
{
    UINT32 VAR_8;




    VAR_8 = (UINT32) FUNC_1 (VAR_7, ((void*)0), 0);

    if (VAR_8 > 6999)
    {
        FUNC_0 ("\"%s\" is not a valid warning/remark/erro ID\n",
            VAR_7);
        return (VAR_0);
    }



    if (VAR_6 >= VAR_4)
    {
        FUNC_0 ("Too many messages have been registered as elevated (max %d)\n",
            VAR_3);
        return (VAR_1);
    }

    VAR_5[VAR_6] = VAR_8;
    VAR_6++;
    return (VAR_2);
}
