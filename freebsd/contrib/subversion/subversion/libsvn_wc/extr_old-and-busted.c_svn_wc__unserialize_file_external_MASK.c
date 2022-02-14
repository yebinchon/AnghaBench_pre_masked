
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_1__*,char const**,int *) ;
 void* VAR_1 ;

svn_error_t *
FUNC_3(const char **VAR_2,
                                  svn_opt_revision_t *VAR_3,
                                  svn_opt_revision_t *VAR_4,
                                  const char *VAR_5,
                                  apr_pool_t *VAR_6)
{
  if (VAR_5)
    {
      svn_opt_revision_t VAR_7;
      svn_opt_revision_t VAR_8;
      const char *VAR_9 = VAR_5;

      FUNC_0(FUNC_2(&VAR_7, &VAR_9, VAR_6));
      FUNC_0(FUNC_2(&VAR_8, &VAR_9, VAR_6));

      *VAR_2 = FUNC_1(VAR_6, VAR_9);
      *VAR_3 = VAR_7;
      *VAR_4 = VAR_8;
    }
  else
    {
      *VAR_2 = ((void*)0);
      VAR_3->kind = VAR_1;
      VAR_4->kind = VAR_1;
    }

  return VAR_0;
}
