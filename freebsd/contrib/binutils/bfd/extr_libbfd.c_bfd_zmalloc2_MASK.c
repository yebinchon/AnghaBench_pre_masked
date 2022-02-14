
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,int ,size_t) ;

void *
FUNC_3 (bfd_size_type VAR_2, bfd_size_type VAR_3)
{
  void *VAR_4;

  if ((VAR_2 | VAR_3) >= VAR_0
      && VAR_3 != 0
      && VAR_2 > ~(bfd_size_type) 0 / VAR_3)
    {
      FUNC_0 (VAR_1);
      return ((void*)0);
    }

  VAR_3 *= VAR_2;

  if (VAR_3 != (size_t) VAR_3)
    {
      FUNC_0 (VAR_1);
      return ((void*)0);
    }

  VAR_4 = FUNC_1 ((size_t) VAR_3);

  if ((size_t) VAR_3 != 0)
    {
      if (VAR_4 == ((void*)0))
 FUNC_0 (VAR_1);
      else
 FUNC_2 (VAR_4, 0, (size_t) VAR_3);
    }

  return VAR_4;
}
