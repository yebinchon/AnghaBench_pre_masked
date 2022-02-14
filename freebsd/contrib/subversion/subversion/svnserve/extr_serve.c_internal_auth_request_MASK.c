
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;
typedef int apr_pool_t ;
struct TYPE_6__ {char* realm; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,char const*,char const*,TYPE_2__*,int,int ,int *) ;
 int FUNC_2 (int *,int *,TYPE_2__*,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*,char const**,char const**) ;
 int FUNC_7 (int *,int *,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2,
                      server_baton_t *VAR_3, enum access_type VAR_4,
                      svn_boolean_t VAR_5)
{
  svn_boolean_t VAR_6;
  const char *VAR_7, *VAR_8;
  apr_pool_t *VAR_9;

  FUNC_0(FUNC_7(VAR_1, VAR_2, "w((!", "success"));
  FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
  FUNC_0(FUNC_7(VAR_1, VAR_2, "!)c)", VAR_3->repository->realm));

  VAR_9 = FUNC_4(VAR_2);
  do
    {
      FUNC_3(VAR_9);

      FUNC_0(FUNC_6(VAR_1, VAR_2, "w(?c)", &VAR_7, &VAR_8));
      if (!*VAR_7)
        break;
      FUNC_0(FUNC_1(&VAR_6, VAR_1, VAR_7, VAR_8, VAR_3, VAR_4,
                   VAR_5, VAR_9));
    }
  while (!VAR_6);
  FUNC_5(VAR_9);

  return VAR_0;
}
