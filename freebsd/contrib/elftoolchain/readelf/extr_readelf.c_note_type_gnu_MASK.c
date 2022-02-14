
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 switch (VAR_0) {
 case 1: return "NT_GNU_ABI_TAG";
 case 2: return "NT_GNU_HWCAP (Hardware capabilities)";
 case 3: return "NT_GNU_BUILD_ID (Build id set by ld(1))";
 case 4: return "NT_GNU_GOLD_VERSION (GNU gold version)";
 case 5: return "NT_GNU_PROPERTY_TYPE_0";
 default: return (FUNC_0(VAR_0));
 }
}
