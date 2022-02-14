
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
    int VAR_3;

    if (FUNC_1(VAR_2) == VAR_0 && !FUNC_0("thermal")) {
 FUNC_2(VAR_2, "Thermal Zone");
 VAR_3 = -10;
    } else
 VAR_3 = VAR_1;
    return (VAR_3);
}
