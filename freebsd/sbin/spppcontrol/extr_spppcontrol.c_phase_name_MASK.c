
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ppp_phase { ____Placeholder_ppp_phase } ppp_phase ;
const char *
FUNC_0(enum ppp_phase VAR_0)
{
 switch (VAR_0) {
 case 131: return "dead";
 case 130: return "establish";
 case 128: return "terminate";
 case 132: return "authenticate";
 case 129: return "network";
 }
 return "illegal";
}
