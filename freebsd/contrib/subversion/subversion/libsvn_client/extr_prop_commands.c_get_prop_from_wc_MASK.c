
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_6__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct recursive_propget_receiver_baton {int wc_ctx; int * pool; int * props; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char const*,char const*,scalar_t__,int ,TYPE_2__ const*,int ,struct recursive_propget_receiver_baton*,int ,int ,int *) ;
 int FUNC_3 (int **,int ,char const*,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_hash_t **VAR_4,
                 const char *VAR_5,
                 const char *VAR_6,
                 svn_boolean_t VAR_7,
                 svn_node_kind_t VAR_8,
                 svn_depth_t VAR_9,
                 const apr_array_header_t *VAR_10,
                 svn_client_ctx_t *VAR_11,
                 apr_pool_t *VAR_12,
                 apr_pool_t *VAR_13)
{
  struct recursive_propget_receiver_baton VAR_14;






  if (VAR_9 == VAR_3)
    VAR_9 = VAR_2;

  if (!VAR_7 && VAR_9 == VAR_2
      && (!VAR_10 || VAR_10->nelts == 0))
    {


      FUNC_0(FUNC_3(
                            VAR_4, VAR_11->wc_ctx, VAR_6, VAR_5,
                            VAR_12, VAR_13));
      return VAR_0;
    }

  *VAR_4 = FUNC_1(VAR_12);
  VAR_14.props = *VAR_4;
  VAR_14.pool = VAR_12;
  VAR_14.wc_ctx = VAR_11->wc_ctx;

  FUNC_0(FUNC_2(VAR_11->wc_ctx, VAR_6,
                                      VAR_5, VAR_9, VAR_7,
                                      VAR_10,
                                      VAR_1, &VAR_14,
                                      VAR_11->cancel_func, VAR_11->cancel_baton,
                                      VAR_13));

  return VAR_0;
}
