
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct descr {int len; scalar_t__ buf; } ;
typedef int krb5_storage ;
typedef int krb5_kdc_configuration ;
typedef int krb5_context ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5 (krb5_context VAR_0,
      krb5_kdc_configuration *VAR_1,
      struct descr *VAR_2)
{
    krb5_storage *VAR_3;
    uint32_t VAR_4;

    VAR_3 = FUNC_3(VAR_2->buf, VAR_2->len);
    if (VAR_3 == ((void*)0)) {
 FUNC_0 (VAR_0, VAR_1, 0, "krb5_storage_from_mem failed");
 return -1;
    }
    FUNC_1(VAR_3, &VAR_4);
    FUNC_2(VAR_3);
    if(VAR_2->len - 4 >= VAR_4) {
 FUNC_4(VAR_2->buf, VAR_2->buf + 4, VAR_2->len - 4);
 VAR_2->len -= 4;
 return 1;
    }
    return 0;
}
