
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,int,char*,int const,char) ;
 scalar_t__ FUNC_1 (int,int) ;

int FUNC_2(char *VAR_0, size_t VAR_1, const u8 *VAR_2, size_t VAR_3,
    char VAR_4)
{
 size_t VAR_5;
 char *VAR_6 = VAR_0, *VAR_7 = VAR_0 + VAR_1;
 int VAR_8;

 if (VAR_1 == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_8 = FUNC_0(VAR_6, VAR_7 - VAR_6, "%02x%c",
      VAR_2[VAR_5], VAR_4);
  if (FUNC_1(VAR_7 - VAR_6, VAR_8)) {
   VAR_7[-1] = '\0';
   return VAR_6 - VAR_0;
  }
  VAR_6 += VAR_8;
 }
 VAR_6[-1] = '\0';
 return VAR_6 - VAR_0;
}
