
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct coff_final_link_info {int info; } ;
typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ output_has_begun; } ;
typedef TYPE_1__ bfd ;
struct TYPE_5__ {TYPE_1__* bfd_of_glue_owner; } ;


 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd * VAR_0, struct coff_final_link_info * VAR_1)
{
  return (VAR_0->output_has_begun
   || VAR_0 == FUNC_0 (VAR_1->info)->bfd_of_glue_owner);
}
