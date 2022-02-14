
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[80];
 switch (VAR_0) {
 case 0:
  return ("Success");
 case 130:
  return ("Internal ypbind error");
 case 129:
  return ("Domain not bound");
 case 128:
  return ("System resource allocation failure");
 }
 FUNC_0(VAR_1, "Unknown ypbind error: #%d\n", VAR_0);
 return (VAR_1);
}
