
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(const char **VAR_1)
{

 switch (VAR_0) {
 case 128:
  *VAR_1 = "i686";
  break;
 case 129:
  *VAR_1 = "i586";
  break;
 case 130:
  *VAR_1 = "i486";
  break;
 default:
  *VAR_1 = "i386";
 }
}
