
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 unsigned char* FUNC_0 (int *,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4 (CORE_ADDR VAR_0, char *VAR_1)
{
  int VAR_2;
  const unsigned char *VAR_3;
  int VAR_4;


  VAR_3 = FUNC_0 (&VAR_0, &VAR_4);
  if (VAR_3 == ((void*)0))
    FUNC_1 ("Software breakpoints not implemented for this target.");


  VAR_2 = FUNC_2 (VAR_0, VAR_1, VAR_4);


  if (VAR_2 == 0)
    VAR_2 = FUNC_3 (VAR_0, (char *) VAR_3, VAR_4);

  return VAR_2;
}
