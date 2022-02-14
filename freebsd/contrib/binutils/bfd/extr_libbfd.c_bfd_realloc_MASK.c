
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t bfd_size_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (void*,size_t) ;

void *
FUNC_3 (void *VAR_1, bfd_size_type VAR_2)
{
  void *VAR_3;

  if (VAR_2 != (size_t) VAR_2)
    {
      FUNC_0 (VAR_0);
      return ((void*)0);
    }

  if (VAR_1 == ((void*)0))
    VAR_3 = FUNC_1 ((size_t) VAR_2);
  else
    VAR_3 = FUNC_2 (VAR_1, (size_t) VAR_2);

  if (VAR_3 == ((void*)0) && (size_t) VAR_2 != 0)
    FUNC_0 (VAR_0);

  return VAR_3;
}
