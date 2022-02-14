
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum p2p_go_state { ____Placeholder_p2p_go_state } p2p_go_state ;






__attribute__((used)) static const char * FUNC_0(enum p2p_go_state VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "unknown";
 case 130:
  return "local";
 case 129:
  return "remote";
 }

 return "??";
}
