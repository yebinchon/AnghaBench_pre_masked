
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,char const*) ;

void
FUNC_2(const char *VAR_1)
{
 switch (VAR_0) {

 case 129:
  FUNC_1(1, "%s: no such interface", VAR_1);
  break;

 case 128:
  FUNC_1(1, "%s: permission denied", VAR_1);
  break;

 default:
  FUNC_0(1, "%s", VAR_1);
 }
}
