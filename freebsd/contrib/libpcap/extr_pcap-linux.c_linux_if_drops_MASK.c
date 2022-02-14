
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*) ;
 long FUNC_5 (char*,int *,int) ;

__attribute__((used)) static long int
FUNC_6(const char * VAR_0)
{
 char VAR_1[512];
 char * VAR_2;
 FILE * VAR_3;
 int VAR_4 = 3, VAR_5 = FUNC_3(VAR_0);
 long int VAR_6 = 0;

 VAR_3 = FUNC_2("/proc/net/dev", "r");
 if (!VAR_3)
  return 0;

 while (!VAR_6 && FUNC_1( VAR_1, sizeof(VAR_1), VAR_3 ))
 {



  if (VAR_4 != 4 && FUNC_4(VAR_1, "bytes"))
  {
   VAR_4 = 4;
   continue;
  }


  if ((VAR_2 = FUNC_4(VAR_1, VAR_0)) &&
   (VAR_2 == VAR_1 || *(VAR_2-1) == ' ') &&
   *(VAR_2 + VAR_5) == ':')
  {
   VAR_2 = VAR_2 + VAR_5 + 1;


   while( --VAR_4 && *VAR_2 != '\0')
   {
    while (*VAR_2 != '\0' && *(VAR_2++) == ' ');
    while (*VAR_2 != '\0' && *(VAR_2++) != ' ');
   }


   while (*VAR_2 != '\0' && *VAR_2 == ' ') VAR_2++;

   if (*VAR_2 != '\0')
    VAR_6 = FUNC_5(VAR_2, ((void*)0), 10);

   break;
  }
 }

 FUNC_0(VAR_3);
 return VAR_6;
}
