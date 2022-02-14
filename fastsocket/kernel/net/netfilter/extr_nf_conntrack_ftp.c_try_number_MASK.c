
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
typedef int array ;


 int FUNC_0 (size_t*,int ,int) ;
 int FUNC_1 (char*,int,char,...) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1, u_int32_t VAR_2[],
        int VAR_3, char VAR_4, char VAR_5)
{
 u_int32_t VAR_6, VAR_7;

 FUNC_0(VAR_2, 0, sizeof(VAR_2[0])*VAR_3);


 for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_1 && VAR_6 < VAR_3; VAR_7++, VAR_0++) {
  if (*VAR_0 >= '0' && *VAR_0 <= '9') {
   VAR_2[VAR_6] = VAR_2[VAR_6]*10 + *VAR_0 - '0';
  }
  else if (*VAR_0 == VAR_4)
   VAR_6++;
  else {


   if (*VAR_0 == VAR_5 && VAR_6 == VAR_3 - 1)
    return VAR_7;

   FUNC_1("Char %u (got %u nums) `%u' unexpected\n",
     VAR_7, VAR_6, *VAR_0);
   return 0;
  }
 }
 FUNC_1("Failed to fill %u numbers separated by %c\n",
   VAR_3, VAR_4);
 return 0;
}
