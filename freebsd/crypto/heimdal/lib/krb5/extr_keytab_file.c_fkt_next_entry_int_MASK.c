
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct fkt_data {int dummy; } ;
typedef int off_t ;
struct TYPE_7__ {int sp; } ;
typedef TYPE_1__ krb5_kt_cursor ;
struct TYPE_8__ {int vno; int * aliases; void* flags; int keyblock; void* timestamp; int principal; } ;
typedef TYPE_2__ krb5_keytab_entry ;
typedef TYPE_3__* krb5_keytab ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int int8_t ;
typedef int int32_t ;
struct TYPE_9__ {struct fkt_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fkt_data*,int ,int *) ;
 int FUNC_1 (int ,struct fkt_data*,int ,int *) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2,
     krb5_keytab VAR_3,
     krb5_keytab_entry *VAR_4,
     krb5_kt_cursor *VAR_5,
     off_t *VAR_6,
     off_t *VAR_7)
{
    struct fkt_data *VAR_8 = VAR_3->data;
    int32_t VAR_9;
    int VAR_10;
    int8_t VAR_11;
    int32_t VAR_12;
    uint32_t VAR_13;
    off_t VAR_14, VAR_15;

    VAR_14 = FUNC_5(VAR_5->sp, 0, VAR_0);
loop:
    VAR_10 = FUNC_2(VAR_5->sp, &VAR_9);
    if (VAR_10)
 return VAR_10;
    if(VAR_9 < 0) {
 VAR_14 = FUNC_5(VAR_5->sp, -VAR_9, VAR_0);
 goto loop;
    }
    VAR_10 = FUNC_1 (VAR_2, VAR_8, VAR_5->sp, &VAR_4->principal);
    if (VAR_10)
 goto out;
    VAR_10 = FUNC_4(VAR_5->sp, &VAR_13);
    VAR_4->timestamp = VAR_13;
    if (VAR_10)
 goto out;
    VAR_10 = FUNC_3(VAR_5->sp, &VAR_11);
    if (VAR_10)
 goto out;
    VAR_4->vno = VAR_11;
    VAR_10 = FUNC_0 (VAR_2, VAR_8, VAR_5->sp, &VAR_4->keyblock);
    if (VAR_10)
 goto out;



    VAR_15 = FUNC_5(VAR_5->sp, 0, VAR_0);
    if(VAR_9 + 4 + VAR_14 - VAR_15 >= 4) {
 VAR_10 = FUNC_2(VAR_5->sp, &VAR_12);
 if (VAR_10 == 0 && VAR_12 != 0)
     VAR_4->vno = VAR_12;
    }

    if(VAR_9 + 4 + VAR_14 - VAR_15 >= 8) {
 VAR_10 = FUNC_4(VAR_5->sp, &VAR_13);
 if (VAR_10 == 0)
     VAR_4->flags = VAR_13;
    } else
 VAR_4->flags = 0;

    VAR_4->aliases = ((void*)0);

    if(VAR_6) *VAR_6 = VAR_14;
    if(VAR_7) *VAR_7 = VAR_14 + 4 + VAR_9;
 out:
    FUNC_5(VAR_5->sp, VAR_14 + 4 + VAR_9, VAR_1);
    return VAR_10;
}
