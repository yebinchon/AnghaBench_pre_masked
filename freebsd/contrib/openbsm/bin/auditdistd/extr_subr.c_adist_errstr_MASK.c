
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(int VAR_0)
{

 switch (VAR_0) {
 case 128:
  return ("wrong operations order");
 case 134:
  return ("invalid trail file name");
 case 132:
  return ("attempt to open an old trail file");
 case 135:
  return ("creation of new trail file failed");
 case 133:
  return ("open of existing trail file failed");
 case 131:
  return ("read failed");
 case 129:
  return ("write failed");
 case 130:
  return ("rename of a trail file failed");
 default:
  return ("unknown error");
 }
}
