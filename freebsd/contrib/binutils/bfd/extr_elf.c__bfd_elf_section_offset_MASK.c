
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_7__ {int sec_info_type; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {int sec_info; } ;




 int FUNC_0 (int *,struct bfd_link_info*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

bfd_vma
FUNC_3 (bfd *VAR_0,
    struct bfd_link_info *VAR_1,
    asection *VAR_2,
    bfd_vma VAR_3)
{
  switch (VAR_2->sec_info_type)
    {
    case 128:
      return FUNC_1 (VAR_2, FUNC_2 (VAR_2)->sec_info,
           VAR_3);
    case 129:
      return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3);
    default:
      return VAR_3;
    }
}
