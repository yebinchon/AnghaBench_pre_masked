
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int too_big_sizes ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,unsigned long) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(krb5_context VAR_3, krb5_storage *VAR_4)
{
    uint32_t VAR_5[] = { VAR_1, VAR_1 / 2, VAR_1 / 4, VAR_1 / 8 + 1};
    krb5_error_code VAR_6;
    krb5_data VAR_7;
    size_t VAR_8;

    for (VAR_8 = 0; VAR_8 < sizeof(VAR_5) / sizeof(VAR_5); VAR_8++) {
 FUNC_3(VAR_4, 0);
 FUNC_4(VAR_4, VAR_5[VAR_8]);
 FUNC_2(VAR_4, 0, VAR_2);
 VAR_6 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_6 != VAR_0)
     FUNC_0(1, "not too big: %lu", (unsigned long)VAR_8);
    }
}
