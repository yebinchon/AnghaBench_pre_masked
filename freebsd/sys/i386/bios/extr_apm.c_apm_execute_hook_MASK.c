
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apmhook {char* ah_name; int ah_arg; scalar_t__ (* ah_fun ) (int ) ;struct apmhook* ah_next; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct apmhook *VAR_0)
{
 struct apmhook *VAR_1;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->ah_next) {
  FUNC_0("Execute APM hook \"%s.\"\n", VAR_1->ah_name);
  if ((*(VAR_1->ah_fun))(VAR_1->ah_arg))
   FUNC_1("Warning: APM hook \"%s\" failed", VAR_1->ah_name);
 }
}
