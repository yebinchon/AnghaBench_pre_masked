
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lang_definedness_hash_entry {int iteration; } ;
struct bfd_link_hash_entry {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_1 (const char *VAR_6, struct bfd_link_hash_entry *VAR_7)
{
  struct lang_definedness_hash_entry *VAR_8
    = (struct lang_definedness_hash_entry *)
    FUNC_0 (&VAR_4, VAR_6, VAR_0, VAR_0);


  if (VAR_8 == ((void*)0))
    return;
  if (VAR_7->type != VAR_3
      && VAR_7->type != VAR_1
      && VAR_7->type != VAR_2
      && VAR_8->iteration == -1)
    return;

  VAR_8->iteration = VAR_5;
}
