
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int * FUNC_0 (char*,int,int *) ;
 unsigned long VAR_0 ;
 int FUNC_1 (char*,char*,unsigned long*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static unsigned long FUNC_3(FILE *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3 = VAR_0;
 char VAR_4[1024];

 while (FUNC_0(VAR_4, sizeof(VAR_4), VAR_1) != ((void*)0)) {
  if (!FUNC_2(VAR_4, "KernelPageSize:"))
   continue;

  VAR_2 = FUNC_1(VAR_4, "%*s %lu", &VAR_3);
  if (VAR_2 < 1)
   continue;


  VAR_3 = VAR_3 * 1024;

  break;
 }

 return VAR_3;
}
