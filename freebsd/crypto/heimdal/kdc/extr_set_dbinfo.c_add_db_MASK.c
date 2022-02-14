
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_kdc_configuration {int num_db; int * db; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,char const*) ;
 scalar_t__ FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 void* FUNC_3 (int *,int) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1, struct krb5_kdc_configuration *VAR_2,
       const char *VAR_3, const char *VAR_4)
{
    krb5_error_code VAR_5;
    void *VAR_6;

    VAR_6 = FUNC_3(VAR_2->db, (VAR_2->num_db + 1) * sizeof(*VAR_2->db));
    if (VAR_6 == ((void*)0)) {
 FUNC_2(VAR_1, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    VAR_2->db = VAR_6;

    VAR_5 = FUNC_0(VAR_1, &VAR_2->db[VAR_2->num_db], VAR_3);
    if(VAR_5)
 return VAR_5;

    VAR_2->num_db++;

    if (VAR_4) {
 VAR_5 = FUNC_1(VAR_1, VAR_2->db[VAR_2->num_db - 1], VAR_4);
 if (VAR_5)
     return VAR_5;
    }

    return 0;
}
