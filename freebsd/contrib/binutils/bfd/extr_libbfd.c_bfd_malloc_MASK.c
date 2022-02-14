
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t bfd_size_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;

void *
FUNC_2 (bfd_size_type VAR_1)
{
  void *VAR_2;

  if (VAR_1 != (size_t) VAR_1)
    {
      FUNC_0 (VAR_0);
      return ((void*)0);
    }

  VAR_2 = FUNC_1 ((size_t) VAR_1);
  if (VAR_2 == ((void*)0) && (size_t) VAR_1 != 0)
    FUNC_0 (VAR_0);

  return VAR_2;
}
