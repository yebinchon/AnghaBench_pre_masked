
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {char** vec; } ;
struct Strbuf {char* s; int len; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct Strbuf VAR_9 ;
 int FUNC_0 (struct Strbuf*,char*) ;
 int FUNC_1 (struct Strbuf*,char) ;
 int FUNC_2 (struct Strbuf*) ;
 scalar_t__ FUNC_3 (char*,char) ;
 size_t FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 struct varent* FUNC_6 (int ) ;
 char* FUNC_7 () ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int (*) (char*)) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*) ;
 char* FUNC_13 (char*,int) ;
 int VAR_11 ;
 char* FUNC_14 (char*,int ) ;
 int FUNC_15 (int ,char*) ;
 int VAR_12 ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (int ,char*,int ) ;
 int FUNC_18 (int) ;
 scalar_t__ VAR_13 ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static Char *
FUNC_21(Char *VAR_14, int VAR_15)
{
    Char *VAR_16;
    struct varent *VAR_17;
    int VAR_18;

    VAR_14 = VAR_15 ? FUNC_5(VAR_14) : FUNC_14(VAR_14, VAR_3);
    FUNC_10(VAR_14, FUNC_20);
    VAR_16 = FUNC_13(VAR_14, VAR_13 == VAR_8);
    if (FUNC_8(FUNC_16(VAR_16)) >= 0) {
        FUNC_11(VAR_14);
        return FUNC_12(VAR_16);
    }
    else {
        FUNC_20(VAR_16);
        if (FUNC_8(FUNC_16(VAR_14)) >= 0) {
     FUNC_9(VAR_14);
     FUNC_11(VAR_14);
     return FUNC_12(VAR_14);
 }
 else if (VAR_11 != VAR_0 && VAR_11 != VAR_1) {
     int VAR_19;

     VAR_19 = VAR_11;
     FUNC_17(VAR_2, FUNC_16(VAR_14), FUNC_18(VAR_19));
 }
 VAR_18 = VAR_11;
    }

    if (VAR_14[0] != '/' && !FUNC_15(VAR_6, VAR_14) && !FUNC_15(VAR_5, VAR_14)
 && (VAR_17 = FUNC_6(VAR_4)) && VAR_17->vec != ((void*)0)) {
 struct Strbuf VAR_20 = VAR_9;
 Char **VAR_21;

 for (VAR_21 = VAR_17->vec; *VAR_21; VAR_21++) {
     size_t VAR_22 = FUNC_4(*VAR_21);
     VAR_20.len = 0;
     if (VAR_22 > 0) {
  FUNC_0(&VAR_20, *VAR_21);
  if ((*VAR_21)[VAR_22 - 1] != '/')
      FUNC_1(&VAR_20, '/');
     }
     FUNC_0(&VAR_20, VAR_14);
     FUNC_2(&VAR_20);




     VAR_16 = FUNC_13(VAR_20.s, VAR_13 == VAR_8 ||
       VAR_13 == VAR_7);
     if (FUNC_8(FUNC_16(VAR_16)) >= 0) {
  VAR_12 = 1;
  FUNC_20(VAR_20.s);
  FUNC_11(VAR_14);
  return FUNC_12(VAR_16);
     }
     else if (FUNC_8(FUNC_16(VAR_14)) >= 0) {
  VAR_12 = 1;
  FUNC_20(VAR_16);
  FUNC_20(VAR_20.s);
  FUNC_9(VAR_14);
  FUNC_11(VAR_14);
  return FUNC_12(VAR_14);
     }
     FUNC_20(VAR_16);
 }
 FUNC_20(VAR_20.s);
    }
    VAR_16 = FUNC_19(VAR_14);
    if ((VAR_16[0] == '/' || VAR_16[0] == '.') && FUNC_8(FUNC_16(VAR_16)) >= 0) {
 FUNC_11(VAR_14);
 VAR_14 = FUNC_5(VAR_16);
 VAR_12 = 1;
 return FUNC_12(VAR_14);
    }




    if (!VAR_10)
 FUNC_17(VAR_2, FUNC_16(VAR_14), FUNC_18(VAR_18));
    FUNC_11(VAR_14);
    return (((void*)0));
}
