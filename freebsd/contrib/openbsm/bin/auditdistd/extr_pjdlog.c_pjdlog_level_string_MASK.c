
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static const char *
FUNC_2(int VAR_0)
{

 switch (VAR_0) {
 case 132:
  return ("EMERG");
 case 135:
  return ("ALERT");
 case 134:
  return ("CRIT");
 case 131:
  return ("ERROR");
 case 128:
  return ("WARNING");
 case 129:
  return ("NOTICE");
 case 130:
  return ("INFO");
 case 133:
  return ("DEBUG");
 }
 FUNC_1(!"Invalid log level.");
 FUNC_0();
}
