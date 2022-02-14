
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_3 (int*,int *,int *,int ,char const*,int *) ;
 int FUNC_4 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *,int*,int*,int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_4,
                               svn_boolean_t *VAR_5,
                               svn_boolean_t *VAR_6,
                               svn_boolean_t *VAR_7,
                               svn_revnum_t *VAR_8,
                               svn_revnum_t *VAR_9,
                               const char **VAR_10,
                               svn_wc_context_t *VAR_11,
                               const char *VAR_12,
                               apr_pool_t *VAR_13,
                               apr_pool_t *VAR_14)
{
  svn_wc__db_status_t VAR_15;
  svn_boolean_t VAR_16;
  svn_boolean_t VAR_17;
  svn_boolean_t VAR_18;


  FUNC_0(FUNC_4(&VAR_15, ((void*)0), VAR_8, ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_10, ((void*)0), ((void*)0),
                               VAR_9, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0),
                               &VAR_18, ((void*)0), ((void*)0),
                               &VAR_16, &VAR_17, ((void*)0),
                               VAR_11->db, VAR_12,
                               VAR_13, VAR_14));

  if (VAR_4)
    *VAR_4 = (VAR_15 == VAR_2);
  if (VAR_5)
    *VAR_5 = (VAR_15 == VAR_3);
  if (VAR_7)
    *VAR_7 = VAR_18;

  if (VAR_6)
    {
      if (VAR_15 == VAR_2
          && VAR_18
          && (VAR_16 || VAR_17))
        FUNC_0(FUNC_3(VAR_6, ((void*)0), ((void*)0),
                                              VAR_11->db, VAR_12,
                                              VAR_14));
      else
        *VAR_6 = VAR_0;
    }



  if (VAR_16
      && !VAR_17
      && VAR_18
      && (VAR_8 && !FUNC_1(*VAR_8)))
    {
      FUNC_0(FUNC_2(((void*)0), ((void*)0), VAR_8, ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       VAR_11->db, VAR_12,
                                       VAR_14, VAR_14));
    }

  return VAR_1;
}
