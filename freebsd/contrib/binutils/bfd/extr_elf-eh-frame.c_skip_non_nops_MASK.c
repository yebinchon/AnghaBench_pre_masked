
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__**,scalar_t__*,unsigned int) ;

__attribute__((used)) static bfd_byte *
FUNC_1 (bfd_byte *VAR_2, bfd_byte *VAR_3, unsigned int VAR_4,
        unsigned int *VAR_5)
{
  bfd_byte *VAR_6;

  VAR_6 = VAR_2;
  while (VAR_2 < VAR_3)
    if (*VAR_2 == VAR_0)
      VAR_2++;
    else
      {
 if (*VAR_2 == VAR_1)
   ++*VAR_5;
 if (!FUNC_0 (&VAR_2, VAR_3, VAR_4))
   return 0;
 VAR_6 = VAR_2;
      }
  return VAR_6;
}
