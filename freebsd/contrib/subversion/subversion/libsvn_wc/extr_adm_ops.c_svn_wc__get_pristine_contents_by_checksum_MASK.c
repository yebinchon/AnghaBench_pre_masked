
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {char const* wri_abspath; int const* checksum; TYPE_1__* wc_ctx; } ;
typedef TYPE_2__ get_pristine_lazyopen_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int * FUNC_2 (int ,TYPE_2__*,int ,int *) ;
 int FUNC_3 (scalar_t__*,int ,char const*,int const*,int *) ;

svn_error_t *
FUNC_4(svn_stream_t **VAR_3,
                                          svn_wc_context_t *VAR_4,
                                          const char *VAR_5,
                                          const svn_checksum_t *VAR_6,
                                          apr_pool_t *VAR_7,
                                          apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9;

  *VAR_3 = ((void*)0);

  FUNC_0(FUNC_3(&VAR_9, VAR_4->db, VAR_5,
                                    VAR_6, VAR_8));

  if (VAR_9)
    {
      get_pristine_lazyopen_baton_t *VAR_10;

      VAR_10 = FUNC_1(VAR_7, sizeof(*VAR_10));
      VAR_10->wc_ctx = VAR_4;
      VAR_10->wri_abspath = VAR_5;
      VAR_10->checksum = VAR_6;

      *VAR_3 = FUNC_2(VAR_2,
                                             VAR_10, VAR_0, VAR_7);
    }

  return VAR_1;
}
