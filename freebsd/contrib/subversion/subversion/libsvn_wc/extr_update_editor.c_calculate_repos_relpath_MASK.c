
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {char* switch_repos_relpath; char* target_basename; } ;
struct dir_baton {int new_repos_relpath; int * parent_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_1,
                        const char *VAR_2,
                        const char *VAR_3,
                        struct edit_baton *VAR_4,
                        struct dir_baton *VAR_5,
                        apr_pool_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  const char *VAR_8 = FUNC_3(VAR_2, ((void*)0));


  if (VAR_4->switch_repos_relpath)
    {


      if (VAR_5 == ((void*)0))
        {
          if (*VAR_4->target_basename == '\0')
            {



              *VAR_1 = VAR_4->switch_repos_relpath;
            }
          else
            {



              *VAR_1 = FUNC_1(VAR_6, VAR_3);
            }
        }
      else
        {







          if (VAR_5->parent_baton == ((void*)0)
              && FUNC_2(VAR_4->target_basename, VAR_8) == 0)
            *VAR_1 = VAR_4->switch_repos_relpath;
          else
            *VAR_1 = FUNC_4(VAR_5->new_repos_relpath, VAR_8,
                                                  VAR_6);
        }
    }
  else
    {


      if (VAR_3 == ((void*)0))
        {
          FUNC_0(VAR_5 != ((void*)0));
          *VAR_1 = FUNC_4(VAR_5->new_repos_relpath, VAR_8,
                                                VAR_6);
        }
      else
        {
          *VAR_1 = FUNC_1(VAR_6, VAR_3);
        }
    }

  return VAR_0;
}
