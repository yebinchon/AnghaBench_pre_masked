
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
    int VAR_3;

    if (FUNC_1("chvgpio"))
        return (VAR_0);
    VAR_3 = FUNC_0(FUNC_2(VAR_2), VAR_2, VAR_1, ((void*)0));
    if (VAR_3 <= 0)
 FUNC_3(VAR_2, "Intel Cherry View GPIO");
    return (VAR_3);
}
