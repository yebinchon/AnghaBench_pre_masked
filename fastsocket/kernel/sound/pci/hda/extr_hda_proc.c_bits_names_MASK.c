
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static char *FUNC_1(unsigned int VAR_0, char *VAR_1[], int VAR_2)
{
 int VAR_3, VAR_4;
 static char VAR_5[128];

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0 & (1U<<VAR_3) && VAR_1[VAR_3])
   VAR_4 += FUNC_0(VAR_5 + VAR_4, sizeof(VAR_5) - VAR_4, " %s",
          VAR_1[VAR_3]);
 }
 VAR_5[VAR_4] = '\0';

 return VAR_5;
}
