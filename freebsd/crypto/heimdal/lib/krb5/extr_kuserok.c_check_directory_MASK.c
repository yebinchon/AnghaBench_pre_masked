
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_uid; scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct passwd {scalar_t__ pw_uid; } ;
struct dirent {char* d_name; } ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
typedef int filename ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,char*,struct passwd*,int ,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int * FUNC_6 (char const*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_11(krb5_context VAR_8,
  const char *VAR_9,
  struct passwd *VAR_10,
  krb5_principal VAR_11,
  krb5_boolean *VAR_12)
{
    DIR *VAR_13;
    struct dirent *VAR_14;
    char VAR_15[VAR_3];
    krb5_error_code VAR_16 = 0;
    struct stat VAR_17;

    *VAR_12 = VAR_2;

    if(FUNC_5(VAR_9, &VAR_17) < 0)
 return VAR_7;

    if (!FUNC_0(VAR_17.st_mode))
 return VAR_1;

    if (VAR_17.st_uid != VAR_10->pw_uid && VAR_17.st_uid != 0)
 return VAR_0;
    if ((VAR_17.st_mode & (VAR_4 | VAR_5)) != 0)
 return VAR_0;

    if((VAR_13 = FUNC_6(VAR_9)) == ((void*)0))
 return VAR_7;

    {
 int VAR_18;
 struct stat VAR_19;

 VAR_18 = FUNC_3(VAR_13);
 if(FUNC_4(VAR_18, &VAR_19) < 0) {
     FUNC_2(VAR_13);
     return VAR_7;
 }
 if(VAR_17.st_dev != VAR_19 || VAR_17.st_ino != VAR_19) {
     FUNC_2(VAR_13);
     return VAR_0;
 }
    }

    while((VAR_14 = FUNC_7(VAR_13)) != ((void*)0)) {
 if(FUNC_9(VAR_14->d_name, ".") == 0 ||
    FUNC_9(VAR_14->d_name, "..") == 0 ||
    VAR_14->d_name[0] == '#' ||
    VAR_14->d_name[FUNC_10(VAR_14->d_name) - 1] == '~')
     continue;
 FUNC_8(VAR_15, sizeof(VAR_15), "%s/%s", VAR_9, VAR_14->d_name);
 VAR_16 = FUNC_1(VAR_8, VAR_15, VAR_10, VAR_11, VAR_12);
 if(VAR_16 == 0 && *VAR_12 == VAR_6)
     break;
 VAR_16 = 0;
    }
    FUNC_2(VAR_13);
    return VAR_16;
}
