
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* data; size_t length; } ;
typedef TYPE_2__ krb5_data ;
struct TYPE_9__ {size_t length; char* data; } ;
struct TYPE_11__ {TYPE_1__ data; int flags; } ;
typedef TYPE_3__ krb5_crypto_iov ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int iov ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,size_t*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,unsigned int,char*,size_t,TYPE_2__*) ;
 int FUNC_6 (int ,int ,unsigned int,TYPE_3__*,int,int *) ;
 int FUNC_7 (int ,int ,unsigned int,TYPE_3__*,int,int *) ;
 int FUNC_8 (int ,int,int,char*,...) ;
 scalar_t__ FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_11(krb5_context VAR_5,
      krb5_crypto VAR_6,
      unsigned VAR_7,
      size_t VAR_8,
      krb5_data *VAR_9)
{
    krb5_crypto_iov VAR_10[4];
    krb5_data VAR_11;
    int VAR_12;
    char *VAR_13, *VAR_14;
    size_t VAR_15, VAR_16;

    VAR_13 = VAR_9->data;
    VAR_15 = VAR_9->length;

    VAR_10[0].flags = VAR_2;
    FUNC_3(VAR_5, VAR_6, VAR_10[0].flags, &VAR_10[0].data.length);
    VAR_10[0].data.data = FUNC_0(VAR_10[0].data.length);

    VAR_10[1].flags = VAR_0;
    VAR_10[1].data.length = VAR_15;
    VAR_10[1].data.data = FUNC_0(VAR_10[1].data.length);
    FUNC_10(VAR_10[1].data.data, VAR_13, VAR_10[1].data.length);


    VAR_10[2].flags = VAR_3;
    FUNC_3(VAR_5, VAR_6, VAR_3, &VAR_10[2].data.length);
    VAR_10[2].data.data = FUNC_0(VAR_10[2].data.length);

    VAR_10[3].flags = VAR_4;
    FUNC_3(VAR_5, VAR_6, VAR_10[3].flags, &VAR_10[3].data.length);
    VAR_10[3].data.data = FUNC_0(VAR_10[3].data.length);

    VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_7,
    VAR_10, sizeof(VAR_10)/sizeof(VAR_10[0]), ((void*)0));
    if (VAR_12)
 FUNC_1(1, "encrypt iov failed: %d", VAR_12);


    for (VAR_16 = 0, VAR_15 = 0; VAR_16 < sizeof(VAR_10)/sizeof(VAR_10[0]); VAR_16++)
 VAR_15 += VAR_10[VAR_16].data.length;
    if (VAR_15 != VAR_8)
 FUNC_1(1, "cipher len wrong");





    VAR_13 = VAR_14 = FUNC_0(VAR_15);
    for (VAR_16 = 0; VAR_16 < sizeof(VAR_10)/sizeof(VAR_10[0]); VAR_16++) {
 FUNC_10(VAR_14, VAR_10[VAR_16].data.data, VAR_10[VAR_16].data.length);
 VAR_14 += VAR_10[VAR_16].data.length;
    }

    VAR_12 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_13, VAR_15, &VAR_11);
    if (VAR_12)
 FUNC_8(VAR_5, 1, VAR_12, "krb5_decrypt");
    else
 FUNC_4(&VAR_11);

    FUNC_2(VAR_13);






    VAR_13 = VAR_14 = FUNC_0(VAR_10[1].data.length + VAR_10[2].data.length);

    FUNC_10(VAR_14, VAR_10[1].data.data, VAR_10[1].data.length);
    VAR_14 += VAR_10[1].data.length;
    FUNC_10(VAR_14, VAR_10[2].data.data, VAR_10[2].data.length);

    FUNC_2(VAR_10[1].data.data);
    FUNC_2(VAR_10[2].data.data);

    VAR_10[1].data.data = VAR_13;
    VAR_10[1].data.length += VAR_10[2].data.length;

    VAR_10[2].flags = VAR_1;
    VAR_10[2].data.length = 0;

    VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_7,
    VAR_10, sizeof(VAR_10)/sizeof(VAR_10[0]), ((void*)0));
    FUNC_2(VAR_10[0].data.data);
    FUNC_2(VAR_10[3].data.data);

    if (VAR_12)
 FUNC_8(VAR_5, 1, VAR_12, "decrypt iov failed: %d", VAR_12);

    if (VAR_9->length != VAR_10[1].data.length)
 FUNC_1(1, "length incorrect");

    VAR_13 = VAR_9->data;
    if (FUNC_9(VAR_10[1].data.data, VAR_13, VAR_10[1].data.length) != 0)
 FUNC_1(1, "iov[1] incorrect");

    FUNC_2(VAR_10[1].data.data);

    return 0;
}
