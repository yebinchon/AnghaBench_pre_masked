
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef scalar_t__ time_t ;
typedef int name ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 char* VAR_1 ;
 size_t FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,size_t) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_2)
{
 time_t VAR_3;

 VAR_3 = *(time_t *)VAR_2;
 do {
  size_t VAR_4;
  char VAR_5[32], VAR_6[64];

  VAR_4 = FUNC_1() % VAR_0;
  (void)FUNC_3(VAR_5, sizeof(VAR_5), VAR_1, VAR_4);
  (void)FUNC_3(VAR_6, sizeof(VAR_6), "setenv %ld", FUNC_1());

  FUNC_0(FUNC_2(VAR_5, VAR_6, 1) != -1);
 } while (FUNC_4(((void*)0)) < VAR_3);

 return ((void*)0);
}
