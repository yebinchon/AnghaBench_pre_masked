
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_checksum_t ;
struct TYPE_9__ {int wri_abspath; TYPE_1__* wc_ctx; TYPE_2__* checksum; } ;
typedef TYPE_3__ get_pristine_lazyopen_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int db; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__ const**,int ,int ,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int **,int *,int ,int ,TYPE_2__ const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_stream_t **VAR_2,
                           void *VAR_3,
                           apr_pool_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  get_pristine_lazyopen_baton_t *VAR_6 = VAR_3;
  const svn_checksum_t *VAR_7;



  if (VAR_6->checksum->kind == VAR_1)
    VAR_7 = VAR_6->checksum;
  else
    FUNC_0(FUNC_1(&VAR_7, VAR_6->wc_ctx->db,
                                         VAR_6->wri_abspath, VAR_6->checksum,
                                         VAR_5, VAR_5));

  FUNC_0(FUNC_2(VAR_2, ((void*)0), VAR_6->wc_ctx->db,
                                   VAR_6->wri_abspath, VAR_7,
                                   VAR_4, VAR_5));
  return VAR_0;
}
