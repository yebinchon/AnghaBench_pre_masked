
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pwbuf ;
typedef int krb5_principal ;
typedef char krb5_keyblock ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_7__ {unsigned int max_life; unsigned int max_renewable_life; int attributes; int kvno; int principal; } ;
typedef TYPE_1__ kadm5_principal_ent_rec ;
typedef int ent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int,char const*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int ,int ,char**,int*) ;
 int VAR_7 ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,int ,char**) ;
 int FUNC_8 (int ,scalar_t__,char*,...) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static kadm5_ret_t
FUNC_11(krb5_principal VAR_8,
      unsigned VAR_9,
      unsigned VAR_10,
      uint32_t VAR_11)
{
    kadm5_principal_ent_rec VAR_12;
    kadm5_ret_t VAR_13;
    int VAR_14 = 0;
    krb5_keyblock *VAR_15;
    int VAR_16, VAR_17;
    char *VAR_18;
    const char *VAR_19;
    char VAR_20[512];

    FUNC_10(VAR_20, sizeof(VAR_20));
    VAR_19 = VAR_20;

    VAR_13 = FUNC_7(VAR_6, VAR_8, &VAR_18);
    if (VAR_13) {
 FUNC_8(VAR_6, VAR_13, "failed to unparse principal name");
 return VAR_13;
    }

    FUNC_9(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.principal = VAR_8;
    VAR_14 |= VAR_4;
    if (VAR_9) {
 VAR_12.max_life = VAR_9;
 VAR_14 |= VAR_2;
    }
    if (VAR_10) {
 VAR_12.max_renewable_life = VAR_10;
 VAR_14 |= VAR_3;
    }
    VAR_12.attributes |= VAR_11 | VAR_5;
    VAR_14 |= VAR_0;


    VAR_13 = FUNC_1(VAR_7, &VAR_12, VAR_14, VAR_19);
    if(VAR_13) {
 FUNC_8(VAR_6, VAR_13, "create_random_entry(%s): randkey failed",
    VAR_18);
 goto out;
    }


    VAR_13 = FUNC_5(VAR_7, VAR_8, &VAR_15, &VAR_16);
    if(VAR_13) {
 FUNC_8(VAR_6, VAR_13, "create_random_entry(%s): randkey failed",
    VAR_18);
 goto out;
    }
    for(VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
 FUNC_6(VAR_6, &VAR_15[VAR_17]);
    FUNC_0(VAR_15);
    VAR_13 = FUNC_3(VAR_7, VAR_8, &VAR_12,
         VAR_4 | VAR_0);
    if(VAR_13) {
 FUNC_8(VAR_6, VAR_13, "create_random_entry(%s): "
    "unable to get principal", VAR_18);
 goto out;
    }
    VAR_12.attributes &= (~VAR_5);
    VAR_12.kvno = 1;
    VAR_13 = FUNC_4(VAR_7, &VAR_12,
     VAR_0|VAR_1);
    FUNC_2 (VAR_7, &VAR_12);
    if(VAR_13) {
 FUNC_8(VAR_6, VAR_13, "create_random_entry(%s): "
    "unable to modify principal", VAR_18);
 goto out;
    }
 out:
    FUNC_0(VAR_18);
    return VAR_13;
}
