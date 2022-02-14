
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int *,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (char*,int) ;
 int VAR_11 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_12, char **VAR_13)
{
 char *VAR_14, VAR_15[VAR_2];
 size_t VAR_16;
 int VAR_17, VAR_18, VAR_19;

 while ((VAR_19 = FUNC_8(VAR_12, VAR_13, "_nps:V", VAR_5, ((void*)0))) !=
     -1) {
  switch (VAR_19) {
  case '_':
   VAR_11 = 1;
   break;
  case 'n':
   VAR_11 = 0;
   break;
  case 'p':
   VAR_6 = 1;
   break;
  case 's':
   if ((VAR_4 = FUNC_7(VAR_7)) < 0)
    FUNC_4(VAR_1, "unsupported format: %s",
        VAR_7);
   break;
  case 'V':
   FUNC_15();

  case 128:
  default:
   FUNC_14();

  }
 }

 VAR_13 += VAR_8;
 VAR_12 -= VAR_8;

 if (FUNC_1() < 0)
  FUNC_3(VAR_1, "failed to limit stdio rights");
 if (FUNC_0() < 0)
  FUNC_3(VAR_1, "failed to enter capability mode");

 if (*VAR_13 != ((void*)0)) {
  for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
   if ((VAR_14 = FUNC_2(VAR_13[VAR_18])) == ((void*)0))
    FUNC_10("%s\n", VAR_13[VAR_18]);
   else
    FUNC_10("%s\n", VAR_14);
  }
 } else {
  VAR_16 = 0;
  for (;;) {
   FUNC_12(VAR_10, ((void*)0), VAR_3, 0);
   VAR_17 = FUNC_6(VAR_9);
   if (VAR_17 == VAR_0 || !(FUNC_9(VAR_17) || FUNC_13(".$_", VAR_17))) {
    if (VAR_16 > 0) {
     VAR_15[VAR_16] = '\0';
     if ((VAR_14 = FUNC_2(VAR_15)) == ((void*)0))
      FUNC_10("%s", VAR_15);
     else
      FUNC_10("%s", VAR_14);
     VAR_16 = 0;
    }
    if (VAR_17 == VAR_0)
     break;
    FUNC_11(VAR_17);
   } else {
    if ((size_t) VAR_16 >= sizeof(VAR_15) - 1)
     FUNC_16("buffer overflowed");
    else
     VAR_15[VAR_16++] = (char) VAR_17;
   }

  }
 }

 FUNC_5(0);
}
