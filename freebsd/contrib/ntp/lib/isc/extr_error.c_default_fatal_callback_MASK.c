
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 char* FUNC_2 (int ,int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, int VAR_5, const char *VAR_6,
         va_list VAR_7)
{
 FUNC_1(VAR_3, "%s:%d: %s: ", VAR_4, VAR_5,
  FUNC_2(VAR_2, VAR_0,
          VAR_1, "fatal error"));
 FUNC_3(VAR_3, VAR_6, VAR_7);
 FUNC_1(VAR_3, "\n");
 FUNC_0(VAR_3);
}
