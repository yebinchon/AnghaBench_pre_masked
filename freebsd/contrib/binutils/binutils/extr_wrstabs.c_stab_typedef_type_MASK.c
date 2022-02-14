
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_hash_entry {scalar_t__ index; int size; } ;
struct stab_write_handle {int typedef_hash; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct stab_write_handle*,scalar_t__,int ) ;
 struct string_hash_entry* FUNC_2 (int *,char const*,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_1, const char *VAR_2)
{
  struct stab_write_handle *VAR_3 = (struct stab_write_handle *) VAR_1;
  struct string_hash_entry *VAR_4;

  VAR_4 = FUNC_2 (&VAR_3->typedef_hash, VAR_2, VAR_0, VAR_0);
  FUNC_0 (VAR_4 != ((void*)0) && VAR_4->index > 0);

  return FUNC_1 (VAR_3, VAR_4->index, VAR_4->size);
}
