
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int int16_t ;
typedef char* heim_general_string ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_3,
     krb5_storage *VAR_4,
     heim_general_string *VAR_5)
{
    int VAR_6;
    int16_t VAR_7;
    VAR_6 = FUNC_1(VAR_4, &VAR_7);
    if(VAR_6)
 return VAR_6;
    *VAR_5 = FUNC_4(VAR_7 + 1);
    if (*VAR_5 == ((void*)0)) {
 FUNC_2(VAR_3, VAR_0, FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_6 = FUNC_3(VAR_4, *VAR_5, VAR_7);
    (*VAR_5)[VAR_7] = '\0';
    if(VAR_6 != VAR_7)
 return (VAR_6 < 0)? VAR_2 : VAR_1;
    return 0;
}
