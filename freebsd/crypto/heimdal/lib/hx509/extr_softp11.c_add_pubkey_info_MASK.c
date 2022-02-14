
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_object {int dummy; } ;
typedef int modulus_bits ;
typedef int hx509_context ;
typedef int hx509_cert ;
typedef int CK_ULONG ;
typedef int CK_RV ;
typedef scalar_t__ CK_KEY_TYPE ;
typedef int CK_BYTE ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ,int *,char*) ;
 int FUNC_6 (struct st_object*,int ,int ,int *,size_t) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (size_t) ;

__attribute__((used)) static CK_RV
FUNC_9(hx509_context VAR_7, struct st_object *VAR_8,
  CK_KEY_TYPE VAR_9, hx509_cert VAR_10)
{
    BIGNUM *VAR_11;
    CK_BYTE *VAR_12 = ((void*)0);
    size_t VAR_13 = 0;
    CK_ULONG VAR_14 = 0;
    CK_BYTE *VAR_15 = ((void*)0);
    size_t VAR_16 = 0;

    if (VAR_9 != VAR_3)
 return VAR_5;
    if (FUNC_4(VAR_10) == ((void*)0))
 return VAR_5;

    VAR_11 = FUNC_5(VAR_6,
       FUNC_4(VAR_10),
       "rsa-modulus");
    if (VAR_11 == ((void*)0))
 return VAR_4;
    VAR_14 = FUNC_2(VAR_11);

    VAR_13 = FUNC_3(VAR_11);
    VAR_12 = FUNC_8(VAR_13);
    FUNC_0(VAR_11, VAR_12);
    FUNC_1(VAR_11);

    FUNC_6(VAR_8, 0, VAR_0, VAR_12, VAR_13);
    FUNC_6(VAR_8, 0, VAR_1,
    &VAR_14, sizeof(VAR_14));

    FUNC_7(VAR_12);

    VAR_11 = FUNC_5(VAR_6,
       FUNC_4(VAR_10),
       "rsa-exponent");
    if (VAR_11 == ((void*)0))
 return VAR_4;

    VAR_16 = FUNC_3(VAR_11);
    VAR_15 = FUNC_8(VAR_16);
    FUNC_0(VAR_11, VAR_15);
    FUNC_1(VAR_11);

    FUNC_6(VAR_8, 0, VAR_2,
    VAR_15, VAR_16);

    FUNC_7(VAR_15);

    return VAR_5;
}
