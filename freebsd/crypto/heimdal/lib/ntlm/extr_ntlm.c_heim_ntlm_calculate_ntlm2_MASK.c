
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ntlm_buf {unsigned char* data; int length; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_4__ {unsigned char* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int clientchallenge ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int,unsigned char const*,unsigned char*) ;
 int FUNC_3 (void const*,size_t,char const*,char const*,unsigned char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,unsigned char*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

int
FUNC_13(const void *VAR_3, size_t VAR_4,
     const char *VAR_5,
     const char *VAR_6,
     const unsigned char VAR_7[8],
     const struct ntlm_buf *VAR_8,
     unsigned char VAR_9[16],
     struct ntlm_buf *VAR_10)
{
    krb5_error_code VAR_11;
    krb5_data VAR_12;
    unsigned char VAR_13[16];
    krb5_storage *VAR_14;
    unsigned char VAR_15[8];
    uint64_t VAR_16;
    int VAR_17;

    VAR_16 = FUNC_12(FUNC_11(((void*)0)));

    if (FUNC_1(VAR_15, sizeof(VAR_15)) != 1)
 return VAR_1;



    FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);



    VAR_14 = FUNC_5();
    if (VAR_14 == ((void*)0))
 return VAR_0;
    FUNC_7(VAR_14, VAR_2);

    FUNC_0(FUNC_10(VAR_14, 0x00000101), 0);
    FUNC_0(FUNC_10(VAR_14, 0), 0);

    FUNC_0(FUNC_10(VAR_14, VAR_16 & 0xffffffff), 0);
    FUNC_0(FUNC_10(VAR_14, VAR_16 >> 32), 0);

    FUNC_0(FUNC_9(VAR_14, VAR_15, 8), 8);

    FUNC_0(FUNC_10(VAR_14, 0), 0);
    FUNC_0(FUNC_9(VAR_14, VAR_8->data, VAR_8->length),
   VAR_8->length);
    FUNC_0(FUNC_10(VAR_14, 0), 0);

    FUNC_0(FUNC_8(VAR_14, &VAR_12), 0);
    FUNC_6(VAR_14);
    VAR_14 = ((void*)0);

    VAR_17 = FUNC_2(VAR_9, VAR_12.data, VAR_12.length, VAR_7, VAR_13);
    if (VAR_17) {
 FUNC_4(&VAR_12);
 return VAR_17;
    }

    VAR_14 = FUNC_5();
    if (VAR_14 == ((void*)0)) {
 FUNC_4(&VAR_12);
 return VAR_0;
    }

    FUNC_0(FUNC_9(VAR_14, VAR_13, 16), 16);
    FUNC_0(FUNC_9(VAR_14, VAR_12.data, VAR_12.length), VAR_12.length);
    FUNC_4(&VAR_12);

    FUNC_0(FUNC_8(VAR_14, &VAR_12), 0);
    FUNC_6(VAR_14);
    VAR_14 = ((void*)0);

    VAR_10->data = VAR_12.data;
    VAR_10->length = VAR_12.length;

    return 0;
out:
    if (VAR_14)
 FUNC_6(VAR_14);
    return VAR_11;
}
