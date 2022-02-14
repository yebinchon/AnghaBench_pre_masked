
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int base_revision; int root_op; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const**,int *,int ,char const*,int *,int *) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_4,
                svn_revnum_t *VAR_5,
                const char *VAR_6,
                svn_boolean_t VAR_7,
                svn_client__mtcc_t *VAR_8,
                apr_pool_t *VAR_9,
                apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11 = VAR_0;

  *VAR_4 = ((void*)0);
  *VAR_5 = VAR_2;

  FUNC_0(FUNC_3(&VAR_11, VAR_4, VAR_5, VAR_8->root_op, VAR_6,
                     VAR_9, VAR_10));

  if (!*VAR_4 && !VAR_11)
    {
      *VAR_4 = FUNC_2(VAR_9, VAR_6);
      *VAR_5 = VAR_8->base_revision;
    }
  else if (!VAR_7)
    {
      return FUNC_4(VAR_1, ((void*)0),
                               FUNC_1("No origin found for node at '%s'"),
                               VAR_6);
    }

  return VAR_3;
}
