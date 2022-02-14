
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kcm_creds {struct kcm_creds* next; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int flags; int gid; int uid; int mode; int refcnt; int name; int * server; int * client; struct kcm_creds* creds; struct TYPE_4__* next; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int *,char**) ;

krb5_error_code FUNC_4(krb5_context VAR_2)
{
    kcm_ccache VAR_3;

    for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 struct kcm_creds *VAR_7;

 if ((VAR_3->flags & VAR_0) == 0) {
     FUNC_2(7, "cache %08x: empty slot");
     continue;
 }

 FUNC_0(VAR_3);

 for (VAR_7 = VAR_3->creds; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
     VAR_6++;

 if (VAR_3->client != ((void*)0))
     FUNC_3(VAR_2, VAR_3->client, &VAR_4);
 if (VAR_3->server != ((void*)0))
     FUNC_3(VAR_2, VAR_3->server, &VAR_5);

 FUNC_2(7, "cache %08x: name %s refcnt %d flags %04x mode %04o "
  "uid %d gid %d client %s server %s ncreds %d",
  VAR_3, VAR_3->name, VAR_3->refcnt, VAR_3->flags, VAR_3->mode, VAR_3->uid, VAR_3->gid,
  (VAR_4 == ((void*)0)) ? "<none>" : VAR_4,
  (VAR_5 == ((void*)0)) ? "<none>" : VAR_5,
  VAR_6);

 if (VAR_4 != ((void*)0))
     FUNC_1(VAR_4);
 if (VAR_5 != ((void*)0))
     FUNC_1(VAR_5);
    }

    return 0;
}
