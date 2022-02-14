
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ident; } ;
struct pragma_entry {int is_deferred; int allow_expansion; TYPE_1__ u; } ;
typedef int cpp_reader ;


 struct pragma_entry* FUNC_0 (int *,char const*,char const*,int) ;

void
FUNC_1 (cpp_reader *VAR_0, const char *VAR_1,
         const char *VAR_2, unsigned int VAR_3,
         bool VAR_4, bool VAR_5)
{
  struct pragma_entry *VAR_6;

  VAR_6 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_5);
  if (VAR_6)
    {
      VAR_6->is_deferred = 1;
      VAR_6->allow_expansion = VAR_4;
      VAR_6->u.ident = VAR_3;
    }
}
