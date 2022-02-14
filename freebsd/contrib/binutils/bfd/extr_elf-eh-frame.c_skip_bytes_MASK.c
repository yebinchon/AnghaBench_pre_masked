
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bfd_boolean
FUNC_0 (bfd_byte **VAR_2, bfd_byte *VAR_3, bfd_size_type VAR_4)
{
  if ((bfd_size_type) (VAR_3 - *VAR_2) < VAR_4)
    {
      *VAR_2 = VAR_3;
      return VAR_0;
    }
  *VAR_2 += VAR_4;
  return VAR_1;
}
