
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_link_info {int hash; } ;
struct TYPE_3__ {int sec_info_type; int vma; int output_offset; int output_section; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void
FUNC_1 (asection *VAR_2, struct bfd_link_info *VAR_3)
{
  VAR_2->output_section = VAR_1;
  VAR_2->output_offset = VAR_2->vma;
  if (!FUNC_0 (VAR_3->hash))
    return;

  VAR_2->sec_info_type = VAR_0;
}
