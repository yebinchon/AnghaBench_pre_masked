
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {int reader; TYPE_2__* lookahead; int pool; } ;
typedef TYPE_1__ report_baton_t ;
struct TYPE_8__ {char* path; } ;
typedef TYPE_2__ path_info_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (TYPE_2__**,int ,int *) ;
 int FUNC_3 (TYPE_2__*,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(report_baton_t *VAR_1, const char **VAR_2, path_info_t **VAR_3,
                const char *VAR_4, apr_pool_t *VAR_5)
{
  apr_size_t VAR_6 = FUNC_5(VAR_4);
  const char *VAR_7, *VAR_8;
  apr_pool_t *VAR_9;

  if (!FUNC_3(VAR_1->lookahead, VAR_4, VAR_6))
    {

      *VAR_2 = ((void*)0);
      *VAR_3 = ((void*)0);
    }
  else
    {

      VAR_7 = VAR_1->lookahead->path + (*VAR_4 ? VAR_6 + 1 : 0);
      VAR_8 = FUNC_4(VAR_7, '/');
      if (VAR_8)
        {

          *VAR_2 = FUNC_1(VAR_5, VAR_7, VAR_8 - VAR_7);
          *VAR_3 = ((void*)0);
        }
      else
        {

          *VAR_2 = VAR_7;
          *VAR_3 = VAR_1->lookahead;
          VAR_9 = FUNC_6(VAR_1->pool);
          FUNC_0(FUNC_2(&VAR_1->lookahead, VAR_1->reader, VAR_9));
        }
    }
  return VAR_0;
}
