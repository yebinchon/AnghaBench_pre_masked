
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; } ;
struct passwd {scalar_t__ pw_uid; } ;
typedef int krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_boolean ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_12(krb5_context VAR_8,
        const char *VAR_9,
        struct passwd *VAR_10,
        krb5_principal VAR_11,
        krb5_boolean *VAR_12)
{
    FILE *VAR_13;
    char VAR_14[VAR_0];
    krb5_error_code VAR_15;
    struct stat VAR_16;

    *VAR_12 = VAR_4;

    VAR_13 = FUNC_5 (VAR_9, "r");
    if (VAR_13 == ((void*)0))
 return VAR_7;
    FUNC_10(VAR_13);


    if (FUNC_6(FUNC_4(VAR_13), &VAR_16) != 0) {
 FUNC_1 (VAR_13);
 return VAR_7;
    }
    if (FUNC_0(VAR_16.st_mode)) {
 FUNC_1 (VAR_13);
 return VAR_2;
    }
    if (VAR_16.st_uid != VAR_10->pw_uid && VAR_16.st_uid != 0) {
 FUNC_1 (VAR_13);
 return VAR_1;
    }
    if ((VAR_16.st_mode & (VAR_5 | VAR_6)) != 0) {
 FUNC_1 (VAR_13);
 return VAR_1;
    }

    while (FUNC_3 (VAR_14, sizeof(VAR_14), VAR_13) != ((void*)0)) {
 krb5_principal VAR_17;
 char *VAR_18 = VAR_14 + FUNC_11(VAR_14, "\n");

 if(*VAR_18 != '\n') {
     int VAR_19;
     VAR_19 = FUNC_2(VAR_13);
     if(VAR_19 != VAR_3) {
  while(VAR_19 != VAR_3 && VAR_19 != '\n')
      VAR_19 = FUNC_2(VAR_13);

  continue;
     }
 }
 *VAR_18 = '\0';
 VAR_15 = FUNC_8 (VAR_8, VAR_14, &VAR_17);
 if (VAR_15)
     continue;
 *VAR_12 = FUNC_9 (VAR_8, VAR_11, VAR_17);
 FUNC_7 (VAR_8, VAR_17);
 if (*VAR_12) {
     FUNC_1 (VAR_13);
     return 0;
 }
    }
    FUNC_1 (VAR_13);
    return 0;
}
