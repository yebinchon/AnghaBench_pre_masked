
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {char const* p_name; } ;





 struct protoent* FUNC_0 (int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
 switch (VAR_0) {
 case 0:
  return ((void*)0);
 case 129:
  return "tcp";
 case 128:
  return "udp";

 case 130:
  return "sctp";

 default:







  return ((void*)0);
 }
}
