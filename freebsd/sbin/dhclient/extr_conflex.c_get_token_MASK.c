
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* VAR_5 ;

__attribute__((used)) static int
FUNC_9(FILE *VAR_6)
{
 int VAR_7, VAR_8;
 static char VAR_9[2];
 int VAR_10, VAR_11;

 do {
  VAR_10 = VAR_3;
  VAR_11 = VAR_4;

  VAR_7 = FUNC_0(VAR_6);

  if (!(VAR_7 == '\n' && VAR_0) && FUNC_2(VAR_7) && FUNC_4(VAR_7))
   continue;
  if (VAR_7 == '#') {
   FUNC_8(VAR_6);
   continue;
  }
  if (VAR_7 == '"') {
   VAR_2 = VAR_10;
   VAR_1 = VAR_11;
   VAR_8 = FUNC_7(VAR_6);
   break;
  }
  if ((FUNC_2(VAR_7) && FUNC_3(VAR_7)) || VAR_7 == '-') {
   VAR_2 = VAR_10;
   VAR_1 = VAR_11;
   VAR_8 = FUNC_6(VAR_7, VAR_6);
   break;
  } else if (FUNC_2(VAR_7) && FUNC_1(VAR_7)) {
   VAR_2 = VAR_10;
   VAR_1 = VAR_11;
   VAR_8 = FUNC_5(VAR_7, VAR_6);
   break;
  } else {
   VAR_2 = VAR_10;
   VAR_1 = VAR_11;
   VAR_9[0] = VAR_7;
   VAR_9[1] = 0;
   VAR_5 = VAR_9;
   VAR_8 = VAR_7;
   break;
  }
 } while (1);
 return (VAR_8);
}
