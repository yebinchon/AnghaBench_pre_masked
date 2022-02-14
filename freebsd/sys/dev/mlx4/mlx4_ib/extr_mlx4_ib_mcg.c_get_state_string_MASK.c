
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mcast_group_state { ____Placeholder_mcast_group_state } mcast_group_state ;







__attribute__((used)) static const char *FUNC_0(enum mcast_group_state VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "MCAST_IDLE";
 case 130:
  return "MCAST_JOIN_SENT";
 case 129:
  return "MCAST_LEAVE_SENT";
 case 128:
  return "MCAST_RESP_READY";
 }
 return "Invalid State";
}
