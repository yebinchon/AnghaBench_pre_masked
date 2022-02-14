
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct ieee_handle*,int) ;
 int VAR_5 ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct ieee_handle *VAR_6, bfd_vma VAR_7)
{
  bfd_vma VAR_8;
  bfd_byte VAR_9[20];
  bfd_byte *VAR_10;
  unsigned int VAR_11;

  if (VAR_7 <= (bfd_vma) VAR_2)
    return FUNC_3 (VAR_6, (int) VAR_7);

  VAR_8 = VAR_7;
  VAR_10 = VAR_9 + sizeof VAR_9;
  while (VAR_8 != 0)
    {
      *--VAR_10 = VAR_8 & 0xff;
      VAR_8 >>= 8;
    }
  VAR_11 = (VAR_9 + 20) - VAR_10;

  if (VAR_11 > (unsigned int) (VAR_3
     - VAR_4))
    {
      FUNC_1 (VAR_5, "%s", FUNC_0("IEEE numeric overflow: 0x"));
      FUNC_2 (VAR_5, VAR_7);
      FUNC_1 (VAR_5, "\n");
      return VAR_0;
    }

  if (! FUNC_3 (VAR_6, (int) VAR_4 + VAR_11))
    return VAR_0;
  for (; VAR_11 > 0; --VAR_11, ++VAR_10)
    {
      if (! FUNC_3 (VAR_6, *VAR_10))
 return VAR_0;
    }

  return VAR_1;
}
