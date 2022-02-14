
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_6__ {int keyblock; int * keytab; } ;
struct TYPE_7__ {int flags; int uid; int gid; int session; int mutex; scalar_t__ refcnt; int * next; scalar_t__ renew_life; scalar_t__ tkt_life; scalar_t__ mode; TYPE_1__ key; int * name; } ;
typedef TYPE_2__ kcm_ccache_data ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(krb5_context VAR_2,
         kcm_ccache_data *VAR_3)
{
    FUNC_2(VAR_3);

    if (VAR_3->name != ((void*)0)) {
 FUNC_3(VAR_3->name);
 VAR_3->name = ((void*)0);
    }

    if (VAR_3->flags & VAR_1) {
 FUNC_7(VAR_2, VAR_3->key.keytab);
 VAR_3->key.keytab = ((void*)0);
    } else if (VAR_3->flags & VAR_0) {
 FUNC_5(VAR_2, &VAR_3->key.keyblock);
 FUNC_6(&VAR_3->key.keyblock);
    }

    VAR_3->flags = 0;
    VAR_3->mode = 0;
    VAR_3->uid = -1;
    VAR_3->gid = -1;
    VAR_3->session = -1;

    FUNC_4(VAR_2, VAR_3);

    VAR_3->tkt_life = 0;
    VAR_3->renew_life = 0;

    VAR_3->next = ((void*)0);
    VAR_3->refcnt = 0;

    FUNC_1(&VAR_3->mutex);
    FUNC_0(&VAR_3->mutex);
}
