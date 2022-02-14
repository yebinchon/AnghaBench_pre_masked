
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_3, bfd *VAR_4)
{
  if (FUNC_1 (VAR_3) != VAR_2
      || FUNC_1 (VAR_4) != VAR_2)
    return VAR_0;

  if (FUNC_0 (VAR_4) == VAR_1)
    {
      if (FUNC_2 (VAR_4) < FUNC_2 (VAR_3))
 FUNC_3 (VAR_4, VAR_1, FUNC_2 (VAR_3));
    }

  return VAR_0;
}
