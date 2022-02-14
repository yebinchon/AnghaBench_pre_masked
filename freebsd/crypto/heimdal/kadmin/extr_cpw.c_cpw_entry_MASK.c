
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd_options {char* key_string; scalar_t__ password_string; scalar_t__ random_password_flag; scalar_t__ random_key_flag; } ;
struct cpw_entry_data {int * key_data; scalar_t__ password; scalar_t__ random_password; scalar_t__ random_key; } ;
typedef int krb5_key_data ;
typedef scalar_t__ krb5_error_code ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*,struct cpw_entry_data*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,int *,char const**) ;
 int VAR_2 ;

int
FUNC_4(struct passwd_options *VAR_3, int VAR_4, char **VAR_5)
{
    krb5_error_code VAR_6 = 0;
    int VAR_7;
    struct cpw_entry_data VAR_8;
    int VAR_9;
    krb5_key_data VAR_10[3];

    VAR_8.random_key = VAR_3->random_key_flag;
    VAR_8.random_password = VAR_3->random_password_flag;
    VAR_8.password = VAR_3->password_string;
    VAR_8.key_data = ((void*)0);

    VAR_9 = 0;
    if (VAR_8.random_key)
 ++VAR_9;
    if (VAR_8.random_password)
 ++VAR_9;
    if (VAR_8.password)
 ++VAR_9;
    if (VAR_3->key_string)
 ++VAR_9;

    if (VAR_9 > 1) {
 FUNC_1 (VAR_2, "give only one of "
  "--random-key, --random-password, --password, --key\n");
 return 1;
    }

    if (VAR_3->key_string) {
 const char *VAR_11;

 if (FUNC_3 (VAR_3->key_string, VAR_10, &VAR_11)) {
     FUNC_1 (VAR_2, "failed parsing key \"%s\": %s\n",
       VAR_3->key_string, VAR_11);
     return 1;
 }
 VAR_8.key_data = VAR_10;
    }

    for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 VAR_6 = FUNC_0(VAR_5[VAR_7], VAR_0, "cpw", &VAR_8);

    if (VAR_8.key_data) {
 int16_t VAR_12;
 FUNC_2 (VAR_1, &VAR_12, VAR_10);
    }

    return VAR_6 != 0;
}
