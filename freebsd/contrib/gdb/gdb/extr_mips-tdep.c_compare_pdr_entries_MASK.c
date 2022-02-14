
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_1, const void *VAR_2)
{
  CORE_ADDR VAR_3 = FUNC_0 (VAR_0, (bfd_byte *) VAR_1);
  CORE_ADDR VAR_4 = FUNC_0 (VAR_0, (bfd_byte *) VAR_2);

  if (VAR_3 < VAR_4)
    return -1;
  else if (VAR_3 == VAR_4)
    return 0;
  else
    return 1;
}
