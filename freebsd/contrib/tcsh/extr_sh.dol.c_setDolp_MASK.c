
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int ptrdiff_t ;
struct TYPE_2__ {size_t len; char* s; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 char* VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 char* VAR_7 ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (size_t) ;

__attribute__((used)) static void
FUNC_16(Char *VAR_9)
{
    Char *VAR_10;
    size_t VAR_11;

    if (VAR_6.len == 0 || VAR_5 == 0) {
 VAR_7 = VAR_9;
 return;
    }
    VAR_9 = FUNC_5(VAR_9);
    for (VAR_11 = 0; VAR_11 < VAR_6.len; VAR_11++) {
 int VAR_12 = 0;


 if(VAR_6.s[VAR_11] == 's') {
     Char VAR_13;
     Char *VAR_14, *VAR_15, *VAR_16;
     size_t VAR_17 = 0, VAR_18 = 0;

     VAR_13 = VAR_6.s[++VAR_11];
     if (!VAR_13 || FUNC_10(VAR_13)
  || FUNC_0(VAR_13) || FUNC_8(" \t\n", VAR_13)) {
  FUNC_11(VAR_0);
  break;
     }
     VAR_14 = &VAR_6.s[++VAR_11];
     while(VAR_6.s[VAR_11] != VAR_13 && VAR_6.s[++VAR_11]) {
  VAR_17++;
     }
     VAR_6.s[VAR_11] = 0;
     VAR_15 = &VAR_6.s[++VAR_11];
     while(VAR_6.s[VAR_11] != VAR_13 && VAR_6.s[++VAR_11]) {
  VAR_18++;
     }
     VAR_6.s[VAR_11] = 0;

     FUNC_13(VAR_14);
     FUNC_13(VAR_15);
     FUNC_13(VAR_9);
     VAR_10 = VAR_9;
     do {
  VAR_10 = FUNC_6(VAR_10, VAR_14);
  if (VAR_10) {
      ptrdiff_t VAR_19 = VAR_10 - VAR_9;
      size_t VAR_20 = (FUNC_3(VAR_9) + 1 - VAR_17 + VAR_18);
      VAR_16 = FUNC_15(VAR_20 * sizeof(Char));
      (void) FUNC_4(VAR_16, VAR_9, VAR_19);
      (void) FUNC_2(VAR_16 + VAR_19, VAR_15);
      (void) FUNC_2(VAR_16 + VAR_19 + VAR_18, VAR_10 + VAR_17);

      FUNC_14(VAR_9);
      VAR_10 = VAR_9 = VAR_16;
      VAR_9[--VAR_20] = '\0';
      VAR_12 = 1;
      if (VAR_19 >= (ssize_t)VAR_20)
   break;
  } else {

      break;
  }
     }
     while (VAR_4 != 0);



     VAR_6.s[VAR_11] = VAR_15[-1] = (Char) VAR_13;
        } else {

     do {
  if ((VAR_10 = FUNC_9(VAR_9, VAR_6.s[VAR_11])) != ((void*)0)) {
      VAR_12 = 1;
      if (FUNC_1(VAR_9, VAR_10) == 0) {
   FUNC_14(VAR_9);
   VAR_9 = VAR_10;
   break;
      }
      else {
   FUNC_14(VAR_9);
   VAR_9 = VAR_10;
      }
  }
  else
      break;
     }
     while (VAR_4 != 0);
 }
 if (VAR_12 && VAR_5 != VAR_2)
     VAR_5--;




    }

    FUNC_7(VAR_9);

    VAR_7 = VAR_3;
    if (VAR_8)
 FUNC_12(VAR_1);
}
