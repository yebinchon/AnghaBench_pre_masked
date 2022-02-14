
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,int,int *) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_0)
{
 char VAR_1[100];
 while (FUNC_0(VAR_1, sizeof(VAR_1), VAR_0)) {
  VAR_1[sizeof(VAR_1) - 1] = '\0';
  if (FUNC_1(VAR_1, sizeof(VAR_1)))
   return;
 }
}
