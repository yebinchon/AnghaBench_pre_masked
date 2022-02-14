
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int *,int *) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned long,char*) ;

int FUNC_5(unsigned long VAR_1, char *VAR_2)
{
 VAR_2[0] = '\0';
 VAR_2[VAR_0 - 1] = '\0';

 if (FUNC_2(VAR_1)) {
  unsigned long VAR_3;

  VAR_3 = FUNC_1(VAR_1, ((void*)0), ((void*)0));

  FUNC_3(FUNC_0(VAR_3), VAR_2);
  return 0;
 }

 return FUNC_4(VAR_1, VAR_2);
}
