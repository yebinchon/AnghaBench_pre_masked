
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int errbuf ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_5(
 const char *VAR_2,
 int VAR_3,
 const char *VAR_4,
 va_list VAR_5
 )
{
 char VAR_6[256];

 FUNC_2(((void*)0));

 FUNC_3(VAR_0, "%s:%d: fatal error:", VAR_2, VAR_3);
 FUNC_4(VAR_6, sizeof(VAR_6), VAR_4, VAR_5);
 FUNC_3(VAR_0, "%s", VAR_6);
 FUNC_3(VAR_0, "exiting (due to fatal error in library)");






 FUNC_1();
}
