
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(void)
{
 bool VAR_0 = 0;

 if (FUNC_4() != 0) {
  FILE *VAR_1 = FUNC_3("/proc/sys/kernel/kptr_restrict", "r");
  if (VAR_1 != ((void*)0)) {
   char VAR_2[8];

   if (FUNC_2(VAR_2, sizeof(VAR_2), VAR_1) != ((void*)0))
    VAR_0 = FUNC_0(VAR_2) != 0;

   FUNC_1(VAR_1);
  }
 }

 return VAR_0;
}
