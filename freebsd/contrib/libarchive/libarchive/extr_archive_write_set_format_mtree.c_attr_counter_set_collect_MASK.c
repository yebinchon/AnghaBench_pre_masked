
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct att_counter_set {struct attr_counter* flags_list; struct attr_counter* mode_list; struct attr_counter* gid_list; struct attr_counter* uid_list; } ;
struct mtree_writer {int keys; struct att_counter_set acs; } ;
struct mtree_entry {scalar_t__ uid; scalar_t__ gid; scalar_t__ mode; scalar_t__ fflags_set; scalar_t__ fflags_clear; } ;
struct attr_counter {TYPE_1__* m_entry; struct attr_counter* next; } ;
struct TYPE_2__ {scalar_t__ uid; scalar_t__ gid; scalar_t__ mode; scalar_t__ fflags_set; scalar_t__ fflags_clear; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct attr_counter**,struct attr_counter*,struct attr_counter*,struct mtree_entry*) ;
 void* FUNC_1 (struct mtree_entry*,int *) ;

__attribute__((used)) static int
FUNC_2(struct mtree_writer *VAR_6, struct mtree_entry *VAR_7)
{
 struct attr_counter *VAR_8, *VAR_9;
 struct att_counter_set *VAR_10 = &VAR_6->acs;
 int VAR_11 = VAR_6->keys;

 if (VAR_11 & (VAR_5 | VAR_4)) {
  if (VAR_10->uid_list == ((void*)0)) {
   VAR_10->uid_list = FUNC_1(VAR_7, ((void*)0));
   if (VAR_10->uid_list == ((void*)0))
    return (-1);
  } else {
   VAR_9 = ((void*)0);
   for (VAR_8 = VAR_10->uid_list; VAR_8; VAR_8 = VAR_8->next) {
    if (VAR_8->m_entry->uid == VAR_7->uid)
     break;
    VAR_9 = VAR_8;
   }
   if (FUNC_0(&VAR_10->uid_list, VAR_8, VAR_9, VAR_7) < 0)
    return (-1);
  }
 }
 if (VAR_11 & (VAR_2 | VAR_1)) {
  if (VAR_10->gid_list == ((void*)0)) {
   VAR_10->gid_list = FUNC_1(VAR_7, ((void*)0));
   if (VAR_10->gid_list == ((void*)0))
    return (-1);
  } else {
   VAR_9 = ((void*)0);
   for (VAR_8 = VAR_10->gid_list; VAR_8; VAR_8 = VAR_8->next) {
    if (VAR_8->m_entry->gid == VAR_7->gid)
     break;
    VAR_9 = VAR_8;
   }
   if (FUNC_0(&VAR_10->gid_list, VAR_8, VAR_9, VAR_7) < 0)
    return (-1);
  }
 }
 if (VAR_11 & VAR_3) {
  if (VAR_10->mode_list == ((void*)0)) {
   VAR_10->mode_list = FUNC_1(VAR_7, ((void*)0));
   if (VAR_10->mode_list == ((void*)0))
    return (-1);
  } else {
   VAR_9 = ((void*)0);
   for (VAR_8 = VAR_10->mode_list; VAR_8; VAR_8 = VAR_8->next) {
    if (VAR_8->m_entry->mode == VAR_7->mode)
     break;
    VAR_9 = VAR_8;
   }
   if (FUNC_0(&VAR_10->mode_list, VAR_8, VAR_9, VAR_7) < 0)
    return (-1);
  }
 }
 if (VAR_11 & VAR_0) {
  if (VAR_10->flags_list == ((void*)0)) {
   VAR_10->flags_list = FUNC_1(VAR_7, ((void*)0));
   if (VAR_10->flags_list == ((void*)0))
    return (-1);
  } else {
   VAR_9 = ((void*)0);
   for (VAR_8 = VAR_10->flags_list; VAR_8; VAR_8 = VAR_8->next) {
    if (VAR_8->m_entry->fflags_set == VAR_7->fflags_set &&
        VAR_8->m_entry->fflags_clear ==
       VAR_7->fflags_clear)
     break;
    VAR_9 = VAR_8;
   }
   if (FUNC_0(&VAR_10->flags_list, VAR_8, VAR_9, VAR_7) < 0)
    return (-1);
  }
 }

 return (0);
}
