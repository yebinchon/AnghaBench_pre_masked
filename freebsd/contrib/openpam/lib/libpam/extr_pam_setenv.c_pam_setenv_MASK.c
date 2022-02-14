
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char**,char*,char const*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

int
FUNC_8(pam_handle_t *VAR_5,
 const char *VAR_6,
 const char *VAR_7,
 int VAR_8)
{
 char *VAR_9;
 int VAR_10;

 FUNC_0();


 if (*VAR_6 == '\0' || FUNC_6(VAR_6, '=') != ((void*)0)) {
  VAR_4 = VAR_0;
  FUNC_2(VAR_3);
 }


 if (!VAR_8 && FUNC_4(VAR_5, VAR_6, FUNC_7(VAR_6)) >= 0)
  FUNC_2(VAR_2);


 if (FUNC_3(&VAR_9, "%s=%s", VAR_6, VAR_7) < 0)
  FUNC_2(VAR_1);
 VAR_10 = FUNC_5(VAR_5, VAR_9);
 FUNC_1(VAR_9);
 FUNC_2(VAR_10);
}
