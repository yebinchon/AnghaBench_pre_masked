
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int fd; int ac; int name; } ;
typedef TYPE_1__ slave ;
typedef int krb5_storage ;
struct TYPE_7__ {char* data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,int *,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7 (krb5_context VAR_3, slave *VAR_4)
{
    krb5_storage *VAR_5;
    krb5_data VAR_6;
    char VAR_7[4];
    int VAR_8;

    if (VAR_4->flags & (VAR_2|VAR_1))
 return 0;

    FUNC_4(VAR_3, "slave %s missing, sending AYT", VAR_4->name);

    VAR_4->flags |= VAR_1;

    VAR_6.data = VAR_7;
    VAR_6.length = 4;

    VAR_5 = FUNC_1 (VAR_7, 4);
    if (VAR_5 == ((void*)0)) {
 FUNC_4 (VAR_3, "are_you_there: krb5_data_alloc");
 FUNC_6(VAR_3, VAR_4);
 return 1;
    }
    FUNC_2 (VAR_5, VAR_0);
    FUNC_0 (VAR_5);

    VAR_8 = FUNC_5(VAR_3, VAR_4->ac, &VAR_4->fd, &VAR_6);

    if (VAR_8) {
 FUNC_3 (VAR_3, VAR_8, "are_you_there: krb5_write_priv_message");
 FUNC_6(VAR_3, VAR_4);
 return 1;
    }

    return 0;
}
