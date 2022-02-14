
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _krb5_key_data {TYPE_1__* schedule; } ;
struct _krb5_evp_schedule {int * dctx; int * ectx; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
struct TYPE_2__ {struct _krb5_evp_schedule* data; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (int *,int *,int *,int *,void*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (void*,unsigned char*,size_t) ;
 void* VAR_2 ;

krb5_error_code
FUNC_5(krb5_context VAR_3,
        struct _krb5_key_data *VAR_4,
        void *VAR_5,
        size_t VAR_6,
        krb5_boolean VAR_7,
        int VAR_8,
        void *VAR_9)
{
    size_t VAR_10, VAR_11;
    struct _krb5_evp_schedule *VAR_12 = VAR_4->schedule->data;
    unsigned char VAR_13[VAR_1], VAR_14[VAR_1];
    EVP_CIPHER_CTX *VAR_15;
    unsigned char *VAR_16;

    VAR_15 = VAR_7 ? VAR_12->ectx : VAR_12->dctx;

    VAR_11 = FUNC_0(VAR_15);

    if (VAR_6 < VAR_11) {
 FUNC_3(VAR_3, VAR_0,
          "message block too short");
 return VAR_0;
    } else if (VAR_6 == VAR_11) {
 FUNC_2(VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_2, -1);
 FUNC_1(VAR_15, VAR_5, VAR_5, VAR_6);
 return 0;
    }

    if (VAR_9)
 FUNC_2(VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_9, -1);
    else
 FUNC_2(VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_2, -1);

    if (VAR_7) {

 VAR_16 = VAR_5;
 VAR_10 = ((VAR_6 - 1) / VAR_11) * VAR_11;
 FUNC_1(VAR_15, VAR_16, VAR_16, VAR_10);
 VAR_16 += VAR_10 - VAR_11;
 VAR_6 -= VAR_10;
 FUNC_4(VAR_14, VAR_16, VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
     VAR_13[VAR_10] = VAR_16[VAR_10 + VAR_11] ^ VAR_14[VAR_10];
 for (; VAR_10 < VAR_11; VAR_10++)
     VAR_13[VAR_10] = 0 ^ VAR_14[VAR_10];

 FUNC_2(VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_2, -1);
 FUNC_1(VAR_15, VAR_16, VAR_13, VAR_11);

 FUNC_4(VAR_16 + VAR_11, VAR_14, VAR_6);
 if (VAR_9)
     FUNC_4(VAR_9, VAR_16, VAR_11);
    } else {
 unsigned char VAR_17[VAR_1], VAR_18[VAR_1];

 VAR_16 = VAR_5;
 if (VAR_6 > VAR_11 * 2) {

     VAR_10 = ((((VAR_6 - VAR_11 * 2) + VAR_11 - 1) / VAR_11) * VAR_11);
     FUNC_4(VAR_14, VAR_16 + VAR_10 - VAR_11, VAR_11);
     FUNC_1(VAR_15, VAR_16, VAR_16, VAR_10);
     VAR_16 += VAR_10;
     VAR_6 -= VAR_10 + VAR_11;
 } else {
     if (VAR_9)
  FUNC_4(VAR_14, VAR_9, VAR_11);
     else
  FUNC_4(VAR_14, VAR_2, VAR_11);
     VAR_6 -= VAR_11;
 }

 FUNC_4(VAR_13, VAR_16, VAR_11);
 FUNC_2(VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_2, -1);
 FUNC_1(VAR_15, VAR_17, VAR_16, VAR_11);

 FUNC_4(VAR_18, VAR_16 + VAR_11, VAR_6);
 FUNC_4(VAR_18 + VAR_6, VAR_17 + VAR_6, VAR_11 - VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
     VAR_16[VAR_10 + VAR_11] = VAR_17[VAR_10] ^ VAR_18[VAR_10];

 FUNC_2(VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_2, -1);
 FUNC_1(VAR_15, VAR_16, VAR_18, VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
     VAR_16[VAR_10] ^= VAR_14[VAR_10];
 if (VAR_9)
     FUNC_4(VAR_9, VAR_13, VAR_11);
    }
    return 0;
}
