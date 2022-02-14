
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,size_t*,char const*) ;
 int FUNC_5 (int *,int ,void const**) ;
 int FUNC_6 (int *,int ,char**,char*,char const*) ;
 int FUNC_7 (int *,int ,char*) ;
 char* VAR_4 ;

int
FUNC_8(pam_handle_t *VAR_5,
 const char **VAR_6,
 const char *VAR_7)
{
 char VAR_8[1024];
 size_t VAR_9;
 const void *VAR_10;
 char *VAR_11;
 int VAR_12;

 FUNC_0();
 VAR_12 = FUNC_5(VAR_5, VAR_2, (const void **)VAR_6);
 if (VAR_12 == VAR_1 && *VAR_6 != ((void*)0))
  FUNC_2(VAR_1);

 if ((VAR_10 = FUNC_3(VAR_5, "user_prompt")) != ((void*)0))
  VAR_7 = VAR_10;

 if (VAR_7 == ((void*)0)) {
  VAR_12 = FUNC_5(VAR_5, VAR_3, &VAR_10);
  if (VAR_12 == VAR_1 && VAR_10 != ((void*)0))
   VAR_7 = VAR_10;
 }

 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_4;

 VAR_9 = sizeof VAR_8;
 VAR_12 = FUNC_4(VAR_5, VAR_8, &VAR_9, VAR_7);
 if (VAR_12 == VAR_1 && VAR_9 <= sizeof VAR_8)
  VAR_7 = VAR_8;
 VAR_12 = FUNC_6(VAR_5, VAR_0, &VAR_11, "%s", VAR_7);
 if (VAR_12 != VAR_1)
  FUNC_2(VAR_12);
 VAR_12 = FUNC_7(VAR_5, VAR_2, VAR_11);
 FUNC_1(VAR_11);
 if (VAR_12 != VAR_1)
  FUNC_2(VAR_12);
 VAR_12 = FUNC_5(VAR_5, VAR_2, (const void **)VAR_6);
 FUNC_2(VAR_12);
}
