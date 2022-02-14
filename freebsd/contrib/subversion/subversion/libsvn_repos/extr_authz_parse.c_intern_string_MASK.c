
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int strings; TYPE_1__* authz; } ;
typedef TYPE_2__ ctor_baton_t ;
typedef int apr_size_t ;
struct TYPE_4__ {int pool; } ;


 char* FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,char const*,int ,char const*) ;
 char* FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static const char *
FUNC_4(ctor_baton_t *VAR_0, const char *VAR_1, apr_size_t VAR_2)
{
  const char *VAR_3;

  if (VAR_2 == (apr_size_t)-1)
    VAR_2 = FUNC_3(VAR_1);

  VAR_3 = FUNC_0(VAR_0->strings, VAR_1, VAR_2);
  if (!VAR_3)
    {
      VAR_3 = FUNC_2(VAR_0->authz->pool, VAR_1, VAR_2);
      FUNC_1(VAR_0->strings, VAR_3, VAR_2, VAR_3);
    }
  return VAR_3;
}
