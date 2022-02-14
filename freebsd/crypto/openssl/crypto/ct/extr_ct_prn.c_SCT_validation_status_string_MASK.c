
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCT ;
 int FUNC_0 (int const*) ;

const char *FUNC_1(const SCT *VAR_0)
{

    switch (FUNC_0(VAR_0)) {
    case 132:
        return "not set";
    case 130:
        return "unknown version";
    case 131:
        return "unknown log";
    case 129:
        return "unverified";
    case 133:
        return "invalid";
    case 128:
        return "valid";
    }
    return "unknown status";
}
