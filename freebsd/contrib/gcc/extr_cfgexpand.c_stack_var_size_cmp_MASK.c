
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; int decl; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 unsigned int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_1, const void *VAR_2)
{
  HOST_WIDE_INT VAR_3 = VAR_0[*(const size_t *)VAR_1].size;
  HOST_WIDE_INT VAR_4 = VAR_0[*(const size_t *)VAR_2].size;
  unsigned int VAR_5 = FUNC_0 (VAR_0[*(const size_t *)VAR_1].decl);
  unsigned int VAR_6 = FUNC_0 (VAR_0[*(const size_t *)VAR_2].decl);

  if (VAR_3 < VAR_4)
    return -1;
  if (VAR_3 > VAR_4)
    return 1;


  if (VAR_5 < VAR_6)
    return -1;
  if (VAR_5 > VAR_6)
    return 1;
  return 0;
}
