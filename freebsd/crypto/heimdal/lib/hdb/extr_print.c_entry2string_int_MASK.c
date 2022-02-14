
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_12__ {size_t len; TYPE_3__* val; } ;
struct TYPE_15__ {TYPE_6__* extensions; TYPE_5__* generation; int flags; int * max_renew; int * max_life; int * pw_end; int * valid_end; int * valid_start; int * modified_by; int created_by; TYPE_4__ keys; int kvno; int principal; } ;
typedef TYPE_7__ hdb_entry ;
struct TYPE_14__ {size_t len; int * val; } ;
struct TYPE_13__ {int gen; int usec; int time; } ;
struct TYPE_9__ {int keyvalue; int keytype; } ;
struct TYPE_11__ {TYPE_2__* salt; TYPE_1__ key; int * mkvno; } ;
struct TYPE_10__ {int salt; int type; } ;


 int FUNC_0 (int ,void*,size_t,int *,size_t*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *,char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (void*,size_t,char**) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_10 (int ,int ,char**) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_12 (krb5_context VAR_2, krb5_storage *VAR_3, hdb_entry *VAR_4)
{
    char *VAR_5;
    size_t VAR_6;
    krb5_error_code VAR_7;


    VAR_7 = FUNC_10(VAR_2, VAR_4->principal, &VAR_5);
    if(VAR_7)
 return VAR_7;
    FUNC_4(VAR_2, VAR_3, "%s ", VAR_5);
    FUNC_5(VAR_5);

    FUNC_4(VAR_2, VAR_3, "%d", VAR_4->kvno);

    for(VAR_6 = 0; VAR_6 < VAR_4->keys.len; VAR_6++){

 if(VAR_4->keys.val[VAR_6].mkvno)
     FUNC_4(VAR_2, VAR_3, ":%d:%d:",
     *VAR_4->keys.val[VAR_6].mkvno,
     VAR_4->keys.val[VAR_6].key.keytype);
 else
     FUNC_4(VAR_2, VAR_3, "::%d:",
     VAR_4->keys.val[VAR_6].key.keytype);

 FUNC_3(VAR_2, VAR_3, &VAR_4->keys.val[VAR_6].key.keyvalue);
 FUNC_4(VAR_2, VAR_3, ":");

 if(VAR_4->keys.val[VAR_6].salt){
     FUNC_4(VAR_2, VAR_3, "%u/", VAR_4->keys.val[VAR_6].salt->type);
     FUNC_3(VAR_2, VAR_3, &VAR_4->keys.val[VAR_6].salt->salt);
 }else
     FUNC_4(VAR_2, VAR_3, "-");
    }
    FUNC_4(VAR_2, VAR_3, " ");

    FUNC_2(VAR_2, VAR_3, &VAR_4->created_by);

    FUNC_2(VAR_2, VAR_3, VAR_4->modified_by);


    if(VAR_4->valid_start)
 FUNC_4(VAR_2, VAR_3, "%s ", FUNC_11(*VAR_4->valid_start));
    else
 FUNC_4(VAR_2, VAR_3, "- ");


    if(VAR_4->valid_end)
 FUNC_4(VAR_2, VAR_3, "%s ", FUNC_11(*VAR_4->valid_end));
    else
 FUNC_4(VAR_2, VAR_3, "- ");


    if(VAR_4->pw_end)
 FUNC_4(VAR_2, VAR_3, "%s ", FUNC_11(*VAR_4->pw_end));
    else
 FUNC_4(VAR_2, VAR_3, "- ");


    if(VAR_4->max_life)
 FUNC_4(VAR_2, VAR_3, "%d ", *VAR_4->max_life);
    else
 FUNC_4(VAR_2, VAR_3, "- ");


    if(VAR_4->max_renew)
 FUNC_4(VAR_2, VAR_3, "%d ", *VAR_4->max_renew);
    else
 FUNC_4(VAR_2, VAR_3, "- ");


    FUNC_4(VAR_2, VAR_3, "%d ", FUNC_1(VAR_4->flags));


    if(VAR_4->generation) {
 FUNC_4(VAR_2, VAR_3, "%s:%d:%d ", FUNC_11(VAR_4->generation->time),
        VAR_4->generation->usec,
        VAR_4->generation->gen);
    } else
 FUNC_4(VAR_2, VAR_3, "- ");


    if(VAR_4->extensions && VAR_4->extensions->len > 0) {
 for(VAR_6 = 0; VAR_6 < VAR_4->extensions->len; VAR_6++) {
     void *VAR_8;
     size_t VAR_9, VAR_10 = 0;

     FUNC_0(VAR_1, VAR_8, VAR_9,
          &VAR_4->extensions->val[VAR_6], &VAR_10, VAR_7);
     if (VAR_7) {
  FUNC_8(VAR_2);
  return VAR_7;
     }
     if(VAR_9 != VAR_10)
  FUNC_7(VAR_2, "internal asn.1 encoder error");

     if (FUNC_6(VAR_8, VAR_9, &VAR_5) < 0) {
  FUNC_5(VAR_8);
  FUNC_9(VAR_2, VAR_0, "malloc: out of memory");
  return VAR_0;
     }

     FUNC_5(VAR_8);
     FUNC_4(VAR_2, VAR_3, "%s%s", VAR_5,
     VAR_4->extensions->len - 1 != VAR_6 ? ":" : "");
     FUNC_5(VAR_5);
 }
    } else
 FUNC_4(VAR_2, VAR_3, "-");


    return 0;
}
