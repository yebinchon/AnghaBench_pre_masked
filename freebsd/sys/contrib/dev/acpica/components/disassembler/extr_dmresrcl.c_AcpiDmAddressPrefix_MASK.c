
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;






 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (
    UINT8 VAR_0)
{

    switch (VAR_0)
    {
    case 131:

        FUNC_0 ("Word");
        break;

    case 130:

        FUNC_0 ("DWord");
        break;

    case 129:

        FUNC_0 ("QWord");
        break;

    case 128:

        FUNC_0 ("Extended");
        break;

    default:

        return;
    }
}
