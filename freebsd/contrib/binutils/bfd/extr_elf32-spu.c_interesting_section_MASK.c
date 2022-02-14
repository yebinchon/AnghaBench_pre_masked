
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spu_link_hash_table {TYPE_2__* stub; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int flags; scalar_t__ size; TYPE_1__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_4__ {int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (asection *VAR_3, bfd *VAR_4, struct spu_link_hash_table *VAR_5)
{
  return (VAR_3 != VAR_5->stub
   && VAR_3->output_section != ((void*)0)
   && VAR_3->output_section->owner == VAR_4
   && ((VAR_3->flags & (VAR_0 | VAR_2 | VAR_1))
       == (VAR_0 | VAR_2 | VAR_1))
   && VAR_3->size != 0);
}
