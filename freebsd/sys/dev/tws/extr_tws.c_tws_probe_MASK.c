
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5)
{
    static u_int8_t VAR_6 = 1;

    if ((FUNC_2(VAR_5) == VAR_4) &&
        (FUNC_1(VAR_5) == VAR_2)) {
        FUNC_0(VAR_5, "LSI 3ware SAS/SATA Storage Controller");
        if (VAR_6) {
            FUNC_3("LSI 3ware device driver for SAS/SATA storage "
                    "controllers, version: %s\n", VAR_3);
            VAR_6 = 0;
        }

        return(VAR_0);
    }
    return (VAR_1);
}
