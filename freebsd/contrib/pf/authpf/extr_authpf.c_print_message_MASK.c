
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2)
{
 char VAR_3[1024];
 FILE *VAR_4;

 if ((VAR_4 = FUNC_4(VAR_2, "r")) == ((void*)0))
  return;

 do {
  if (FUNC_3(VAR_3, sizeof(VAR_3), VAR_4) == ((void*)0)) {
   FUNC_2(VAR_1);
   FUNC_0(VAR_4);
   return;
  }
 } while (FUNC_5(VAR_3, VAR_1) != VAR_0 && !FUNC_1(VAR_4));
 FUNC_2(VAR_1);
 FUNC_0(VAR_4);
}
