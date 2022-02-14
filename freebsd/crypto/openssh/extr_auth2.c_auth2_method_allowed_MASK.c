
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_5__ {scalar_t__ num_auth_methods; } ;
struct TYPE_4__ {size_t num_auth_methods; int * auth_methods; } ;
typedef TYPE_1__ Authctxt ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,char const*) ;
 TYPE_2__ VAR_1 ;

int
FUNC_1(Authctxt *VAR_2, const char *VAR_3,
    const char *VAR_4)
{
 u_int VAR_5;





 if (VAR_1.num_auth_methods == 0)
  return 1;
 for (VAR_5 = 0; VAR_5 < VAR_2->num_auth_methods; VAR_5++) {
  if (FUNC_0(VAR_2->auth_methods[VAR_5], VAR_3,
      VAR_4) != VAR_0)
   return 1;
 }
 return 0;
}
