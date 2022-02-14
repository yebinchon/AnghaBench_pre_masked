
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char**,int) ;
 scalar_t__ VAR_6 ;
 int * FUNC_3 () ;
 int VAR_7 ;

void
FUNC_4(void)
{
 char **VAR_8;

 VAR_8 = VAR_4;
 VAR_7 = VAR_2;
 VAR_0 = VAR_1;
 VAR_6 = 0;
 for (VAR_3 = 0; ; VAR_3++) {

  if (VAR_3 == VAR_5) {
   int VAR_9;

   VAR_4 = (VAR_5 == 0)
    ? (char **)FUNC_1(20 * sizeof(char *))
    : (char **)FUNC_2(VAR_4,
     (VAR_5 + 20)*sizeof(char *));
   if (VAR_4 == ((void*)0))
    FUNC_0(1, "cannot realloc argv array");
   for(VAR_9 = VAR_5; VAR_9 < VAR_5 + 20; ++VAR_9)
    VAR_4[VAR_9] = ((void*)0);
   VAR_5 += 20;
   VAR_8 = VAR_4 + VAR_3;
  }

  if ((*VAR_8++ = FUNC_3()) == ((void*)0))
   break;
 }

}
