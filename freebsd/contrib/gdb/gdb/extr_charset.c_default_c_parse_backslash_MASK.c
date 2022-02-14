
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int * VAR_1 ;
 char* FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_2, int VAR_3, int *VAR_4)
{
  const char *VAR_5;

  VAR_5 = FUNC_1 (VAR_0, VAR_3);

  if (! VAR_5)
    return 0;
  else
    return FUNC_0 (VAR_1[VAR_5 - VAR_0],
                                VAR_4);
}
