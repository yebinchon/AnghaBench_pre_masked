
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1 (
    UINT8 VAR_0)
{

    switch (VAR_0)
    {
    case 132:

        FUNC_0 ("AttribQuick");
        break;

    case 129:

        FUNC_0 ("AttribSendReceive");
        break;

    case 135:

        FUNC_0 ("AttribByte");
        break;

    case 128:

        FUNC_0 ("AttribWord");
        break;

    case 137:

        FUNC_0 ("AttribBlock");
        break;

    case 134:

        FUNC_0 ("AttribBytes");
        break;

    case 133:

        FUNC_0 ("AttribProcessCall");
        break;

    case 136:

        FUNC_0 ("AttribBlockProcessCall");
        break;

    case 131:

        FUNC_0 ("AttribRawBytes");
        break;

    case 130:

        FUNC_0 ("AttribRawProcessBytes");
        break;

    default:



        FUNC_0 ("0x%2.2X", VAR_0);
        break;
    }
}
