
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int* FUNC_1 (size_t,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int*,size_t,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int * FUNC_5(const char *VAR_0)
{
 int *VAR_1;
 size_t VAR_2, VAR_3;
 const char *VAR_4;

 VAR_2 = 0;
 VAR_3 = 10;
 VAR_1 = FUNC_1(VAR_3 + 1, sizeof(int));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_4 = VAR_0;
 while (VAR_4) {
  while (*VAR_4 == ' ')
   VAR_4++;
  if (VAR_2 == VAR_3) {
   int *VAR_5;
   size_t VAR_6;
   VAR_5 = FUNC_3(VAR_1, VAR_3 * 2 + 1, sizeof(int));
   if (VAR_5 == ((void*)0)) {
    FUNC_2(VAR_1);
    return ((void*)0);
   }
   for (VAR_6 = VAR_3; VAR_6 <= VAR_3 * 2; VAR_6++)
    VAR_5[VAR_6] = 0;
   VAR_1 = VAR_5;
   VAR_3 *= 2;
  }

  VAR_1[VAR_2] = FUNC_0(VAR_4);
  if (VAR_1[VAR_2] == 0)
   break;
  VAR_2++;
  VAR_4 = FUNC_4(VAR_4 + 1, ' ');
 }

 return VAR_1;
}
