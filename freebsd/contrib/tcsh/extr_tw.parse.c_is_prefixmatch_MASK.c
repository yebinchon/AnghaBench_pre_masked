
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(Char *VAR_3, Char *VAR_4, int VAR_5)
{
    Char VAR_6, VAR_7, VAR_8, VAR_9;

    for (; *VAR_3; VAR_3++, VAR_4++) {
 if ((*VAR_3 & VAR_1) != (*VAR_4 & VAR_1)) {
     VAR_6 = (*VAR_3 & VAR_1);
     VAR_7 = (*VAR_4 & VAR_1);
            VAR_8 = FUNC_0(VAR_6) ? FUNC_1(VAR_6) :
  VAR_5 == 2 && VAR_6 == '_' ? '-' : VAR_6;
            VAR_9 = FUNC_0(VAR_7) ? FUNC_1(VAR_7) :
  VAR_5 == 2 && VAR_7 == '_' ? '-' : VAR_7;
     if (VAR_6 != VAR_7 && VAR_6 != VAR_9 &&
  (VAR_8 != VAR_7 || VAR_5 == 2)) {
  if (VAR_5 && ((*VAR_3 & VAR_1) == '-' ||
     (*VAR_3 & VAR_1) == '.' ||
     (*VAR_3 & VAR_1) == '_')) {
      VAR_6 = VAR_7 = (*VAR_3 & VAR_1);
      if (VAR_6 == '_' && VAR_5 != 2) {
   VAR_7 = '-';
      } else if (VAR_6 == '-') {
   VAR_7 = '_';
      }
      for (; *VAR_4 && (*VAR_4 & VAR_1) != VAR_6 &&
     (*VAR_4 & VAR_1) != VAR_7; VAR_4++)
   continue;
      if (!*VAR_4) {
                 return (VAR_0);
      }
  } else {
      return (VAR_0);
  }
     }
 }
    }
    return (VAR_2);
}
