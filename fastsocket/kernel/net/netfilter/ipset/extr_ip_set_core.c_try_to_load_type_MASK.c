
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2)
{
 FUNC_1();
 FUNC_2("try to load ip_set_%s\n", VAR_2);
 if (FUNC_4("ip_set_%s", VAR_2) < 0) {
  FUNC_3("Can't find ip_set type %s\n", VAR_2);
  FUNC_0();
  return -VAR_1;
 }
 FUNC_0();
 return -VAR_0;
}
