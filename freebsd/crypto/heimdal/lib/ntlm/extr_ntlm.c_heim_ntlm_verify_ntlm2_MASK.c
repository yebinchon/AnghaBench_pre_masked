
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct ntlm_buf {int length; unsigned char* data; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (unsigned char*,unsigned char*,int,unsigned char const*,unsigned char*) ;
 int FUNC_3 (struct ntlm_buf*) ;
 int FUNC_4 (void const*,size_t,char const*,char const*,unsigned char*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 unsigned char* FUNC_11 (int) ;
 scalar_t__ FUNC_12 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int *) ;

int
FUNC_15(const void *VAR_7, size_t VAR_8,
         const char *VAR_9,
         const char *VAR_10,
         time_t VAR_11,
         const unsigned char VAR_12[8],
         const struct ntlm_buf *VAR_13,
         struct ntlm_buf *VAR_14,
         unsigned char VAR_15[16])
{
    krb5_error_code VAR_16;
    unsigned char VAR_17[16];
    unsigned char VAR_18[8];
    unsigned char VAR_19[16];
    krb5_storage *VAR_20;
    time_t VAR_21;
    uint32_t VAR_22;
    uint64_t VAR_23;
    int VAR_24;

    VAR_14->length = 0;
    VAR_14->data = ((void*)0);

    if (VAR_13->length < 16)
 return VAR_2;

    if (VAR_11 == 0)
 VAR_11 = FUNC_14(((void*)0));



    FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, VAR_15);



    VAR_20 = FUNC_7(VAR_13->data, VAR_13->length);
    if (VAR_20 == ((void*)0))
 return VAR_0;
    FUNC_10(VAR_20, VAR_4);

    FUNC_0(FUNC_8(VAR_20, VAR_17, 16), 16);

    FUNC_0(FUNC_5(VAR_20, &VAR_22), 0);
    FUNC_0(VAR_22, 0x00000101);
    FUNC_0(FUNC_5(VAR_20, &VAR_22), 0);
    FUNC_0(VAR_22, 0);

    FUNC_0(FUNC_5(VAR_20, &VAR_22), 0);
    VAR_23 = VAR_22;
    FUNC_0(FUNC_5(VAR_20, &VAR_22), 0);
    VAR_23 |= ((uint64_t)VAR_22)<< 32;

    VAR_21 = FUNC_13(VAR_23);

    if (FUNC_1((int)(VAR_21 - VAR_11)) > VAR_6) {
 VAR_16 = VAR_3;
 goto out;
    }


    FUNC_0(FUNC_8(VAR_20, VAR_18, 8), 8);

    FUNC_0(FUNC_5(VAR_20, &VAR_22), 0);


    VAR_14->length = VAR_13->length - FUNC_9(VAR_20, 0, VAR_5);
    VAR_14->data = FUNC_11(VAR_14->length);
    if (VAR_14->data == ((void*)0)) {
 VAR_16 = VAR_0;
 goto out;
    }
    FUNC_0(FUNC_8(VAR_20, VAR_14->data, VAR_14->length),
   VAR_14->length);

    FUNC_6(VAR_20);
    VAR_20 = ((void*)0);

    if (VAR_13->length < 16) {
 VAR_16 = VAR_2;
 goto out;
    }

    VAR_16 = FUNC_2(VAR_15,
    ((unsigned char *)VAR_13->data) + 16, VAR_13->length - 16,
    VAR_12,
    VAR_19);
    if (VAR_16)
 goto out;

    if (FUNC_12(VAR_19, VAR_17, 16) != 0) {
 FUNC_3(VAR_14);
 return VAR_1;
    }

    return 0;
out:
    FUNC_3(VAR_14);
    if (VAR_20)
 FUNC_6(VAR_20);
    return VAR_16;
}
