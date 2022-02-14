
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum svn_wc_status_kind { ____Placeholder_svn_wc_status_kind } svn_wc_status_kind ;


 int FUNC_0 () ;
__attribute__((used)) static const char *
FUNC_1(enum svn_wc_status_kind VAR_0)
{
  switch (VAR_0)
    {
    case 132: return "none";
    case 131: return "normal";
    case 140: return "added";
    case 134: return "missing";
    case 135: return "incomplete";
    case 138: return "deleted";
    case 129: return "replaced";
    case 133: return "modified";
    case 139: return "conflicted";
    case 130: return "obstructed";
    case 136: return "ignored";
    case 137: return "external";
    case 128: return "unversioned";
    default:
      FUNC_0();
    }
}
