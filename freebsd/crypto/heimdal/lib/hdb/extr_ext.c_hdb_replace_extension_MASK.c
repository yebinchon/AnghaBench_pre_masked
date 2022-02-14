
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_20__ {TYPE_15__* extensions; } ;
typedef TYPE_4__ hdb_entry ;
struct TYPE_17__ {int length; int data; } ;
struct TYPE_18__ {TYPE_1__ asn1_ellipsis; } ;
struct TYPE_19__ {scalar_t__ element; TYPE_2__ u; } ;
struct TYPE_21__ {TYPE_3__ data; } ;
struct TYPE_16__ {size_t len; TYPE_5__* val; } ;
typedef TYPE_5__ HDB_extension ;
typedef int Der_type ;
typedef int Der_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 TYPE_15__* FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__ const*,TYPE_5__*) ;
 int FUNC_3 (int ,int ,int *,int *,unsigned int*,size_t*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (int ,int,char*) ;
 TYPE_5__* FUNC_7 (TYPE_5__*,int) ;

krb5_error_code
FUNC_8(krb5_context VAR_2,
        hdb_entry *VAR_3,
        const HDB_extension *VAR_4)
{
    HDB_extension *VAR_5;
    HDB_extension *VAR_6;
    int VAR_7;

    VAR_5 = ((void*)0);

    if (VAR_3->extensions == ((void*)0)) {
 VAR_3->extensions = FUNC_1(1, sizeof(*VAR_3->extensions));
 if (VAR_3->extensions == ((void*)0)) {
     FUNC_6(VAR_2, VAR_0, "malloc: out of memory");
     return VAR_0;
 }
    } else if (VAR_4->data.element != VAR_1) {
 VAR_5 = FUNC_5(VAR_3, VAR_4->data.element);
    } else {
 Der_class VAR_8, VAR_9;
 Der_type VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;
 size_t VAR_14;
 size_t VAR_15;

 VAR_7 = FUNC_3(VAR_4->data.u.asn1_ellipsis.data,
     VAR_4->data.u.asn1_ellipsis.length,
     &VAR_8, &VAR_10, &VAR_12,
     &VAR_14);
 if (VAR_7) {
     FUNC_6(VAR_2, VAR_7, "hdb: failed to decode "
       "replacement hdb extention");
     return VAR_7;
 }

 for (VAR_15 = 0; VAR_15 < VAR_3->extensions->len; VAR_15++) {
     HDB_extension *VAR_16 = &VAR_3->extensions->val[VAR_15];

     if (VAR_16->data.element != VAR_1)
  continue;

     VAR_7 = FUNC_3(VAR_16->data.u.asn1_ellipsis.data,
         VAR_16->data.u.asn1_ellipsis.length,
         &VAR_9, &VAR_11, &VAR_13,
         &VAR_14);
     if (VAR_7) {
  FUNC_6(VAR_2, VAR_7, "hdb: failed to decode "
           "present hdb extention");
  return VAR_7;
     }

     if (FUNC_0(VAR_8,VAR_10,VAR_10) ==
  FUNC_0(VAR_9,VAR_11,VAR_11)) {
  VAR_5 = VAR_16;
  break;
     }
 }
    }

    if (VAR_5) {
 FUNC_4(VAR_5);
 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (VAR_7)
     FUNC_6(VAR_2, VAR_7, "hdb: failed to copy replacement "
       "hdb extention");
 return VAR_7;
    }

    VAR_6 = FUNC_7(VAR_3->extensions->val,
   (VAR_3->extensions->len+1)*sizeof(VAR_3->extensions->val[0]));
    if (VAR_6 == ((void*)0)) {
 FUNC_6(VAR_2, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    VAR_3->extensions->val = VAR_6;

    VAR_7 = FUNC_2(VAR_4,
        &VAR_3->extensions->val[VAR_3->extensions->len]);
    if (VAR_7 == 0)
 VAR_3->extensions->len++;
    else
 FUNC_6(VAR_2, VAR_7, "hdb: failed to copy new extension");

    return VAR_7;
}
