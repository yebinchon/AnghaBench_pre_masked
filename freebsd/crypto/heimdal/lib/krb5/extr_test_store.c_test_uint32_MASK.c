
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__,char*) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6(krb5_context VAR_1, krb5_storage *VAR_2)
{
    krb5_error_code VAR_3;
    int VAR_4;
    uint32_t VAR_5[] = {
 0, 1, 4294967295UL
    }, VAR_6;

    FUNC_4(VAR_2, 0);

    for (VAR_4 = 0; VAR_4 < sizeof(VAR_5[0])/sizeof(VAR_5); VAR_4++) {

 VAR_3 = FUNC_5(VAR_2, VAR_5[VAR_4]);
 if (VAR_3)
     FUNC_0(VAR_1, 1, VAR_3, "krb5_store_uint32");
 FUNC_3(VAR_2, 0, VAR_0);
 VAR_3 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_3)
     FUNC_0(VAR_1, 1, VAR_3, "krb5_ret_uint32");
 if (VAR_6 != VAR_5[VAR_4])
     FUNC_1(VAR_1, 1, "store and ret mismatch");
    }
}
