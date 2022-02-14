
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_principal ;
struct TYPE_3__ {int length; char* data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int classes ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int,char*,char*,int *) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,size_t,char*) ;
 size_t FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char*,size_t) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8 (krb5_context VAR_0,
      krb5_principal VAR_1,
      krb5_data *VAR_2,
      const char *VAR_3,
      char *VAR_4,
      size_t VAR_5)
{
    const char *VAR_6[] = {
 "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
 "abcdefghijklmnopqrstuvwxyz",
 "1234567890",
 "!@#$%^&*()/?<>,.{[]}\\|'~`\" "
    };
    int VAR_7 = 0, VAR_8;
    size_t VAR_9, VAR_10;
    char *VAR_11;

    VAR_8 = FUNC_1(VAR_0, ((void*)0), 3,
           "password_quality",
           "min_classes",
           ((void*)0));

    VAR_10 = VAR_2->length + 1;
    VAR_11 = FUNC_2(VAR_10);
    if (VAR_11 == ((void*)0)) {
 FUNC_6(VAR_4, "out of memory", VAR_5);
 return 1;
    }
    FUNC_6(VAR_11, VAR_2->data, VAR_10);
    VAR_10 = FUNC_7(VAR_11);

    for (VAR_9 = 0; VAR_9 < sizeof(VAR_6)/sizeof(VAR_6[0]); VAR_9++) {
 if (FUNC_5(VAR_11, VAR_6[VAR_9]) < VAR_10)
     VAR_7++;
    }
    FUNC_3(VAR_11, 0, VAR_2->length + 1);
    FUNC_0(VAR_11);
    if (VAR_7 < VAR_8) {
 FUNC_4(VAR_4, VAR_5,
     "Password doesn't meet complexity requirement.\n"
     "Add more characters from the following classes:\n"
     "1. English uppercase characters (A through Z)\n"
     "2. English lowercase characters (a through z)\n"
     "3. Base 10 digits (0 through 9)\n"
     "4. Nonalphanumeric characters (e.g., !, $, #, %%)");
 return 1;
    }
    return 0;
}
