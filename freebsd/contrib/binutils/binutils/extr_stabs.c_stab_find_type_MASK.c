
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef scalar_t__ debug_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,scalar_t__*,char const*) ;
 scalar_t__* FUNC_1 (struct stab_handle*,int const*) ;
 scalar_t__ FUNC_2 (void*,struct stab_handle*,int const) ;

__attribute__((used)) static debug_type
FUNC_3 (void *VAR_1, struct stab_handle *VAR_2, const int *VAR_3)
{
  debug_type *VAR_4;

  if (VAR_3[0] == 0 && VAR_3[1] < 0)
    {

      return FUNC_2 (VAR_1, VAR_2, VAR_3[1]);
    }

  VAR_4 = FUNC_1 (VAR_2, VAR_3);
  if (VAR_4 == ((void*)0))
    return VAR_0;

  if (*VAR_4 == VAR_0)
    return FUNC_0 (VAR_1, VAR_4, (const char *) ((void*)0));

  return *VAR_4;
}
