
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum eap_tnc_state { ____Placeholder_eap_tnc_state } eap_tnc_state ;
__attribute__((used)) static const char * FUNC_0(enum eap_tnc_state VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "START";
 case 134:
  return "CONTINUE";
 case 130:
  return "RECOMMENDATION";
 case 131:
  return "FRAG_ACK";
 case 128:
  return "WAIT_FRAG_ACK";
 case 133:
  return "DONE";
 case 132:
  return "FAIL";
 }
 return "??";
}
