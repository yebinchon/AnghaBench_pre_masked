
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
    switch (VAR_0) {
    case 132:
 return("OK");
    case 136:
 return("failed");
    case 133:
 return("not configured");
    case 135:
 return("interim recovery");
    case 130:
 return("ready for recovery");
    case 129:
 return("recovering");
    case 128:
 return("wrong physical drive inserted");
    case 134:
 return("missing physical drive");
    case 137:
 return("expanding");
    case 138:
 return("becoming ready");
    case 131:
 return("queued for expansion");
    }
    return("unknown status");
}
