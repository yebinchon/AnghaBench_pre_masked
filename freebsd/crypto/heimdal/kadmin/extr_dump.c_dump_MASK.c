
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dump_options {scalar_t__ decrypt_flag; } ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {int (* hdb_close ) (int ,TYPE_1__*) ;scalar_t__ (* hdb_open ) (int ,TYPE_1__*,int ,int) ;} ;
typedef TYPE_1__ HDB ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int ,int) ;
 int FUNC_7 (int ,TYPE_1__*) ;

int
FUNC_8(struct dump_options *VAR_8, int VAR_9, char **VAR_10)
{
    krb5_error_code VAR_11;
    FILE *VAR_12;
    HDB *VAR_13 = ((void*)0);

    if(!VAR_6) {
 FUNC_5(VAR_2, "dump is only available in local (-l) mode");
 return 0;
    }

    VAR_13 = FUNC_0(VAR_5);

    if(VAR_9 == 0)
 VAR_12 = VAR_7;
    else
 VAR_12 = FUNC_2(VAR_10[0], "w");

    if(VAR_12 == ((void*)0)) {
 FUNC_4(VAR_2, VAR_3, "open: %s", VAR_10[0]);
 goto out;
    }
    VAR_11 = VAR_13->hdb_open(VAR_2, VAR_13, VAR_1, 0600);
    if(VAR_11) {
 FUNC_4(VAR_2, VAR_11, "hdb_open");
 goto out;
    }

    FUNC_3(VAR_2, VAR_13, VAR_8->decrypt_flag ? VAR_0 : 0,
  VAR_4, VAR_12);

    VAR_13->hdb_close(VAR_2, VAR_13);
out:
    if(VAR_12 && VAR_12 != VAR_7)
 FUNC_1(VAR_12);
    return 0;
}
