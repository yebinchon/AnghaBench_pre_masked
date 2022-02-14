
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char const*,int ) ;

void
FUNC_3(int VAR_1, const char *VAR_2, va_list VAR_3)
{

 if (VAR_0) {
  const char *VAR_4;

  switch (VAR_1) {
  case 131:
   VAR_4 = "error";
   break;
  case 128:
   VAR_4 = "warning";
   break;
  case 129:
   VAR_4 = "notice";
   break;
  case 130:
   VAR_4 = "info";
   break;
  case 132:
   VAR_4 = "debug";
   break;
  default:
   VAR_4 = "unknown";
  }

  FUNC_0("%s: ", VAR_4);
  FUNC_1(VAR_2, VAR_3);
  FUNC_0("\n");
 } else {
  if (VAR_1 != 132)
   FUNC_2(VAR_1, VAR_2, VAR_3);
 }
}
