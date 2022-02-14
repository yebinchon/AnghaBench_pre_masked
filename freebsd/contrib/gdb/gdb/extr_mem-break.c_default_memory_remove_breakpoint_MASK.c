
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 unsigned char* FUNC_0 (int *,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;

int
FUNC_3 (CORE_ADDR VAR_0, char *VAR_1)
{
  const unsigned char *VAR_2;
  int VAR_3;


  VAR_2 = FUNC_0 (&VAR_0, &VAR_3);
  if (VAR_2 == ((void*)0))
    FUNC_1 ("Software breakpoints not implemented for this target.");

  return FUNC_2 (VAR_0, VAR_1, VAR_3);
}
