
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* data; size_t length; } ;
typedef TYPE_2__ krb5_data ;
struct TYPE_7__ {size_t length; char* data; } ;
struct TYPE_9__ {TYPE_1__ data; int flags; } ;
typedef TYPE_3__ krb5_crypto_iov ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int iov ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,unsigned int,TYPE_3__*,int,int *) ;
 int FUNC_3 (int ,int ,int ,size_t*) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (int ,int ,unsigned int,TYPE_3__*,int,int *) ;
 char* FUNC_6 (size_t) ;

__attribute__((used)) static int
FUNC_7(krb5_context VAR_3,
   krb5_crypto VAR_4,
   unsigned VAR_5,
   krb5_data *VAR_6)
{
    krb5_crypto_iov VAR_7[4];
    int VAR_8;
    char *VAR_9;
    size_t VAR_10;

    VAR_9 = VAR_6->data;
    VAR_10 = VAR_6->length;

    VAR_7[0].flags = VAR_0;
    FUNC_3(VAR_3, VAR_4, VAR_7[0].flags, &VAR_7[0].data.length);
    VAR_7[0].data.data = FUNC_0(VAR_7[0].data.length);

    VAR_7[1].flags = VAR_1;
    VAR_7[1].data.length = VAR_10;
    VAR_7[1].data.data = VAR_9;

    VAR_7[2].flags = VAR_2;
    FUNC_3(VAR_3, VAR_4, VAR_7[0].flags, &VAR_7[2].data.length);
    VAR_7[2].data.data = FUNC_6(VAR_7[2].data.length);

    VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5,
       VAR_7, sizeof(VAR_7)/sizeof(VAR_7[0]), ((void*)0));
    if (VAR_8)
 FUNC_4(VAR_3, 1, VAR_8, "krb5_create_checksum_iov failed");

    VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_7, sizeof(VAR_7)/sizeof(VAR_7[0]), ((void*)0));
    if (VAR_8)
 FUNC_4(VAR_3, 1, VAR_8, "krb5_verify_checksum_iov");

    FUNC_1(VAR_7[0].data.data);
    FUNC_1(VAR_7[2].data.data);

    return 0;
}
