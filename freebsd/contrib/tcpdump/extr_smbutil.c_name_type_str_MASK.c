
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
    const char *VAR_1 = ((void*)0);

    switch (VAR_0) {
    case 0: VAR_1 = "Workstation"; break;
    case 0x03: VAR_1 = "Client?"; break;
    case 0x20: VAR_1 = "Server"; break;
    case 0x1d: VAR_1 = "Master Browser"; break;
    case 0x1b: VAR_1 = "Domain Controller"; break;
    case 0x1e: VAR_1 = "Browser Server"; break;
    default: VAR_1 = "Unknown"; break;
    }
    return(VAR_1);
}
