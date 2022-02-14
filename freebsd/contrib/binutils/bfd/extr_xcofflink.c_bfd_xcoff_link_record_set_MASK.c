
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xcoff_link_size_list {int size; struct xcoff_link_hash_entry* h; struct xcoff_link_size_list* next; } ;
struct xcoff_link_hash_entry {int flags; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {struct xcoff_link_size_list* size_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xcoff_link_size_list* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (struct bfd_link_info*) ;

bfd_boolean
FUNC_3 (bfd *VAR_4,
      struct bfd_link_info *VAR_5,
      struct bfd_link_hash_entry *VAR_6,
      bfd_size_type VAR_7)
{
  struct xcoff_link_hash_entry *VAR_8 = (struct xcoff_link_hash_entry *) VAR_6;
  struct xcoff_link_size_list *VAR_9;
  bfd_size_type VAR_10;

  if (FUNC_1 (VAR_4) != VAR_3)
    return VAR_1;




  VAR_10 = sizeof (* VAR_9);
  VAR_9 = FUNC_0 (VAR_4, VAR_10);
  if (VAR_9 == ((void*)0))
    return VAR_0;
  VAR_9->next = FUNC_2 (VAR_5)->size_list;
  VAR_9->h = VAR_8;
  VAR_9->size = VAR_7;
  FUNC_2 (VAR_5)->size_list = VAR_9;

  VAR_8->flags |= VAR_2;

  return VAR_1;
}
