
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_prompter_fct ;
typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int * krb5_ccache ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int **,int **) ;
 char* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int *,char const*) ;
 scalar_t__ FUNC_3 (int ,int *,char const*,int ,char const*,char const*,int **) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int **) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int **,int *,char const*,char*,int *) ;
 scalar_t__ FUNC_8 (int ,char const*,int **) ;
 scalar_t__ FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ,scalar_t__,char*) ;

krb5_error_code
FUNC_11(krb5_context VAR_2,
   const char *VAR_3,
   const char *VAR_4,
   const char *VAR_5,
   krb5_prompter_fct VAR_6,
   const char *VAR_7,
   krb5_ccache VAR_8,
   krb5_ccache *VAR_9)
{
    krb5_error_code VAR_10;
    krb5_ccache VAR_11 = ((void*)0);
    krb5_principal VAR_12 = ((void*)0), VAR_13 = ((void*)0);


    if(VAR_5 && *VAR_5 == '\0')
 VAR_5 = ((void*)0);
    if(VAR_4 == ((void*)0))
 VAR_4 = VAR_0;

    if(VAR_3 != ((void*)0)) {
 VAR_10 = FUNC_8(VAR_2, VAR_3, &VAR_13);
 if(VAR_10)
     return VAR_10;
    }

    if(VAR_8 != ((void*)0)) {
 VAR_11 = VAR_8;
 VAR_10 = FUNC_5(VAR_2, VAR_11, &VAR_13);
 if(VAR_10)
     return VAR_10;
    } else {


 VAR_10 = FUNC_0(VAR_2, &VAR_11, &VAR_12);
 if (VAR_10) {




     const char *VAR_14;

     VAR_14 = FUNC_1 ();

     if(VAR_14 == ((void*)0)) {
  FUNC_10(VAR_2, VAR_1, "Unable to find local user name");
  return VAR_1;
     }
     VAR_10 = FUNC_7(VAR_2, &VAR_12,
          ((void*)0), VAR_14, "admin", ((void*)0));
     if(VAR_10)
  return VAR_10;
 }
    }






    if (VAR_13 == ((void*)0) && VAR_12 != ((void*)0))
 VAR_13 = VAR_12;


    if(VAR_11 && VAR_13 && (VAR_12 == ((void*)0) ||
       FUNC_9(VAR_2, VAR_13, VAR_12) != 0)) {
 VAR_10 = FUNC_2(VAR_2, VAR_11, VAR_13, VAR_4);
 if(VAR_10 == 0) {
     *VAR_9 = VAR_11;
     FUNC_6(VAR_2, VAR_12);
     if (VAR_12 != VAR_13)
  FUNC_6(VAR_2, VAR_13);
     return 0;
 }
 if(VAR_8 != ((void*)0))

     return -1;
    }

    if(VAR_11 && (VAR_11 != VAR_8))
 FUNC_4(VAR_2, VAR_11);
    if (VAR_13 != VAR_12)
 FUNC_6(VAR_2, VAR_12);

    VAR_10 = FUNC_3(VAR_2, VAR_13, VAR_5, VAR_6, VAR_7,
   VAR_4, VAR_9);
    FUNC_6(VAR_2, VAR_13);
    return VAR_10;
}
