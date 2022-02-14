
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (char**,char*,char const*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int **) ;
 scalar_t__ FUNC_7 (int ,char const*,int **) ;

OM_uint32
FUNC_8(OM_uint32 *VAR_4, const char *VAR_5)
{
    krb5_context VAR_6;
    krb5_error_code VAR_7;

    *VAR_4 = 0;

    VAR_7 = FUNC_2(&VAR_6);
    if(VAR_7)
 return VAR_1;

    FUNC_0(&VAR_3);

    if(VAR_2 != ((void*)0)) {
 FUNC_5(VAR_6, VAR_2);
 VAR_2 = ((void*)0);
    }
    if (VAR_5 == ((void*)0)) {
 VAR_7 = FUNC_6(VAR_6, &VAR_2);
    } else {



 VAR_7 = FUNC_7(VAR_6, VAR_5, &VAR_2);



 if (VAR_7) {
     char *VAR_8 = ((void*)0);
     VAR_7 = FUNC_3(&VAR_8, "FILE:%s", VAR_5);
     if(VAR_7 < 0 || VAR_8 == ((void*)0)) {
  FUNC_1(&VAR_3);
  return VAR_1;
     }
     VAR_7 = FUNC_7(VAR_6, VAR_8, &VAR_2);
     FUNC_4(VAR_8);
 }
    }
    FUNC_1(&VAR_3);
    if(VAR_7) {
 *VAR_4 = VAR_7;
 return VAR_1;
    }
    return VAR_0;
}
