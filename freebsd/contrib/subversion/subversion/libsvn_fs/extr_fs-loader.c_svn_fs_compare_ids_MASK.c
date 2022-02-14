
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_id_t ;
struct TYPE_7__ {int (* compare ) (TYPE_2__ const*,TYPE_2__ const*) ;} ;


 int FUNC_0 (TYPE_2__ const*,TYPE_2__ const*) ;



int
FUNC_1(const svn_fs_id_t *VAR_0, const svn_fs_id_t *VAR_1)
{
  switch (VAR_0->vtable->compare(VAR_0, VAR_1))
    {
    case 128:
      return 0;
    case 129:
      return 1;
    default:
      return -1;
    }
}
