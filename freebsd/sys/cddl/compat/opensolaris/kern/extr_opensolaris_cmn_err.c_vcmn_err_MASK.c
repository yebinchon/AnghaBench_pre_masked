
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int buf ;







 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,int,char const*,int ) ;

void
FUNC_4(int VAR_0, const char *VAR_1, va_list VAR_2)
{
 char VAR_3[256];
 const char *VAR_4;

 VAR_4 = ((void*)0);
 switch (VAR_0) {
 case 132:
  VAR_4 = "Solaris(cont): ";
  break;
 case 130:
  VAR_4 = "Solaris: NOTICE: ";
  break;
 case 128:
  VAR_4 = "Solaris: WARNING: ";
  break;
 case 129:
  VAR_4 = "Solaris(panic): ";
  break;
 case 131:
  break;
 default:
  FUNC_0("Solaris: unknown severity level");
 }
 if (VAR_0 == 129) {
  FUNC_3(VAR_3, sizeof(VAR_3), VAR_1, VAR_2);
  FUNC_0("%s%s", VAR_4, VAR_3);
 }
 if (VAR_0 != 131) {
  FUNC_1("%s", VAR_4);
  FUNC_2(VAR_1, VAR_2);
  FUNC_1("\n");
 }
}
