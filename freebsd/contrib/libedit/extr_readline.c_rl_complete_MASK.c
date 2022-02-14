
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rl_compentry_func_t ;
typedef int ct_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,int *) ;
 int * VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *,int ,int ,int ,int ,size_t,int *,int *,int *,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_4 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 () ;
 int VAR_12 ;
 char* FUNC_6 () ;

int
FUNC_7(int VAR_13 __attribute__((__unused__)), int VAR_14)
{
 static ct_buffer_t VAR_15, VAR_16;
 const char *VAR_17;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_5();

 if (VAR_11) {
  char VAR_18[2];
  VAR_18[0] = (char)VAR_14;
  VAR_18[1] = '\0';
  FUNC_2(VAR_2, VAR_18);
  return VAR_0;
 }

 if (&FUNC_4 != ((void*)0))
  VAR_17 = FUNC_4)();
 else
  VAR_17 = VAR_6;

 FUNC_0();


 return FUNC_3(VAR_2,
     (rl_compentry_func_t *)VAR_7,
     VAR_4,
     FUNC_1(VAR_6, &VAR_15),
     FUNC_1(VAR_17, &VAR_16),
     VAR_1,
     (size_t)VAR_8,
     &VAR_9, &VAR_5,
     &VAR_12, &VAR_10);


}
