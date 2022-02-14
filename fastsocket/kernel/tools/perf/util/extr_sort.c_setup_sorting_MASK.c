
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_0 ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char const* const*,struct option const*) ;

void FUNC_6(const char * const VAR_1[], const struct option *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5 = FUNC_3(VAR_0);

 for (VAR_4 = FUNC_4(VAR_5, ", ", &VAR_3);
   VAR_4; VAR_4 = FUNC_4(((void*)0), ", ", &VAR_3)) {
  if (FUNC_2(VAR_4) < 0) {
   FUNC_0("Unknown --sort key: `%s'", VAR_4);
   FUNC_5(VAR_1, VAR_2);
  }
 }

 FUNC_1(VAR_5);
}
