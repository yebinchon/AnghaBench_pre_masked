
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_4)
{
    int VAR_5, VAR_6;
    Char *VAR_7, *VAR_8, *VAR_9;

    VAR_9 = VAR_2;
    VAR_8 = VAR_0;
    VAR_7 = VAR_1;
    VAR_5 = 1;
    VAR_6 = 0;
    do {
 while (FUNC_3(*VAR_7) || FUNC_2(*VAR_7))
     VAR_7++;
 for (VAR_0 = VAR_7;
      *VAR_0 != '\0' && ((VAR_0 != VAR_7 && VAR_0[-1] == '\\') ||
     (!FUNC_3(*VAR_0) && !FUNC_2(*VAR_0)));
      VAR_0++)
      continue;
 if (*VAR_0 == '\0') {
     VAR_0 = VAR_2;
     if (VAR_2[-1] == '\n')
  VAR_0--;
     VAR_5 = 0;
 }
 if (!FUNC_0(*VAR_7) &&
     (!VAR_4 || FUNC_4(VAR_7, VAR_1))) {






     {
  switch (FUNC_5(VAR_1, VAR_0 - VAR_1, VAR_3)) {
  case 1:
      VAR_6 = 1;
      break;
  case -1:
      if (!VAR_6)
   VAR_6 = -1;
      break;
  default:
      break;
  }
     }
     if (VAR_2 != VAR_9) {
  if (VAR_7 < VAR_8)
      VAR_8 += (VAR_2 - VAR_9);
  VAR_9 = VAR_2;
     }
 }
 VAR_7 = VAR_0;
    } while (VAR_5);
    VAR_0 = VAR_8;
    return VAR_6;
}
