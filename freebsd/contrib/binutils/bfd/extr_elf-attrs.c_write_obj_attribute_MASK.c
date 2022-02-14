
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int i; int s; } ;
typedef TYPE_1__ obj_attribute ;
typedef int bfd_byte ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static bfd_byte *
FUNC_4 (bfd_byte *VAR_0, int VAR_1, obj_attribute *VAR_2)
{

  if (FUNC_0 (VAR_2))
    return VAR_0;

  VAR_0 = FUNC_3 (VAR_0, VAR_1);
  if (VAR_2->type & 1)
    VAR_0 = FUNC_3 (VAR_0, VAR_2->i);
  if (VAR_2->type & 2)
    {
      int VAR_3;

      VAR_3 = FUNC_2 (VAR_2->s) + 1;
      FUNC_1 (VAR_0, VAR_2->s, VAR_3);
      VAR_0 += VAR_3;
    }

  return VAR_0;
}
