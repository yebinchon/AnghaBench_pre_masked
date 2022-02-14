
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3 (char **VAR_2)
{
 int VAR_3 = VAR_0, VAR_4, VAR_5;
 char *VAR_6;

 *VAR_2 = FUNC_0 (VAR_3);
 if (*VAR_2 == ((void*)0)) {
  return -1;
 }

 VAR_6 = *VAR_2;
 VAR_4 = VAR_3;

 while ((VAR_5 = FUNC_1 (VAR_1, VAR_6, VAR_4 - 1)) > 0) {
  VAR_4 -= VAR_5;
  VAR_6 += VAR_5;

  if (VAR_4 <= 1) {
   *VAR_2 = FUNC_2 (*VAR_2, VAR_3 * 2);
   if (*VAR_2 == ((void*)0)) {
    return -1;
   }

   VAR_6 = *VAR_2 + VAR_3 - 1;
   VAR_4 = VAR_3 + 1;
   VAR_3 *= 2;
  }
 }

 *VAR_6 = '\0';

 return VAR_5;
}
