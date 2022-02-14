
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int key; } ;
typedef TYPE_1__ symbol ;
struct TYPE_6__ {int mangled; } ;
typedef TYPE_2__ demangled ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (char const*,int) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (void)
{
  symbol *VAR_2;

  while ((VAR_2 = FUNC_2 ()) != ((void*)0))
    {
      demangled *VAR_3;
      const char *VAR_4 = FUNC_0 (VAR_2->key, VAR_1 | VAR_0);

      if (! VAR_4)
 continue;

      VAR_3 = FUNC_1 (VAR_4, 1);
      VAR_3->mangled = VAR_2->key;
    }
}
