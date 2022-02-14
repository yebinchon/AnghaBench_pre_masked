
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_13__ {TYPE_1__* val; } ;
struct TYPE_17__ {TYPE_5__* principal; TYPE_2__ keys; } ;
typedef TYPE_6__ hdb_entry ;
struct TYPE_19__ {char* data; } ;
struct TYPE_18__ {void* type; TYPE_8__ salt; } ;
struct TYPE_14__ {size_t len; int * val; } ;
struct TYPE_15__ {TYPE_3__ name_string; } ;
struct TYPE_16__ {int realm; TYPE_4__ name; } ;
struct TYPE_12__ {TYPE_7__* salt; } ;
typedef TYPE_7__ Salt ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_8__*,size_t) ;
 int FUNC_2 (TYPE_8__*,int ,size_t) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (char*,int ,size_t) ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2, hdb_entry *VAR_3, int VAR_4)
{
    krb5_error_code VAR_5;
    Salt *VAR_6 = VAR_3->keys.val[VAR_4].salt;

    switch((int)VAR_6->type) {
    case 131:
 VAR_6->type = VAR_1;
 break;
    case 128:
 FUNC_3(&VAR_6->salt);
 VAR_6->type = VAR_1;
 break;
    case 132:
    {
 size_t VAR_7;
 size_t VAR_8;
 char *VAR_9;

 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3->principal->name.name_string.len; ++VAR_8)
     VAR_7 += FUNC_5(VAR_3->principal->name.name_string.val[VAR_8]);
 VAR_5 = FUNC_1 (&VAR_6->salt, VAR_7);
 if (VAR_5)
     return VAR_5;
 VAR_9 = VAR_6->salt.data;
 for (VAR_8 = 0; VAR_8 < VAR_3->principal->name.name_string.len; ++VAR_8) {
     FUNC_4 (VAR_9,
      VAR_3->principal->name.name_string.val[VAR_8],
      FUNC_5(VAR_3->principal->name.name_string.val[VAR_8]));
     VAR_9 += FUNC_5(VAR_3->principal->name.name_string.val[VAR_8]);
 }

 VAR_6->type = VAR_1;
 break;
    }
    case 130:
 FUNC_3(&VAR_6->salt);
 VAR_5 = FUNC_2(&VAR_6->salt,
        VAR_3->principal->realm,
        FUNC_5(VAR_3->principal->realm));
 if(VAR_5)
     return VAR_5;
 VAR_6->type = VAR_1;
 break;
    case 129:
 VAR_6->type = VAR_1;
 break;
    case 133:
 FUNC_3(&VAR_6->salt);
 VAR_5 = FUNC_2(&VAR_6->salt,
         VAR_3->principal->realm,
         FUNC_5(VAR_3->principal->realm));
 if(VAR_5)
     return VAR_5;
 VAR_6->type = VAR_0;
 break;
    default:
 FUNC_0();
    }
    return 0;
}
