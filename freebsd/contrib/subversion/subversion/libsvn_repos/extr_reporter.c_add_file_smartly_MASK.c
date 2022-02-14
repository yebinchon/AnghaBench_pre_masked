
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {TYPE_1__* editor; int authz_read_baton; int (* authz_read_func ) (int *,int *,char const*,int ,int *) ;int t_root; scalar_t__ send_copyfrom_args; int repos; } ;
typedef TYPE_2__ report_baton_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int (* add_file ) (char const*,void*,char const*,int ,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,char*,char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *,int *,char const*,int ,int *) ;
 int FUNC_4 (char const*,void*,char const*,int ,int *,void**) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int **,char const**,int ,char const*,int *) ;
 int FUNC_7 (int *,char const**,int *,char const*,int *) ;
 int FUNC_8 (int **,int *,int ,int *) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(report_baton_t *VAR_2,
                 const char *VAR_3,
                 void *VAR_4,
                 const char *VAR_5,
                 void **VAR_6,
                 const char **VAR_7,
                 svn_revnum_t *VAR_8,
                 apr_pool_t *VAR_9)
{

  svn_fs_t *VAR_10 = FUNC_9(VAR_2->repos);
  svn_fs_root_t *VAR_11 = ((void*)0);
  const char *VAR_12 = ((void*)0);


  *VAR_7 = ((void*)0);
  *VAR_8 = VAR_0;

  if (VAR_2->send_copyfrom_args)
    {




      if (*VAR_5 != '/')
        VAR_5 = FUNC_1(VAR_9, "/", VAR_5, VAR_1);

      FUNC_0(FUNC_6(&VAR_11, &VAR_12,
                                  VAR_2->t_root, VAR_5, VAR_9));
      if (VAR_11 != ((void*)0))
        {



          if (FUNC_2(VAR_12, VAR_5) == 0)
            {
              FUNC_0(FUNC_7(VAR_8, VAR_7,
                                         VAR_11, VAR_12,
                                         VAR_9));
              if (VAR_2->authz_read_func)
                {
                  svn_boolean_t VAR_13;
                  svn_fs_root_t *VAR_14;
                  FUNC_0(FUNC_8(&VAR_14, VAR_10,
                                               *VAR_8, VAR_9));
                  FUNC_0(VAR_2->authz_read_func(&VAR_13, VAR_14,
                                             *VAR_7, VAR_2->authz_read_baton,
                                             VAR_9));
                  if (! VAR_13)
                    {
                      *VAR_7 = ((void*)0);
                      *VAR_8 = VAR_0;
                    }
                }
            }
        }
    }

  return FUNC_5(VAR_2->editor->add_file(VAR_3, VAR_4,
                                             *VAR_7, *VAR_8,
                                             VAR_9, VAR_6));
}
