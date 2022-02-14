
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_hash_entry {int dummy; } ;
struct TYPE_4__ {int size; int table; } ;
struct TYPE_5__ {TYPE_1__ section_htab; scalar_t__ section_count; int * section_last; int * sections; } ;
typedef TYPE_2__ bfd ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1 (bfd *VAR_0)
{
  VAR_0->sections = ((void*)0);
  VAR_0->section_last = ((void*)0);
  VAR_0->section_count = 0;
  FUNC_0 (VAR_0->section_htab.table, 0,
   VAR_0->section_htab.size * sizeof (struct bfd_hash_entry *));
}
