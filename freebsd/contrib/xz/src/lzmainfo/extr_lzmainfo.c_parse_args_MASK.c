
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; int member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 int FUNC_2 () ;

 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(int VAR_1, char **VAR_2)
{
 enum {
  OPT_HELP,
  OPT_VERSION,
 };

 static const struct option VAR_3[] = {
  { "help", 128, ((void*)0), OPT_HELP },
  { "version", 128, ((void*)0), OPT_VERSION },
  { ((void*)0), 0, ((void*)0), 0 }
 };

 int VAR_4;
 while ((VAR_4 = FUNC_1(VAR_1, VAR_2, "", VAR_3, ((void*)0))) != -1) {
  switch (VAR_4) {
  case OPT_HELP:
   FUNC_2();

  case OPT_VERSION:
   FUNC_3();

  default:
   FUNC_0(VAR_0);
  }
 }

 return;
}
