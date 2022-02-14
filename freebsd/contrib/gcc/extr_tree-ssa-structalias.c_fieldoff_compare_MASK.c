
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; int size; } ;
typedef TYPE_1__ fieldoff_s ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const fieldoff_s *VAR_2 = (const fieldoff_s *)VAR_0;
  const fieldoff_s *VAR_3 = (const fieldoff_s *)VAR_1;
  HOST_WIDE_INT VAR_4, VAR_5;

  if (VAR_2->offset != VAR_3->offset)
    return VAR_2->offset - VAR_3->offset;

  VAR_4 = FUNC_0 (VAR_2->size);
  VAR_5 = FUNC_0 (VAR_3->size);
  return VAR_4 - VAR_5;
}
