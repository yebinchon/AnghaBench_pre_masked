
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Lst ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*,int ,int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (char const*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,char*,...) ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char*) ;

void
FUNC_13(const char *VAR_5, Lst VAR_6, Lst VAR_7)
{
    const char *VAR_8;

    if (FUNC_0(VAR_0)) {
 FUNC_10(VAR_3, "Expanding \"%s\"... ", VAR_5);
    }

    VAR_8 = FUNC_11(VAR_5, '{');
    if (VAR_8) {
 FUNC_1(VAR_5, VAR_8, VAR_6, VAR_7);
    } else {
 VAR_8 = FUNC_11(VAR_5, '/');
 if (VAR_8) {




     for (VAR_8 = VAR_5; *VAR_8; VAR_8++) {
  if (*VAR_8 == '?' || *VAR_8 == '[' || *VAR_8 == '*' || *VAR_8 == '{') {
      break;
  }
     }
     if (*VAR_8 == '{') {



  FUNC_1(VAR_5, VAR_8, VAR_6, VAR_7);
  return;
     } else if (*VAR_8 != '\0') {



  char *VAR_9;

  while (VAR_8 > VAR_5 && *VAR_8 != '/') {
      VAR_8--;
  }
  if (VAR_8 != VAR_5) {
      char VAR_10;




      VAR_10 = VAR_8[1];
      ((char *)FUNC_9(VAR_8))[1] = '\0';
      VAR_9 = FUNC_5(VAR_5, VAR_6);
      ((char *)FUNC_9(VAR_8))[1] = VAR_10;







      if (VAR_9 != ((void*)0)) {
   char *VAR_11 = &VAR_9[FUNC_12(VAR_9) - 1];
   if (*VAR_11 == '/')
       *VAR_11 = '\0';
   VAR_6 = FUNC_8(VAR_2);
   (void)FUNC_4(VAR_6, VAR_9);
   FUNC_2(VAR_8+1, VAR_6, VAR_7);
   FUNC_6(VAR_6, ((void*)0));
      }
  } else {



      FUNC_2(VAR_5, VAR_6, VAR_7);
  }
     } else {



  FUNC_2(VAR_5, VAR_6, VAR_7);
     }
 } else {



     FUNC_3(VAR_5, VAR_4, VAR_7);




     FUNC_2(VAR_5, VAR_6, VAR_7);
 }
    }
    if (FUNC_0(VAR_0)) {
 FUNC_7(VAR_7, VAR_1, ((void*)0));
 FUNC_10(VAR_3, "\n");
    }
}
