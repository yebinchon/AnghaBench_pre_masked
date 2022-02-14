
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
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_5(void)
{
    int VAR_4, VAR_5;
    Char *VAR_6, *VAR_7, *VAR_8;

    VAR_8 = VAR_2;
    VAR_7 = VAR_0;
    VAR_6 = VAR_1;
    VAR_4 = 1;
    do {
 while (FUNC_2(*VAR_6) || FUNC_1(*VAR_6))
     VAR_6++;
 for (VAR_0 = VAR_6;
      *VAR_0 != '\0' && ((VAR_0 != VAR_6 && VAR_0[-1] == '\\') ||
     (!FUNC_2(*VAR_0) && !FUNC_1(*VAR_0)));
      VAR_0++)
      continue;
 if (*VAR_0 == '\0') {
     VAR_0 = VAR_2;
     if (VAR_2[-1] == '\n')
  VAR_0--;
     VAR_4 = 0;
 }
 if (!FUNC_0(*VAR_6) && FUNC_3(VAR_6, VAR_1)) {
     VAR_5 = FUNC_4(VAR_1, VAR_0 - VAR_1, VAR_3);
     if (VAR_5 <= 0) {
                return 0;
            } else if (VAR_5 > 1) {
                return 2;
     }
     if (VAR_2 != VAR_8) {
  if (VAR_6 < VAR_7)
      VAR_7 += (VAR_2 - VAR_8);
  VAR_8 = VAR_2;
     }
 }
 VAR_6 = VAR_0;
    } while (VAR_4);
    VAR_0 = VAR_7;
    return 1;
}
