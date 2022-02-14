
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct pa_info_data {int dummy; } ;
struct TYPE_18__ {int length; int data; } ;
struct TYPE_20__ {TYPE_3__ saltvalue; } ;
typedef TYPE_5__ krb5_salt ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_21__ {int length; int data; } ;
typedef TYPE_6__ heim_octet_string ;
typedef int e ;
struct TYPE_16__ {size_t len; scalar_t__* val; } ;
struct TYPE_17__ {TYPE_1__ etype; } ;
struct TYPE_23__ {TYPE_2__ req_body; } ;
struct TYPE_22__ {size_t len; TYPE_4__* val; } ;
struct TYPE_19__ {scalar_t__ etype; int * salt; int s2kparams; } ;
typedef TYPE_7__ ETYPE_INFO2 ;
typedef TYPE_8__ AS_REQ ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_7__*,size_t*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,TYPE_5__) ;
 scalar_t__ FUNC_3 (int ,int const,TYPE_5__*) ;
 int FUNC_4 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_5 (struct pa_info_data*,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct pa_info_data *
FUNC_7(krb5_context VAR_1,
        const krb5_principal VAR_2,
        const AS_REQ *VAR_3,
        struct pa_info_data *VAR_4,
        heim_octet_string *VAR_5)
{
    krb5_error_code VAR_6;
    ETYPE_INFO2 VAR_7;
    size_t VAR_8;
    size_t VAR_9, VAR_10;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_6 = FUNC_0(VAR_5->data, VAR_5->length, &VAR_7, &VAR_8);
    if (VAR_6)
 goto out;
    if (VAR_7.len == 0)
 goto out;
    for (VAR_10 = 0; VAR_10 < VAR_3->req_body.etype.len; VAR_10++) {
 for (VAR_9 = 0; VAR_9 < VAR_7.len; VAR_9++) {
     if (VAR_3->req_body.etype.val[VAR_10] == VAR_7.val[VAR_9].etype) {
  krb5_salt VAR_11;
  if (VAR_7.val[VAR_9].salt == ((void*)0))
      VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_11);
  else {
      VAR_11.saltvalue.data = *VAR_7.val[VAR_9].salt;
      VAR_11.saltvalue.length = FUNC_6(*VAR_7.val[VAR_9].salt);
      VAR_6 = 0;
  }
  if (VAR_6 == 0)
      VAR_6 = FUNC_5(VAR_4, VAR_1, VAR_7.val[VAR_9].etype,
       VAR_0,
       VAR_11.saltvalue.data,
       VAR_11.saltvalue.length,
       VAR_7.val[VAR_9].s2kparams);
  if (VAR_7.val[VAR_9].salt == ((void*)0))
      FUNC_2(VAR_1, VAR_11);
  if (VAR_6 == 0) {
      FUNC_1(&VAR_7);
      return VAR_4;
  }
     }
 }
    }
 out:
    FUNC_1(&VAR_7);
    return ((void*)0);
}
