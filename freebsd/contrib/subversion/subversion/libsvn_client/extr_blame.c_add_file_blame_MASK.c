
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_file_options_t ;
typedef int svn_cancel_func_t ;
struct rev {int dummy; } ;
struct diff_baton {struct rev* rev; struct blame_chain* chain; } ;
struct blame_chain {int * blame; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (struct blame_chain*,struct rev*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int **,char const*,char const*,int const*,int *) ;
 int FUNC_4 (int *,struct diff_baton*,int *,int ,void*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_2,
               const char *VAR_3,
               struct blame_chain *VAR_4,
               struct rev *VAR_5,
               const svn_diff_file_options_t *VAR_6,
               svn_cancel_func_t VAR_7,
               void *VAR_8,
               apr_pool_t *VAR_9)
{
  if (!VAR_2)
    {
      FUNC_1(VAR_4->blame == ((void*)0));
      VAR_4->blame = FUNC_2(VAR_4, VAR_5, 0);
    }
  else
    {
      svn_diff_t *VAR_10;
      struct diff_baton VAR_11;

      VAR_11.chain = VAR_4;
      VAR_11.rev = VAR_5;


      FUNC_0(FUNC_3(&VAR_10, VAR_2, VAR_3,
                                   VAR_6, VAR_9));
      FUNC_0(FUNC_4(VAR_10, &VAR_11, &VAR_1,
                               VAR_7, VAR_8));
    }

  return VAR_0;
}
