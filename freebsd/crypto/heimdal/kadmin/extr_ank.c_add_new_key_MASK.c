
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct add_options {char* key_string; int pw_expiration_time_string; int expiration_time_string; int attributes_string; int max_renewable_life_string; int max_ticket_life_string; int password_string; int use_defaults_flag; int random_password_flag; int random_key_flag; } ;
typedef int krb5_key_data ;
typedef scalar_t__ krb5_error_code ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (char*,int ,int ,int ,int ,int *,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_4 (char*,int *,char const**) ;
 int VAR_2 ;

int
FUNC_5(struct add_options *VAR_3, int VAR_4, char **VAR_5)
{
    krb5_error_code VAR_6 = 0;
    int VAR_7;
    int VAR_8;
    krb5_key_data VAR_9[3];
    krb5_key_data *VAR_10 = ((void*)0);

    VAR_8 = 0;
    if (VAR_3->random_key_flag)
 ++VAR_8;
    if (VAR_3->random_password_flag)
 ++VAR_8;
    if (VAR_3->password_string)
 ++VAR_8;
    if (VAR_3->key_string)
 ++VAR_8;

    if (VAR_8 > 1) {
 FUNC_1 (VAR_2, "give only one of "
  "--random-key, --random-password, --password, --key\n");
 return 1;
    }

    if (VAR_3->key_string) {
 const char *VAR_11;

 if (FUNC_4 (VAR_3->key_string, VAR_9, &VAR_11)) {
     FUNC_1 (VAR_2, "failed parsing key \"%s\": %s\n",
       VAR_3->key_string, VAR_11);
     return 1;
 }
 VAR_10 = VAR_9;
    }

    for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
 VAR_6 = FUNC_0 (VAR_5[VAR_7],
     VAR_3->random_key_flag,
     VAR_3->random_password_flag,
     VAR_3->use_defaults_flag,
     VAR_3->password_string,
     VAR_10,
     VAR_3->max_ticket_life_string,
     VAR_3->max_renewable_life_string,
     VAR_3->attributes_string,
     VAR_3->expiration_time_string,
     VAR_3->pw_expiration_time_string);
 if (VAR_6) {
     FUNC_3 (VAR_0, VAR_6, "adding %s", VAR_5[VAR_7]);
     break;
 }
    }
    if (VAR_10) {
 int16_t VAR_12 = 3;
 FUNC_2 (VAR_1, &VAR_12, VAR_9);
    }
    return VAR_6 != 0;
}
