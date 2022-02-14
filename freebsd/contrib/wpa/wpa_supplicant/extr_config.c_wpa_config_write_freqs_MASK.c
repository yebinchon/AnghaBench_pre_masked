
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_data {int dummy; } ;


 int FUNC_0 (char*,int,char*,char*,int const) ;
 scalar_t__ FUNC_1 (int,int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char * FUNC_3(const struct parse_data *VAR_0,
         const int *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5, VAR_6;
 size_t VAR_7;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_7 = 0;
 for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
  VAR_7++;

 VAR_3 = VAR_2 = FUNC_2(10 * VAR_7 + 1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_4 = VAR_2 + 10 * VAR_7 + 1;

 for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3, VAR_4 - VAR_3, "%s%u",
      VAR_5 == 0 ? "" : " ", VAR_1[VAR_5]);
  if (FUNC_1(VAR_4 - VAR_3, VAR_6)) {
   VAR_4[-1] = '\0';
   return VAR_2;
  }
  VAR_3 += VAR_6;
 }

 return VAR_2;
}
