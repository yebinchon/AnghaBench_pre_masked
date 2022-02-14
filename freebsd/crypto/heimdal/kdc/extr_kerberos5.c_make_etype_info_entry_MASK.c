
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_10__ {int* salttype; int * salt; int etype; } ;
struct TYPE_7__ {int keytype; } ;
struct TYPE_9__ {TYPE_2__* salt; TYPE_1__ key; } ;
struct TYPE_8__ {int type; int salt; } ;
typedef TYPE_3__ Key ;
typedef TYPE_4__ ETYPE_INFO_ENTRY ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int ,int *,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_4, ETYPE_INFO_ENTRY *VAR_5, Key *VAR_6)
{
    VAR_5->etype = VAR_6->key.keytype;
    if(VAR_6->salt){
 VAR_5->salttype = ((void*)0);

 FUNC_2(VAR_4, &VAR_6->salt->salt,
         &VAR_5->salt);
    } else {





 VAR_5->salttype = ((void*)0);
 VAR_5->salt = ((void*)0);
    }
    return 0;
}
