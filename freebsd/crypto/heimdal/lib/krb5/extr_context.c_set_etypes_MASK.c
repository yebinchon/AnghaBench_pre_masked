
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (int ,int *,char*,char const*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 int * FUNC_6 (int) ;

__attribute__((used)) static krb5_error_code
FUNC_7 (krb5_context VAR_2,
     const char *VAR_3,
     krb5_enctype **VAR_4)
{
    char **VAR_5;
    krb5_enctype *VAR_6 = ((void*)0);

    VAR_5 = FUNC_2(VAR_2, ((void*)0), "libdefaults",
      VAR_3, ((void*)0));
    if(VAR_5){
 int VAR_7, VAR_8, VAR_9;
 for(VAR_7 = 0; VAR_5[VAR_7]; VAR_7++);
 VAR_6 = FUNC_6((VAR_7+1) * sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
     FUNC_1 (VAR_5);
     FUNC_4 (VAR_2, VAR_0, FUNC_0("malloc: out of memory", ""));
     return VAR_0;
 }
 for(VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_7; VAR_8++) {
     krb5_enctype VAR_10;
     if(FUNC_5(VAR_2, VAR_5[VAR_8], &VAR_10) != 0)
  continue;
     if (FUNC_3(VAR_2, VAR_10) != 0)
  continue;
     VAR_6[VAR_9++] = VAR_10;
 }
 VAR_6[VAR_9] = VAR_1;
 FUNC_1(VAR_5);
    }
    *VAR_4 = VAR_6;
    return 0;
}
