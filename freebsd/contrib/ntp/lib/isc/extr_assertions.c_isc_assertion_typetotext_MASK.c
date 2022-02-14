
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_assertiontype_t ;







const char *
FUNC_0(isc_assertiontype_t VAR_0) {
 const char *VAR_1;






 switch (VAR_0) {
 case 128:
  VAR_1 = "REQUIRE";
  break;
 case 131:
  VAR_1 = "ENSURE";
  break;
 case 130:
  VAR_1 = "INSIST";
  break;
 case 129:
  VAR_1 = "INVARIANT";
  break;
 default:
  VAR_1 = ((void*)0);
 }
 return (VAR_1);
}
