
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spwd {char* sp_pwdp; } ;
struct passwd {char* pw_name; char* pw_passwd; } ;
struct authorization {char* a_password; } ;
typedef int Char ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (struct passwd*,char*,char*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct authorization* FUNC_7 (int ) ;
 char* FUNC_8 (char*) ;
 struct spwd* FUNC_9 (char*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (int ,char*,int *,int *,char*,int ,int ,int ,int *) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (char*) ;
 int * FUNC_17 (int ) ;
 char* FUNC_18 (char*) ;
 struct passwd* FUNC_19 (int ) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (char) ;

__attribute__((used)) static void
FUNC_22(void)
{


    int VAR_8;
    char *VAR_9 = ((void*)0);
    struct passwd *VAR_10;
    if ((VAR_10 = FUNC_19(VAR_6)) != ((void*)0))
 VAR_9 = VAR_10->pw_passwd;




    if (VAR_9 == ((void*)0)) {
 FUNC_6();

 return;
    }

    FUNC_13(0);
    FUNC_21('\n');
    for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
 const char *VAR_11;
 char *VAR_12;
 VAR_12 = FUNC_18("Password:");

 VAR_11 = FUNC_0(VAR_12, VAR_9);
 if ((VAR_11 && FUNC_15(VAR_11, VAR_9) == 0)
     ) {
     (void) FUNC_12(VAR_12, 0, FUNC_16(VAR_12));
     if (VAR_1 && !VAR_7) {
  (void) FUNC_3();
  FUNC_2();
  FUNC_1();
  FUNC_4();
     }
     VAR_7 = 0;
     return;
 }
 FUNC_20(FUNC_0(22, 2, "\nIncorrect passwd for %s\n"), VAR_10->pw_name);
    }

    FUNC_6();
}
