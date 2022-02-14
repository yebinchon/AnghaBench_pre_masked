
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (void*,size_t) ;

void *
FUNC_3 (void *VAR_2, bfd_size_type VAR_3, bfd_size_type VAR_4)
{
  void *VAR_5;

  if ((VAR_3 | VAR_4) >= VAR_0
      && VAR_4 != 0
      && VAR_3 > ~(bfd_size_type) 0 / VAR_4)
    {
      FUNC_0 (VAR_1);
      return ((void*)0);
    }

  VAR_4 *= VAR_3;

  if (VAR_4 != (size_t) VAR_4)
    {
      FUNC_0 (VAR_1);
      return ((void*)0);
    }

  if (VAR_2 == ((void*)0))
    VAR_5 = FUNC_1 ((size_t) VAR_4);
  else
    VAR_5 = FUNC_2 (VAR_2, (size_t) VAR_4);

  if (VAR_5 == ((void*)0) && (size_t) VAR_4 != 0)
    FUNC_0 (VAR_1);

  return VAR_5;
}
