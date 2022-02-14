
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_3__ {int * repository; int * user; } ;
typedef TYPE_1__ authz_user_rules_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const authz_user_rules_t *VAR_1,
                      const char *VAR_2,
                      const char *VAR_3)
{

  if (VAR_3)
    {
      if (VAR_1->user == ((void*)0) || FUNC_0(VAR_3, VAR_1->user))
        return VAR_0;
    }
  else if (VAR_1->user != ((void*)0))
    return VAR_0;


  return FUNC_0(VAR_2, VAR_1->repository) == 0;
}
