
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char eChar ;
typedef int Char ;


 char VAR_0 ;
 char FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char*,char) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char) ;

__attribute__((used)) static void
FUNC_8(void)
{
    eChar VAR_7;

    VAR_7 = FUNC_0(0);
    if (VAR_7 == ':') {
 do {
     VAR_7 = FUNC_0(0), VAR_5 = 1, VAR_4 = 0;
     if (VAR_7 == 'g' || VAR_7 == 'a') {
  if (VAR_7 == 'g')
      VAR_5 = VAR_3;
  else
      VAR_4 = 1;
  VAR_7 = FUNC_0(0);
     }
     if ((VAR_7 == 'g' && VAR_5 != VAR_3) ||
  (VAR_7 == 'a' && VAR_4 == 0)) {
  if (VAR_7 == 'g')
      VAR_5 = VAR_3;
  else
      VAR_4 = 1;
  VAR_7 = FUNC_0(0);
     }

     if (VAR_7 == 's') {
  int VAR_8 = 2;
  eChar VAR_9 = FUNC_0(0);
  FUNC_2(&VAR_6, (Char) VAR_7);
  FUNC_2(&VAR_6, (Char) VAR_9);

  if (VAR_9 == VAR_0 || !VAR_9 || FUNC_4(VAR_9)
      || FUNC_1(VAR_9) || FUNC_3(" \t\n", VAR_9)) {
      FUNC_5(VAR_2);
      break;
  }
  while ((VAR_7 = FUNC_0(0)) != VAR_0) {
      FUNC_2(&VAR_6, (Char) VAR_7);
      if(VAR_7 == VAR_9) VAR_8--;
      if(!VAR_8) break;
  }
  if(VAR_8) {
      FUNC_5(VAR_2);
      break;
  }
  continue;
     }
     if (!FUNC_3("luhtrqxes", VAR_7))
  FUNC_6(VAR_1, (int)VAR_7);
     FUNC_2(&VAR_6, (Char) VAR_7);
     if (VAR_7 == 'q')
  VAR_5 = VAR_3;
 }
 while ((VAR_7 = FUNC_0(0)) == ':');
 FUNC_7(VAR_7);
    }
    else
 FUNC_7(VAR_7);
}
