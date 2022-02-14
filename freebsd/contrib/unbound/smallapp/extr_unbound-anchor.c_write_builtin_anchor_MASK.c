
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,int ,int,int *) ;
 char* FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_7(const char* VAR_2)
{
 const char* VAR_3 = FUNC_3();
 FILE* VAR_4 = FUNC_1(VAR_2, "w");
 if(!VAR_4) {
  if(VAR_1) FUNC_4("%s: %s\n", VAR_2, FUNC_5(VAR_0));
  if(VAR_1) FUNC_4("  could not write builtin anchor\n");
  return;
 }
 if(!FUNC_2(VAR_3, FUNC_6(VAR_3), 1, VAR_4)) {
  if(VAR_1) FUNC_4("%s: %s\n", VAR_2, FUNC_5(VAR_0));
  if(VAR_1) FUNC_4("  could not complete write builtin anchor\n");
 }
 FUNC_0(VAR_4);
}
