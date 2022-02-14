
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,size_t) ;
 void* FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (size_t) ;

void *
FUNC_3 (void *VAR_0, void *VAR_1, size_t VAR_2)
{
  void *VAR_3;



  if (VAR_2 == 0)
    VAR_2 = 1;

  if (VAR_1 != ((void*)0))
    VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  else
    VAR_3 = FUNC_0 (VAR_0, VAR_2);
  if (VAR_3 == ((void*)0))
    FUNC_2 (VAR_2);

  return (VAR_3);
}
