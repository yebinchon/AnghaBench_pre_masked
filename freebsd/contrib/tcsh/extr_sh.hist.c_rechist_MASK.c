
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {scalar_t__* vec; } ;
struct stat {int st_mode; int st_gid; int st_uid; } ;
typedef int path ;
typedef int jmp_buf_t ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *,int ,int *,int *) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* const VAR_4 ;

 char* const VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;

 char* const VAR_9 ;
 int * VAR_10 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stat) ;
 struct varent* FUNC_5 (char* const) ;
 int FUNC_6 (char*,int (*) (char*)) ;
 int FUNC_7 (char*) ;
 int VAR_11 ;
 int FUNC_8 (char**,int *) ;
 scalar_t__ FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,int) ;
 char* FUNC_17 () ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ,struct stat*) ;
 char* FUNC_23 (int ) ;
 char* FUNC_24 (char* const) ;
 int FUNC_25 (int) ;
 int FUNC_26 (char*,int) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (char*,int,char*,char*,char*) ;

void
FUNC_29(Char *VAR_12, int VAR_13)
{
    Char *VAR_14, *VAR_15;
    int VAR_16, VAR_17, VAR_18;
    struct varent *VAR_19;
    char VAR_20[VAR_1];
    struct stat VAR_21;
    static Char *VAR_22[] = {129, 128, 0, 0};

    if (VAR_12 == ((void*)0) && !VAR_13)
 return;




    if (((VAR_14 = FUNC_24(VAR_9)) == VAR_3) &&
 ((VAR_14 = FUNC_24(129)) == VAR_3))
 VAR_14 = VAR_7;


    if (VAR_12 == ((void*)0)) {
 if ((VAR_12 = FUNC_24(VAR_4)) == VAR_3)
     VAR_12 = FUNC_2(FUNC_24(VAR_5), &VAR_10[1]);
 else
     VAR_12 = FUNC_1(VAR_12);
    }
    else
 VAR_12 = FUNC_15(VAR_12, VAR_0);
    FUNC_6(VAR_12, FUNC_27);
    VAR_18 = VAR_11;
    VAR_11 = 0;
    if ((VAR_19 = FUNC_5(VAR_9)) != ((void*)0) && VAR_19->vec != ((void*)0)) {
 size_t VAR_23;
 int VAR_24 = 0, VAR_25 = 0;

 for (VAR_23 = 1; VAR_19->vec[VAR_23]; VAR_23++) {
     if (FUNC_11(VAR_19->vec[VAR_23], VAR_8))
  VAR_24++;
     if (FUNC_11(VAR_19->vec[VAR_23], VAR_6))
  VAR_25++;
 }

 if (VAR_24) {
     jmp_buf_t VAR_26;
     if (VAR_25) {

  char *VAR_27 = FUNC_23(FUNC_21(VAR_12));
  FUNC_6(VAR_27, FUNC_27);

  if ((FUNC_9(VAR_27, 100) == 0))
      FUNC_6(VAR_27, FUNC_10);

     }
     FUNC_14(VAR_26);
     if (FUNC_20())
  FUNC_16(VAR_12, 1);
     FUNC_19(VAR_26);
 }
    }
    VAR_15 = FUNC_17();
    FUNC_28(VAR_20, sizeof(VAR_20), "%S.%S", VAR_12, VAR_15);
    FUNC_27(VAR_15);

    VAR_16 = FUNC_26(VAR_20, 0600);
    if (VAR_16 == -1) {
 VAR_11 = VAR_18;
 FUNC_7(VAR_12);
 return;
    }


    if (FUNC_22(FUNC_21(VAR_12), &VAR_21) != -1) {
 FUNC_3(FUNC_13(VAR_16, VAR_21.st_uid, VAR_21.st_gid));
 FUNC_3(FUNC_12(VAR_16, VAR_21.st_mode));
    }



    VAR_17 = VAR_2;
    VAR_2 = VAR_16;
    VAR_22[2] = VAR_14;
    FUNC_8(VAR_22, ((void*)0));
    FUNC_25(VAR_16);
    VAR_2 = VAR_17;
    VAR_11 = VAR_18;

    (void)FUNC_18(VAR_20, FUNC_21(VAR_12));



    FUNC_7(VAR_12);
}
