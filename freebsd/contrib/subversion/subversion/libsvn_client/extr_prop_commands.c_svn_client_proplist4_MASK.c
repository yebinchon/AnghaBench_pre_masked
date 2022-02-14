
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_proplist_receiver2_t ;
struct TYPE_12__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (char const*,TYPE_1__ const*,scalar_t__,int const*,int,int ,void*,int *,int *) ;
 int FUNC_3 (char const*,TYPE_1__ const*,TYPE_1__ const*,scalar_t__,int,int,int ,void*,int *,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,char const*) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char const*) ;

svn_error_t *
FUNC_7(const char *VAR_5,
                     const svn_opt_revision_t *VAR_6,
                     const svn_opt_revision_t *VAR_7,
                     svn_depth_t VAR_8,
                     const apr_array_header_t *VAR_9,
                     svn_boolean_t VAR_10,
                     svn_proplist_receiver2_t VAR_11,
                     void *VAR_12,
                     svn_client_ctx_t *VAR_13,
                     apr_pool_t *VAR_14)
{
  svn_boolean_t VAR_15;
  svn_boolean_t VAR_16;

  VAR_6 = FUNC_4(VAR_6,
                                                        VAR_5);
  VAR_7 = FUNC_5(VAR_7, VAR_6);

  if (VAR_8 == VAR_2)
    VAR_8 = VAR_1;


  VAR_15 =
    (! FUNC_6(VAR_5)
     && FUNC_0(VAR_6->kind)
     && FUNC_0(VAR_7->kind));


  VAR_16 =
    (VAR_10
     && VAR_15
     && (VAR_6->kind == VAR_4
         || VAR_6->kind == VAR_3 )
     && (VAR_7->kind == VAR_4
         || VAR_7->kind == VAR_3 ));

  if ((VAR_10 && !VAR_16)
      || !VAR_15)
    {
      FUNC_1(FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8,
                               !VAR_15,
                               (VAR_10 && !VAR_16),
                               VAR_11, VAR_12, VAR_13, VAR_14));
    }

  if (VAR_15)
    {
      FUNC_1(FUNC_2(VAR_5, VAR_7, VAR_8, VAR_9,
                              VAR_16, VAR_11, VAR_12, VAR_13,
                              VAR_14));
    }

  return VAR_0;
}
