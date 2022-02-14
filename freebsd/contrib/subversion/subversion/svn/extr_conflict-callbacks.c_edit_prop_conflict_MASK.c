
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ svn_cmdline_prompt_baton_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int const*,int const*,int const*,int *,int ,int ,int *) ;
 int FUNC_2 (scalar_t__*,char const*,char const*,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const**,int *,int ,int *,int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const svn_string_t **VAR_3,
                   const svn_string_t *VAR_4,
                   const svn_string_t *VAR_5,
                   const svn_string_t *VAR_6,
                   const char *VAR_7,
                   apr_hash_t *VAR_8,
                   svn_cmdline_prompt_baton_t *VAR_9,
                   apr_pool_t *VAR_10,
                   apr_pool_t *VAR_11)
{
  const char *VAR_12;
  svn_boolean_t VAR_13 = VAR_0;
  svn_stream_t *VAR_14;

  FUNC_0(FUNC_4(&VAR_14, &VAR_12, ((void*)0),
                                 VAR_2,
                                 VAR_11, VAR_11));
  FUNC_0(FUNC_1(VAR_14, VAR_4, VAR_5,
                              VAR_6, ((void*)0),
                              VAR_9->cancel_func,
                              VAR_9->cancel_baton,
                              VAR_11));
  FUNC_0(FUNC_3(VAR_14));
  FUNC_0(FUNC_2(&VAR_13, VAR_12, VAR_7,
                      VAR_8, VAR_11));
  if (VAR_13 && VAR_3)
    {
      svn_stringbuf_t *VAR_15;

      FUNC_0(FUNC_6(&VAR_15, VAR_12, VAR_11));
      *VAR_3 = FUNC_5(VAR_15, VAR_10);
    }

  return VAR_1;
}
