
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
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;

ACPI_STATUS
FUNC_2 (
    char *VAR_6)
{
    UINT32 VAR_7;




    VAR_7 = (UINT32) FUNC_1 (VAR_6, ((void*)0), 0);

    if ((VAR_7 < 2000) || (VAR_7 > 6999))
    {
        FUNC_0 ("\"%s\" is not a valid warning/remark/error ID\n",
            VAR_6);
        return (VAR_0);
    }



    if (VAR_5 >= VAR_3)
    {
        FUNC_0 ("Too many messages have been disabled (max %d)\n",
            VAR_3);
        return (VAR_1);
    }

    VAR_4[VAR_5] = VAR_7;
    VAR_5++;
    return (VAR_2);
}
