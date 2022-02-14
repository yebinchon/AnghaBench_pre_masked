
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ handler; } ;
struct pragma_entry {int allow_expansion; TYPE_1__ u; } ;
typedef scalar_t__ pragma_cb ;
typedef int cpp_reader ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 struct pragma_entry* FUNC_1 (int *,char const*,char const*,int) ;

void
FUNC_2 (cpp_reader *VAR_1, const char *VAR_2, const char *VAR_3,
       pragma_cb VAR_4, bool VAR_5)
{
  struct pragma_entry *VAR_6;

  if (!VAR_4)
    {
      FUNC_0 (VAR_1, VAR_0, "registering pragma with NULL handler");
      return;
    }

  VAR_6 = FUNC_1 (VAR_1, VAR_2, VAR_3, 0);
  if (VAR_6)
    {
      VAR_6->allow_expansion = VAR_5;
      VAR_6->u.handler = VAR_4;
    }
}
