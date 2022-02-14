
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (bfd *VAR_3, bfd_boolean *VAR_4)
{
  bfd_byte VAR_5;

  if (FUNC_0 (&VAR_5, (bfd_size_type) 1, VAR_3) != 1)
    {
      if (FUNC_1 () != VAR_2)
 *VAR_4 = VAR_1;
      return VAR_0;
    }

  return (int) (VAR_5 & 0xff);
}
