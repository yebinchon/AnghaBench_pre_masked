
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef char uint16_t ;
typedef int ucs2 ;
typedef int time_t ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int krb5_const_principal ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*,size_t) ;
 int FUNC_10 (int *,size_t) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int ,int ,char**) ;
 char* FUNC_13 (size_t) ;
 int VAR_3 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,size_t,unsigned int*,char*,size_t*) ;
 int FUNC_16 (char*,char*,size_t*) ;
 int FUNC_17 (char*,size_t*) ;

__attribute__((used)) static krb5_error_code
FUNC_18(krb5_context VAR_4,
   time_t VAR_5,
   krb5_const_principal VAR_6,
   krb5_data *VAR_7)
{
    krb5_error_code VAR_8;
    krb5_storage *VAR_9;
    uint64_t VAR_10;
    char *VAR_11, *VAR_12;
    size_t VAR_13;

    VAR_10 = FUNC_14(VAR_5);

    FUNC_2(VAR_7);

    VAR_9 = FUNC_5();
    if (VAR_9 == ((void*)0))
 return FUNC_3(VAR_4);

    FUNC_7(VAR_9, VAR_1);

    FUNC_0(VAR_8, FUNC_11(VAR_9, VAR_10 & 0xffffffff), VAR_3);
    FUNC_0(VAR_8, FUNC_11(VAR_9, VAR_10 >> 32), VAR_3);

    VAR_8 = FUNC_12(VAR_4, VAR_6,
      VAR_0, &VAR_11);
    if (VAR_8)
 goto out;

    {
 size_t VAR_14;
 uint16_t *VAR_15;
 unsigned int VAR_16;

 VAR_8 = FUNC_17(VAR_11, &VAR_14);
 if (VAR_8) {
     FUNC_1(VAR_11);
     FUNC_4(VAR_4, VAR_8, "Failed to count length of UTF-8 string");
     return VAR_8;
 }

 VAR_15 = FUNC_13(sizeof(VAR_15[0]) * VAR_14);
 if (VAR_15 == ((void*)0)) {
     FUNC_1(VAR_11);
     return FUNC_3(VAR_4);
 }

 VAR_8 = FUNC_16(VAR_11, VAR_15, &VAR_14);
 FUNC_1(VAR_11);
 if (VAR_8) {
     FUNC_1(VAR_15);
     FUNC_4(VAR_4, VAR_8, "Failed to convert string to UCS-2");
     return VAR_8;
 }

 VAR_13 = (VAR_14 + 1) * 2;
 VAR_12 = FUNC_13(VAR_13);
 if (VAR_15 == ((void*)0)) {
     FUNC_1(VAR_15);
     return FUNC_3(VAR_4);
 }

 VAR_16 = VAR_2;
 VAR_8 = FUNC_15(VAR_15, VAR_14,
        &VAR_16, VAR_12, &VAR_13);
 FUNC_1(VAR_15);
 if (VAR_8) {
     FUNC_1(VAR_12);
     FUNC_4(VAR_4, VAR_8, "Failed to write to UCS-2 buffer");
     return VAR_8;
 }




 VAR_13 = VAR_14 * 2;
    }

    FUNC_0(VAR_8, FUNC_10(VAR_9, VAR_13), VAR_3);

    VAR_8 = FUNC_9(VAR_9, VAR_12, VAR_13);
    FUNC_1(VAR_12);
    if (VAR_8 != (int)VAR_13) {
 VAR_8 = FUNC_3(VAR_4);
 goto out;
    }
    VAR_8 = FUNC_8(VAR_9, VAR_7);
    if (VAR_8)
 goto out;
    FUNC_6(VAR_9);

    return 0;
out:
    FUNC_6(VAR_9);
    return VAR_8;
}
