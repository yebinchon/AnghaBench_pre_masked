
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int fd; int ac; int version; } ;
typedef TYPE_1__ slave ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_15__ {char* data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
struct TYPE_16__ {int (* hdb_open ) (int ,TYPE_3__*,int ,int ) ;int (* hdb_destroy ) (int ,TYPE_3__*) ;int (* hdb_close ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__**,char const*) ;
 int FUNC_1 (int ,TYPE_3__*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int,int,char*,...) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (int ,int ,int *,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,TYPE_3__*,int ,int ) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_14 (krb5_context VAR_5, slave *VAR_6,
        const char *VAR_7, uint32_t VAR_8)
{
    krb5_error_code VAR_9;
    krb5_storage *VAR_10;
    HDB *VAR_11;
    krb5_data VAR_12;
    char VAR_13[8];

    VAR_9 = FUNC_0 (VAR_5, &VAR_11, VAR_7);
    if (VAR_9)
 FUNC_2 (VAR_5, 1, VAR_9, "hdb_create: %s", VAR_7);
    VAR_9 = VAR_11->hdb_open (VAR_5, VAR_11, VAR_2, 0);
    if (VAR_9)
 FUNC_2 (VAR_5, 1, VAR_9, "db->open");

    VAR_10 = FUNC_5 (VAR_13, 4);
    if (VAR_10 == ((void*)0))
 FUNC_3 (VAR_5, 1, "krb5_storage_from_mem");
    FUNC_6 (VAR_10, VAR_3);
    FUNC_4 (VAR_10);

    VAR_12.data = VAR_13;
    VAR_12.length = 4;

    VAR_9 = FUNC_8(VAR_5, VAR_6->ac, &VAR_6->fd, &VAR_12);

    if (VAR_9) {
 FUNC_7 (VAR_5, VAR_9, "krb5_write_priv_message");
 FUNC_9(VAR_5, VAR_6);
 return VAR_9;
    }

    VAR_9 = FUNC_1 (VAR_5, VAR_11, VAR_0, VAR_4, VAR_6);
    if (VAR_9) {
 FUNC_7 (VAR_5, VAR_9, "hdb_foreach");
 FUNC_9(VAR_5, VAR_6);
 return VAR_9;
    }

    (*VAR_11->hdb_close)(VAR_5, VAR_11);
    (*VAR_11->hdb_destroy)(VAR_5, VAR_11);

    VAR_10 = FUNC_5 (VAR_13, 8);
    if (VAR_10 == ((void*)0))
 FUNC_3 (VAR_5, 1, "krb5_storage_from_mem");
    FUNC_6 (VAR_10, VAR_1);
    FUNC_6 (VAR_10, VAR_8);
    FUNC_4 (VAR_10);

    VAR_12.length = 8;

    VAR_6->version = VAR_8;

    VAR_9 = FUNC_8(VAR_5, VAR_6->ac, &VAR_6->fd, &VAR_12);
    if (VAR_9) {
 FUNC_9(VAR_5, VAR_6);
 FUNC_7 (VAR_5, VAR_9, "krb5_write_priv_message");
 return VAR_9;
    }

    FUNC_10(VAR_6);

    return 0;
}
