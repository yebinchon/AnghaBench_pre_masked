
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[15+10+1];

 switch (VAR_0) {

 case 130:
  return("Generic warning");

 case 128:
  return ("That type of time stamp is not supported by that device");

 case 129:
  return ("That device doesn't support promiscuous mode");

 case 142:
  return("Generic error");

 case 140:
  return("Loop terminated by pcap_breakloop");

 case 137:
  return("The pcap_t has not been activated");

 case 141:
  return ("The setting can't be changed after the pcap_t is activated");

 case 135:
  return ("No such device exists");

 case 132:
  return ("That device doesn't support monitor mode");

 case 136:
  return ("That operation is supported only in monitor mode");

 case 134:
  return ("You don't have permission to capture on that device");

 case 138:
  return ("That device is not up");

 case 139:
  return ("That device doesn't support setting the time stamp type");

 case 133:
  return ("You don't have permission to capture in promiscuous mode on that device");

 case 131:
  return ("That device doesn't support that time stamp precision");
 }
 (void)FUNC_0(VAR_1, sizeof VAR_1, "Unknown error: %d", VAR_0);
 return(VAR_1);
}
