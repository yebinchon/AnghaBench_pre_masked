
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_kdc_configuration ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*,char**) ;

__attribute__((used)) static void
FUNC_7(krb5_context VAR_2,
     krb5_kdc_configuration *VAR_3,
     const char *VAR_4)
{
    char *VAR_5 = ((void*)0);
    char *VAR_6;
    char *VAR_7 = FUNC_5 (VAR_4);

    VAR_6 = FUNC_6(VAR_7, " \t", &VAR_5);
    while(VAR_6 != ((void*)0)) {
 if(FUNC_4(VAR_6, "+") == 0) {



     FUNC_1(VAR_2, VAR_3, VAR_0);
 } else {
     char *VAR_8 = FUNC_3(VAR_6, '/');
     if(VAR_8){
  *VAR_8++ = 0;



  FUNC_0(VAR_2, VAR_0, VAR_6, VAR_8);
     }else {




  FUNC_0(VAR_2, VAR_0, VAR_6, "udp");
  FUNC_0(VAR_2, VAR_0, VAR_6, "tcp");
     }
 }

 VAR_6 = FUNC_6(((void*)0), " \t", &VAR_5);
    }
    FUNC_2 (VAR_7);
}
