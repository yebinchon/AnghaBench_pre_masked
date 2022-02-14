
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section_hash_entry {int section; } ;
struct TYPE_3__ {int section_htab; } ;
typedef TYPE_1__ bfd ;
typedef int asection ;


 int VAR_0 ;
 struct section_hash_entry* FUNC_0 (int *,char const*,int ,int ) ;

asection *
FUNC_1 (bfd *VAR_1, const char *VAR_2)
{
  struct section_hash_entry *VAR_3;

  VAR_3 = FUNC_0 (&VAR_1->section_htab, VAR_2, VAR_0, VAR_0);
  if (VAR_3 != ((void*)0))
    return &VAR_3->section;

  return ((void*)0);
}
