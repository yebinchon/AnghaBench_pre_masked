
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int const*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,char) ;

int
FUNC_5(const Char *VAR_3, const Char *VAR_4, const Char **VAR_5, int VAR_6)
{
    Char VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;
    const Char *VAR_12, *VAR_13;

    for (VAR_13 = VAR_3;; VAR_3 = VAR_13) {
 VAR_7 = *VAR_13++ & VAR_2;
 VAR_8 = *VAR_4++ & VAR_2;
 switch (VAR_8) {
 case '\0':
     *VAR_5 = VAR_3;
     return (VAR_7 == '\0' ? 2 : 1);
 case '?':
     if (VAR_7 == 0)
  return (0);
     break;
 case '*':
     if (!*VAR_4) {
  *VAR_5 = FUNC_0(VAR_3);
  return (2);
     }
     VAR_12 = ((void*)0);

     for (;;) {
  switch(FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6)) {
  case 0:
      break;
  case 1:
      VAR_12 = *VAR_5;
      break;
  case 2:
      return 2;
  default:
      FUNC_2();
  }
  VAR_7 = *VAR_3++ & VAR_2;
  if (!VAR_7)
      break;
     }

     if (VAR_12) {
  *VAR_5 = VAR_12;
  return 1;
     }
     else
  return 0;

 case '[':
     VAR_10 = 0;
     if ((VAR_11 = (*VAR_4 == '^')) != 0)
  VAR_4++;
     while ((VAR_9 = *VAR_4++ & VAR_2) != '\0') {
  if (VAR_9 == ']')
      break;
  if (VAR_10)
      continue;
  if (*VAR_4 == '-' && VAR_4[1] != ']') {
      Char VAR_14;
      VAR_4++;
      VAR_14 = *VAR_4++ & VAR_2;
      VAR_10 = (FUNC_3(VAR_7, VAR_14, 0) <= 0 &&
   FUNC_3(VAR_9, VAR_7, 0) <= 0);
  }
  else
      VAR_10 = (VAR_7 == VAR_9);
     }
     if (VAR_9 == '\0')
  FUNC_4(VAR_1 | VAR_0, ']');
     if ((!VAR_10) && (VAR_7 == '\0'))
  return (0);
     if (VAR_10 == VAR_11)
  return (0);
     break;
 default:
     if (VAR_6 ? VAR_8 != VAR_7
  : FUNC_1(VAR_8) != FUNC_1(VAR_7))
  return (0);
     break;
 }
    }
}
