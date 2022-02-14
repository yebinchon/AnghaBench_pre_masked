
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {TYPE_1__* fs_path; int repos_url; } ;
struct TYPE_4__ {int data; } ;


 char* FUNC_0 (char const*,int *) ;
 char* FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int ,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_4(void *VAR_0,
                             const char *VAR_1,
                             apr_pool_t *VAR_2)
{
  server_baton_t *VAR_3 = VAR_0;

  if (FUNC_2(VAR_1))
    {

      VAR_1 = FUNC_3(VAR_3->repository->repos_url, VAR_1, VAR_2);
      VAR_1 = FUNC_0(VAR_1, VAR_2);
    }
  else
    {

      if ((VAR_1)[0] != '/')

        VAR_1 = FUNC_1(VAR_3->repository->fs_path->data, VAR_1, VAR_2);
    }

  return VAR_1;
}
