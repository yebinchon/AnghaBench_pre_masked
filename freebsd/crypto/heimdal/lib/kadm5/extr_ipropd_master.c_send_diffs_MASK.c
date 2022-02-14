
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct TYPE_11__ {scalar_t__ version; int flags; int fd; int ac; int name; } ;
typedef TYPE_1__ slave ;
typedef scalar_t__ off_t ;
typedef int krb5_storage ;
struct TYPE_12__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef enum kadm_ops { ____Placeholder_kadm_ops } kadm_ops ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int ,int *,scalar_t__*,int *,int*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int ,int *,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_1__*,char const*,scalar_t__) ;
 int FUNC_14 (int ,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_16 (krb5_context VAR_3, slave *VAR_4, int VAR_5,
     const char *VAR_6, uint32_t VAR_7)
{
    krb5_storage *VAR_8;
    uint32_t VAR_9;
    time_t VAR_10;
    enum kadm_ops VAR_11;
    uint32_t VAR_12;
    off_t VAR_13, VAR_14;
    krb5_data VAR_15;
    int VAR_16 = 0;

    if (VAR_4->version == VAR_7) {
 FUNC_11(VAR_3, "slave %s in sync already at version %ld",
     VAR_4->name, (long)VAR_4->version);
 return 0;
    }

    if (VAR_4->flags & VAR_2)
 return 0;


    if (VAR_4->version == 0) {
 FUNC_11(VAR_3, "sending complete log to fresh slave %s",
     VAR_4->name);
 return FUNC_13 (VAR_3, VAR_4, VAR_6, VAR_7);
    }

    VAR_8 = FUNC_0 (VAR_5);
    VAR_13 = FUNC_8(VAR_8, 0, VAR_1);
    for (;;) {
 VAR_16 = FUNC_1 (VAR_3, VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_16)
     FUNC_4(VAR_3, 1, VAR_16,
       "send_diffs: failed to find previous entry");
 VAR_14 = FUNC_8(VAR_8, -16, VAR_1);
 if (VAR_9 == VAR_4->version)
     return 0;
 if (VAR_9 == VAR_4->version + 1)
     break;
 if (VAR_14 == 0) {
     FUNC_5(VAR_8);
     FUNC_11(VAR_3,
         "slave %s (version %lu) out of sync with master "
         "(first version in log %lu), sending complete database",
         VAR_4->name, (unsigned long)VAR_4->version, (unsigned long)VAR_9);
     return FUNC_13 (VAR_3, VAR_4, VAR_6, VAR_7);
 }
    }

    FUNC_11(VAR_3,
        "syncing slave %s from version %lu to version %lu",
        VAR_4->name, (unsigned long)VAR_4->version,
        (unsigned long)VAR_7);

    VAR_16 = FUNC_2 (&VAR_15, VAR_13 - VAR_14 + 4);
    if (VAR_16) {
 FUNC_5(VAR_8);
 FUNC_10 (VAR_3, VAR_16, "send_diffs: krb5_data_alloc");
 FUNC_14(VAR_3, VAR_4);
 return 1;
    }
    FUNC_7 (VAR_8, (char *)VAR_15.data + 4, VAR_15.length - 4);
    FUNC_5(VAR_8);

    VAR_8 = FUNC_6 (&VAR_15);
    if (VAR_8 == ((void*)0)) {
 FUNC_11 (VAR_3, "send_diffs: krb5_storage_from_data");
 FUNC_14(VAR_3, VAR_4);
 return 1;
    }
    FUNC_9 (VAR_8, VAR_0);
    FUNC_5(VAR_8);

    VAR_16 = FUNC_12(VAR_3, VAR_4->ac, &VAR_4->fd, &VAR_15);
    FUNC_3(&VAR_15);

    if (VAR_16) {
 FUNC_10 (VAR_3, VAR_16, "send_diffs: krb5_write_priv_message");
 FUNC_14(VAR_3, VAR_4);
 return 1;
    }
    FUNC_15(VAR_4);

    VAR_4->version = VAR_7;

    return 0;
}
