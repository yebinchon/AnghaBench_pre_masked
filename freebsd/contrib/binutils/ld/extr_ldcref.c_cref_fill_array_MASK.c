
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * string; } ;
struct cref_hash_entry {TYPE_1__ root; int * demangled; } ;
typedef int bfd_boolean ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct cref_hash_entry *VAR_4, void *VAR_5)
{
  struct cref_hash_entry ***VAR_6 = VAR_5;

  FUNC_0 (VAR_4->demangled == ((void*)0));
  VAR_4->demangled = FUNC_1 (VAR_3, VAR_4->root.string,
          VAR_0 | VAR_1);
  if (VAR_4->demangled == ((void*)0))
    VAR_4->demangled = VAR_4->root.string;

  **VAR_6 = VAR_4;

  ++*VAR_6;

  return VAR_2;
}
