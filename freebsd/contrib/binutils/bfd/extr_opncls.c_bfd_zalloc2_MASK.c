
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,size_t) ;

void *
FUNC_3 (bfd *VAR_2, bfd_size_type VAR_3, bfd_size_type VAR_4)
{
  void *VAR_5;

  if ((VAR_3 | VAR_4) >= VAR_0
      && VAR_4 != 0
      && VAR_3 > ~(bfd_size_type) 0 / VAR_4)
    {
      FUNC_1 (VAR_1);
      return ((void*)0);
    }

  VAR_4 *= VAR_3;

  VAR_5 = FUNC_0 (VAR_2, VAR_4);
  if (VAR_5)
    FUNC_2 (VAR_5, 0, (size_t) VAR_4);
  return VAR_5;
}
