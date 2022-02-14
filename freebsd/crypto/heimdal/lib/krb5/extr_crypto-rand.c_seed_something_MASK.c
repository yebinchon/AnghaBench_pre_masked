
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int seedfile ;
typedef int krb5_context ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,double) ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int ,int *,char*,char*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int,char*,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(void)
{
    char VAR_4[1024], VAR_5[256];



    if (FUNC_2(VAR_5, sizeof(VAR_5))) {
 int VAR_6;
 VAR_6 = FUNC_9(VAR_5, VAR_3 | VAR_1 | VAR_2);
 if (VAR_6 >= 0) {
     ssize_t VAR_7;
     FUNC_11(VAR_6);
     VAR_7 = FUNC_10(VAR_6, VAR_4, sizeof(VAR_4));
     if (VAR_7 > 0)
  FUNC_0(VAR_4, VAR_7, 0.0);
     FUNC_5(VAR_6);
 } else
     VAR_5[0] = '\0';
    } else
 VAR_5[0] = '\0';



    if (FUNC_3() != 1) {


 krb5_context VAR_8;
 const char *VAR_9;


 if (!FUNC_8(&VAR_8)) {
     VAR_9 = FUNC_6(VAR_8, ((void*)0), "libdefaults",
           "egd_socket", ((void*)0));
     if (VAR_9 != ((void*)0))
  FUNC_1(VAR_9, VAR_0);
     FUNC_7(VAR_8);
 }





    }

    if (FUNC_3() == 1) {

 if (VAR_5[0])
     FUNC_4(VAR_5);

 return 0;
    } else
 return -1;
}
