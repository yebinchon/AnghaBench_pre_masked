
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct symlink_baton_t {void* at_eof; int local_abspath; } ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int **,int *,int const,int *) ;
 int FUNC_2 (int **,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_3, svn_stringbuf_t **VAR_4, const char **VAR_5,
                 svn_boolean_t *VAR_6, apr_pool_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  struct symlink_baton_t *VAR_9 = VAR_3;

  if (VAR_6)
    *VAR_6 = VAR_2;
  if (VAR_5)
    *VAR_5 = ((void*)0);

  if (VAR_9->at_eof)
    {
      *VAR_4 = ((void*)0);
    }
  else
    {
      svn_stream_t *VAR_10;
      const apr_size_t VAR_11 = 64;

      FUNC_0(FUNC_2(&VAR_10, VAR_9->local_abspath,
                                         VAR_8, VAR_8));
      FUNC_0(FUNC_1(VAR_4, VAR_10, VAR_11, VAR_7));
      *VAR_6 = VAR_0;
      VAR_9->at_eof = VAR_2;
    }

  return VAR_1;
}
