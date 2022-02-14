
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct slave {int fd; int ac; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_9__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
struct TYPE_10__ {int entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
typedef int HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (krb5_context VAR_2, HDB *VAR_3, hdb_entry_ex *VAR_4, void *VAR_5)
{
    krb5_error_code VAR_6;
    krb5_storage *VAR_7;
    krb5_data VAR_8;
    struct slave *VAR_9 = (struct slave *)VAR_5;

    VAR_6 = FUNC_0 (VAR_2, &VAR_4->entry, &VAR_8);
    if (VAR_6)
 return VAR_6;
    VAR_6 = FUNC_2 (&VAR_8, VAR_8.length + 4);
    if (VAR_6) {
 FUNC_1 (&VAR_8);
 return VAR_6;
    }
    FUNC_7 ((char *)VAR_8.data + 4, VAR_8.data, VAR_8.length - 4);
    VAR_7 = FUNC_4(&VAR_8);
    if (VAR_7 == ((void*)0)) {
 FUNC_1 (&VAR_8);
 return VAR_0;
    }
    FUNC_5(VAR_7, VAR_1);
    FUNC_3(VAR_7);

    VAR_6 = FUNC_6 (VAR_2, VAR_9->ac, &VAR_9->fd, &VAR_8);
    FUNC_1 (&VAR_8);
    return VAR_6;
}
