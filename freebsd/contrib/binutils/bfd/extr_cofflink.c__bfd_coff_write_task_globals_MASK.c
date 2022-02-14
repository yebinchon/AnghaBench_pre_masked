
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ link; } ;
struct TYPE_6__ {TYPE_2__ i; } ;
struct TYPE_4__ {int type; TYPE_3__ u; } ;
struct coff_link_hash_entry {scalar_t__ indx; TYPE_1__ root; } ;
struct coff_final_link_info {void* global_to_static; } ;
typedef void* bfd_boolean ;


 void* VAR_0 ;
 void* FUNC_0 (struct coff_link_hash_entry*,void*) ;


 int VAR_1 ;

bfd_boolean
FUNC_1 (struct coff_link_hash_entry *VAR_2, void *VAR_3)
{
  struct coff_final_link_info *VAR_4 = (struct coff_final_link_info *) VAR_3;
  bfd_boolean VAR_5 = VAR_0;
  bfd_boolean VAR_6;

  if (VAR_2->root.type == VAR_1)
    VAR_2 = (struct coff_link_hash_entry *) VAR_2->root.u.i.link;

  if (VAR_2->indx < 0)
    {
      switch (VAR_2->root.type)
 {
 case 129:
 case 128:
   VAR_6 = VAR_4->global_to_static;
   VAR_4->global_to_static = VAR_0;
   VAR_5 = FUNC_0 (VAR_2, VAR_3);
   VAR_4->global_to_static = VAR_6;
   break;
 default:
   break;
 }
    }
  return (VAR_5);
}
