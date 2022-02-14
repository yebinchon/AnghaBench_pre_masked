
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0)
{
    switch(VAR_0)
    {
    case 129:
        return "TLSv1.3";

    case 130:
        return "TLSv1.2";

    case 131:
        return "TLSv1.1";

    case 128:
        return "TLSv1";

    case 132:
        return "SSLv3";

    case 134:
        return "DTLSv0.9";

    case 133:
        return "DTLSv1";

    case 135:
        return "DTLSv1.2";

    default:
        return "unknown";
    }
}
