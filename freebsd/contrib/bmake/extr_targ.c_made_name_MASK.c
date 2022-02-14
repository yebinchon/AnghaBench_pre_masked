
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum enum_made { ____Placeholder_enum_made } enum_made ;
__attribute__((used)) static const char *
FUNC_0(enum enum_made VAR_0)
{
    switch (VAR_0) {
    case 129: return "unmade";
    case 133: return "deferred";
    case 130: return "requested";
    case 134: return "being made";
    case 131: return "made";
    case 128: return "up-to-date";
    case 132: return "error when made";
    case 135: return "aborted";
    default: return "unknown enum_made value";
    }
}
