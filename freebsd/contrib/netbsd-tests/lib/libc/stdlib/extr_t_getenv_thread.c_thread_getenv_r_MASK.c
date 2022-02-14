
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef scalar_t__ time_t ;
typedef int name ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*,int) ;
 size_t FUNC_2 () ;
 int FUNC_3 (char*,int,char*,size_t) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_4)
{
 time_t VAR_5;

 VAR_5 = *(time_t *)VAR_4;
 do {
  size_t VAR_6;
  char VAR_7[32], VAR_8[128];

  VAR_6 = FUNC_2() % VAR_1;
  (void)FUNC_3(VAR_7, sizeof(VAR_7), VAR_2, VAR_6);

  if (FUNC_1(VAR_7, VAR_8, sizeof(VAR_8)) == -1) {
   FUNC_0(VAR_3 == VAR_0);
  }
 } while (FUNC_4(((void*)0)) < VAR_5);

 return ((void*)0);
}
