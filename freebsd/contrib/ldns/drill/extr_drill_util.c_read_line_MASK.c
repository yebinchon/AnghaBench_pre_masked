
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(FILE *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < (int)VAR_3-1; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1);
  if (VAR_5 == VAR_0) {
   return -1;
  } else if (VAR_5 != '\n') {
   VAR_2[VAR_4] = VAR_5;
  } else {
   break;
  }
 }
 VAR_2[VAR_4] = '\0';
 return VAR_4;
}
