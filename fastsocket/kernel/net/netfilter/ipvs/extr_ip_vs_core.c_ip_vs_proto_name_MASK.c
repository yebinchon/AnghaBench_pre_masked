
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;

const char *FUNC_1(unsigned VAR_0)
{
 static char VAR_1[20];

 switch (VAR_0) {
 case 131:
  return "IP";
 case 128:
  return "UDP";
 case 129:
  return "TCP";
 case 130:
  return "SCTP";
 case 133:
  return "ICMP";




 default:
  FUNC_0(VAR_1, "IP_%d", VAR_0);
  return VAR_1;
 }
}
