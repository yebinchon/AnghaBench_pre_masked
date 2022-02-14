
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_subst_eol_style_t ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,char*,int ) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int **,int ,char const*,char const*,char const*,int ,char const*,int *) ;
 int FUNC_5 (int *,char const**,int ) ;
 int FUNC_6 (int *,int *,char const**,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,char const**,char const**,int *,int *,char const*,int *,int *) ;
 int FUNC_8 (int **,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_hash_t **VAR_3,
                                 svn_subst_eol_style_t *VAR_4,
                                 const char **VAR_5,
                                 svn_wc_context_t *VAR_6,
                                 const char *VAR_7,
                                 apr_pool_t *VAR_8,
                                 apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;
  svn_string_t *VAR_11, *VAR_12;

  FUNC_0(FUNC_8(&VAR_10, VAR_6, VAR_7,
                            VAR_9, VAR_9));
  VAR_11 = FUNC_2(VAR_10, VAR_2);
  if (VAR_11)
    {
      svn_revnum_t VAR_13;
      apr_time_t VAR_14;
      const char *VAR_15;
      const char *VAR_16;
      const char *VAR_17;
      const char *VAR_18;
      const char *VAR_19;

      FUNC_0(FUNC_6(&VAR_13,
                                            &VAR_14,
                                            &VAR_16, VAR_6,
                                            VAR_7,
                                            VAR_9,
                                            VAR_9));
      VAR_15 = FUNC_1(VAR_9, "%ld", VAR_13);
      FUNC_0(FUNC_7(((void*)0), &VAR_19, &VAR_18,
                                          ((void*)0),
                                          VAR_6, VAR_7,
                                          VAR_9, VAR_9));
      VAR_17 = FUNC_3(VAR_18, VAR_19,
                                        VAR_9);

      FUNC_0(FUNC_4(VAR_3,
                                        VAR_11->data,
                                        VAR_15, VAR_17, VAR_18,
                                        VAR_14,
                                        VAR_16, VAR_8));
    }

  VAR_12 = FUNC_2(VAR_10, VAR_1);
  if (VAR_12)
    {
      FUNC_5(VAR_4,
                                     VAR_5,
                                     VAR_12->data);
    }

  return VAR_0;
}
