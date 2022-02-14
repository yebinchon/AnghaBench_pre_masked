
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(int *VAR_0)
{
 char VAR_1[128];
 FILE *VAR_2;
 int VAR_3 = 0;
 int VAR_4 = -1;
 int VAR_5 = -1;

 VAR_2 = FUNC_2("/proc/cpuinfo", "r");
 if (!VAR_2)
  return 0;

 *VAR_0 = 0;

 while (FUNC_1(VAR_1, 128, VAR_2)) {
  int VAR_6;


  if (!FUNC_4(VAR_1, "processor", 9)) {
   ++*VAR_0;

   VAR_4 = -1;
   VAR_5 = -1;
  } else if (!FUNC_4(VAR_1, "cpu family", 10)) {
   if ((VAR_4 < 0) && (!FUNC_3(VAR_1, &VAR_6)))
    VAR_4 = VAR_6;
  } else if (!FUNC_4(VAR_1, "model", 5)) {
   if ((VAR_5 < 0) && (!FUNC_3(VAR_1, &VAR_6)))
    VAR_5 = VAR_6;
  }


  if ((VAR_4 == 6) &&
      (VAR_5 == 0x2A || (VAR_5 == 0x2D) ))
   VAR_3 = 1;
 }

 FUNC_0(VAR_2);
 return VAR_3;
}
