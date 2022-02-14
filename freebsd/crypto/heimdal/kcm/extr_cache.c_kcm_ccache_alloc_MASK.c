
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_7__ {int * keytab; } ;
struct TYPE_8__ {int flags; int refcnt; int mode; int uid; int gid; int mutex; scalar_t__ renew_life; scalar_t__ tkt_life; TYPE_1__ key; int * creds; int * server; int * client; int * name; int uuid; struct TYPE_8__* next; } ;
typedef TYPE_2__ kcm_ccache_data ;
typedef TYPE_2__* kcm_ccache ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 int * FUNC_8 (char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_7,
   const char *VAR_8,
   kcm_ccache *VAR_9)
{
    kcm_ccache VAR_10 = ((void*)0), VAR_11;
    krb5_error_code VAR_12;
    int VAR_13 = 0;

    *VAR_9 = ((void*)0);


    FUNC_2(&VAR_6);
    VAR_12 = 0;
    for (VAR_11 = VAR_5; VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
 if (VAR_11->flags & VAR_0) {
     if (FUNC_7(VAR_11->name, VAR_8) == 0) {
  VAR_12 = VAR_2;
  break;
     }
 } else if (VAR_10 == ((void*)0))
     VAR_10 = VAR_11;
    }

    if (VAR_12)
 goto out;




    if (VAR_10 == ((void*)0)) {
 VAR_10 = (kcm_ccache_data *)FUNC_6(sizeof(*VAR_10));
 if (VAR_10 == ((void*)0)) {
     VAR_12 = VAR_1;
     goto out;
 }
 VAR_10->next = VAR_5;
 FUNC_1(&VAR_10->mutex);
 VAR_13 = 1;
    }

    FUNC_4(VAR_10->uuid, sizeof(VAR_10->uuid));

    VAR_10->name = FUNC_8(VAR_8);
    if (VAR_10->name == ((void*)0)) {
 VAR_12 = VAR_1;
 goto out;
    }

    VAR_10->refcnt = 1;
    VAR_10->flags = VAR_0;
    VAR_10->mode = VAR_3 | VAR_4;
    VAR_10->uid = -1;
    VAR_10->gid = -1;
    VAR_10->client = ((void*)0);
    VAR_10->server = ((void*)0);
    VAR_10->creds = ((void*)0);
    VAR_10->key.keytab = ((void*)0);
    VAR_10->tkt_life = 0;
    VAR_10->renew_life = 0;

    if (VAR_13)
 VAR_5 = VAR_10;

    *VAR_9 = VAR_10;

    FUNC_3(&VAR_6);
    return 0;

out:
    FUNC_3(&VAR_6);
    if (VAR_13 && VAR_10 != ((void*)0)) {
 FUNC_0(&VAR_10->mutex);
 FUNC_5(VAR_10);
    }
    return VAR_12;
}
