
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
struct TYPE_8__ {TYPE_1__* data_rep; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef int rep_state_t ;
struct TYPE_9__ {int md5_digest; int * rs; } ;
typedef TYPE_3__ delta_read_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int md5_digest; } ;


 TYPE_3__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (TYPE_3__*,int ,int ,int *) ;

__attribute__((used)) static svn_txdelta_stream_t *
FUNC_3(rep_state_t *VAR_2,
                          svn_fs_x__noderev_t *VAR_3,
                          apr_pool_t *VAR_4)
{

  delta_read_baton_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->rs = VAR_2;
  FUNC_1(VAR_5->md5_digest, VAR_3->data_rep->md5_digest,
         sizeof(VAR_5->md5_digest));
  return FUNC_2(VAR_5, VAR_1,
                                   VAR_0, VAR_4);
}
