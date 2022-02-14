
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;


 int FUNC_0 (int ,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 char* FUNC_3 (size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_storage *VAR_2, int VAR_3, size_t VAR_4, char **VAR_5)
{
    krb5_error_code VAR_6;

    *VAR_5 = FUNC_3(VAR_4 + 1);
    if (*VAR_5 == ((void*)0))
 return VAR_1;
    FUNC_0(FUNC_2(VAR_2, *VAR_5, VAR_4), VAR_4);

    (*VAR_5)[VAR_4] = '\0';

    if (VAR_3) {
 size_t VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_4 / 2; VAR_7++) {
     (*VAR_5)[VAR_7] = (*VAR_5)[VAR_7 * 2];
     if ((*VAR_5)[VAR_7 * 2 + 1]) {
  FUNC_1(*VAR_5);
  *VAR_5 = ((void*)0);
  return VAR_0;
     }
 }
 (*VAR_5)[VAR_7] = '\0';
    }
    VAR_6 = 0;
 out:
    return VAR_6;
}
