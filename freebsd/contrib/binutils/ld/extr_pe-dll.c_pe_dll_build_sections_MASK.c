
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_info {int shared; } ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ num_exports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct bfd_link_info*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct bfd_link_info*) ;

void
FUNC_5 (bfd *VAR_1, struct bfd_link_info *VAR_2)
{
  FUNC_3 (FUNC_0 (VAR_1));
  FUNC_4 (VAR_1, VAR_2);

  if (VAR_0->num_exports == 0 && !VAR_2->shared)
    return;

  FUNC_2 (VAR_1, VAR_2);
  FUNC_1 (1);
}
