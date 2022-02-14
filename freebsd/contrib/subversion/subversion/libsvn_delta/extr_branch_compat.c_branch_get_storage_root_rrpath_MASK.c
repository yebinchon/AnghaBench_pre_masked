
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bid; } ;
typedef TYPE_1__ svn_branch__state_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (TYPE_1__ const*,int *) ;
 char const* FUNC_3 (char const*,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_4(const svn_branch__state_t *VAR_0,
                               apr_pool_t *VAR_1)
{
  int VAR_2 = FUNC_1(VAR_0->bid + 1);
  const char *VAR_3 = FUNC_0(VAR_1, "top%d", VAR_2);
  const char *VAR_4 = FUNC_2(VAR_0, VAR_1);

  return FUNC_3(VAR_3, VAR_4, VAR_1);
}
