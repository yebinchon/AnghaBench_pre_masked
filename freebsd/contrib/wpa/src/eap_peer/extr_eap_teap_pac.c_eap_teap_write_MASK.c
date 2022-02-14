
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,int,char*,...) ;
 scalar_t__ FUNC_3 (int,int) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,int,int const*,size_t) ;

__attribute__((used)) static void FUNC_6(char **VAR_0, char **VAR_1, size_t *VAR_2,
      const char *VAR_3, const u8 *VAR_4,
      size_t VAR_5, int VAR_6)
{
 size_t VAR_7, VAR_8;
 int VAR_9;
 char *VAR_10;

 if (!VAR_4 || !VAR_0 || !(*VAR_0) || !VAR_1 || !(*VAR_1) || *VAR_1 < *VAR_0)
  return;

 VAR_8 = FUNC_4(VAR_3) + VAR_5 * 2 + 30;
 if (VAR_6)
  VAR_8 += FUNC_4(VAR_3) + VAR_5 + 20;

 if (*VAR_1 - *VAR_0 + VAR_8 > *VAR_2) {
  char *VAR_11 = FUNC_1(*VAR_0, *VAR_2 + VAR_8);

  if (!VAR_11) {
   FUNC_0(*VAR_0);
   *VAR_0 = ((void*)0);
   return;
  }
  *VAR_1 = VAR_11 + (*VAR_1 - *VAR_0);
  *VAR_0 = VAR_11;
  *VAR_2 += VAR_8;
 }
 VAR_10 = *VAR_0 + *VAR_2;

 VAR_9 = FUNC_2(*VAR_1, VAR_10 - *VAR_1, "%s=", VAR_3);
 if (FUNC_3(VAR_10 - *VAR_1, VAR_9))
  return;
 *VAR_1 += VAR_9;
 *VAR_1 += FUNC_5(*VAR_1, VAR_10 - *VAR_1, VAR_4, VAR_5);
 VAR_9 = FUNC_2(*VAR_1, VAR_10 - *VAR_1, "\n");
 if (FUNC_3(VAR_10 - *VAR_1, VAR_9))
  return;
 *VAR_1 += VAR_9;

 if (VAR_6) {
  VAR_9 = FUNC_2(*VAR_1, VAR_10 - *VAR_1, "%s-txt=", VAR_3);
  if (FUNC_3(VAR_10 - *VAR_1, VAR_9))
   return;
  *VAR_1 += VAR_9;
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   VAR_9 = FUNC_2(*VAR_1, VAR_10 - *VAR_1, "%c", VAR_4[VAR_7]);
   if (FUNC_3(VAR_10 - *VAR_1, VAR_9))
    return;
   *VAR_1 += VAR_9;
  }
  VAR_9 = FUNC_2(*VAR_1, VAR_10 - *VAR_1, "\n");
  if (FUNC_3(VAR_10 - *VAR_1, VAR_9))
   return;
  *VAR_1 += VAR_9;
 }
}
