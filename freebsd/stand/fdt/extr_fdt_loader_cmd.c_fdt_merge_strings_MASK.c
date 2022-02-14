
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, char *VAR_2[], int VAR_3, char **VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 *VAR_4 = ((void*)0);
 VAR_8 = 0;

 for (VAR_6 = VAR_3; VAR_6 < VAR_1; VAR_6++)
  VAR_8 += FUNC_4(VAR_2[VAR_6]);


 VAR_8 += VAR_1 - VAR_3;

 VAR_5 = (char *)FUNC_1(sizeof(char) * VAR_8);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_0, "could not allocate space "
      "for string");
  return (1);
 }
 FUNC_0(VAR_5, sizeof(char) * VAR_8);

 VAR_7 = 0;
 for (VAR_6 = VAR_3, VAR_7 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_3(VAR_5 + VAR_7, VAR_2[VAR_6]);
  VAR_7 += FUNC_4(VAR_2[VAR_6]);
  VAR_5[VAR_7] = ' ';
  VAR_7++;
 }
 VAR_5[VAR_8 - 1] = '\0';
 *VAR_4 = VAR_5;
 return (0);
}
