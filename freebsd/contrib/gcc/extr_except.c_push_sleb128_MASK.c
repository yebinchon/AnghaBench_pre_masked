
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varray_type ;


 int FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static void
FUNC_1 (varray_type *VAR_0, int VAR_1)
{
  unsigned char VAR_2;
  int VAR_3;

  do
    {
      VAR_2 = VAR_1 & 0x7f;
      VAR_1 >>= 7;
      VAR_3 = ! ((VAR_1 == 0 && (VAR_2 & 0x40) == 0)
  || (VAR_1 == -1 && (VAR_2 & 0x40) != 0));
      if (VAR_3)
 VAR_2 |= 0x80;
      FUNC_0 (*VAR_0, VAR_2);
    }
  while (VAR_3);
}
