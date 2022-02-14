
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handler; } ;
struct pragma_entry {int is_internal; TYPE_1__ u; } ;
typedef int pragma_cb ;
typedef int cpp_reader ;


 struct pragma_entry* FUNC_0 (int *,char const*,char const*,int) ;

__attribute__((used)) static void
FUNC_1 (cpp_reader *VAR_0, const char *VAR_1,
     const char *VAR_2, pragma_cb VAR_3)
{
  struct pragma_entry *VAR_4;

  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2, 0);
  VAR_4->is_internal = 1;
  VAR_4->u.handler = VAR_3;
}
