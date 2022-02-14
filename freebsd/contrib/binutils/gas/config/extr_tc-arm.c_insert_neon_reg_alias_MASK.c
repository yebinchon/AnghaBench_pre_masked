
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {struct neon_typed_alias* neon; } ;
struct neon_typed_alias {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct reg_entry* FUNC_2 (char*,int,int) ;
 struct neon_typed_alias* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1, int VAR_2,
                       struct neon_typed_alias *VAR_3)
{
  struct reg_entry *VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_2);

  if (!VAR_4)
    {
      FUNC_1 (FUNC_0("attempt to redefine typed alias"));
      return;
    }

  if (VAR_3)
    {
      VAR_4->neon = FUNC_3 (sizeof (struct neon_typed_alias));
      *VAR_4->neon = *VAR_3;
    }
}
