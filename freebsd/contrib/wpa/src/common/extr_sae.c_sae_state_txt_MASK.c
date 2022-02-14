
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sae_state { ____Placeholder_sae_state } sae_state ;







const char * FUNC_0(enum sae_state VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "Nothing";
 case 130:
  return "Committed";
 case 129:
  return "Confirmed";
 case 131:
  return "Accepted";
 }
 return "?";
}
