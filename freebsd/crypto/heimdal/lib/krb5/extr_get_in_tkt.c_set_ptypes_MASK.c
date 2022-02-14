
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int krb5_preauthtype ;
struct TYPE_17__ {TYPE_4__* val; } ;
typedef TYPE_5__ krb5_preauthdata ;
typedef int krb5_context ;
struct TYPE_19__ {TYPE_1__* e_data; } ;
struct TYPE_18__ {size_t len; TYPE_3__* val; } ;
struct TYPE_16__ {int type; int info; } ;
struct TYPE_14__ {int length; int data; } ;
struct TYPE_15__ {int padata_type; TYPE_2__ padata_value; } ;
struct TYPE_13__ {int length; int data; } ;
typedef TYPE_6__ METHOD_DATA ;
typedef TYPE_7__ KRB_ERROR ;


 int FUNC_0 (TYPE_5__*,int) ;



 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_4(krb5_context VAR_0,
    KRB_ERROR *VAR_1,
    const krb5_preauthtype **VAR_2,
    krb5_preauthdata **VAR_3)
{
    static krb5_preauthdata VAR_4;
    static krb5_preauthtype VAR_5[] = { 130, 128 };

    if(VAR_1->e_data) {
 METHOD_DATA VAR_6;
 size_t VAR_7;
 FUNC_2(VAR_1->e_data->data,
      VAR_1->e_data->length,
      &VAR_6,
      ((void*)0));
 for(VAR_7 = 0; VAR_7 < VAR_6.len; VAR_7++){
     switch(VAR_6.val[VAR_7].padata_type){
     case 130:
  *VAR_2 = VAR_5;
  break;
     case 129:
  *VAR_3 = &VAR_4;
  FUNC_0(*VAR_3, 1);
  (*VAR_3)->val[0].type = 130;
  FUNC_1(VAR_6.val[VAR_7].padata_value.data,
      VAR_6.val[VAR_7].padata_value.length,
      &(*VAR_3)->val[0].info,
      ((void*)0));
  break;
     default:
  break;
     }
 }
 FUNC_3(&VAR_6);
    } else {
 *VAR_2 = VAR_5;
    }
    return(1);
}
