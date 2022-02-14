
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
struct delta_read_baton {int md5_digest; int * rs; } ;
typedef int rep_state_t ;
struct TYPE_5__ {TYPE_1__* data_rep; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int md5_digest; } ;


 struct delta_read_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (struct delta_read_baton*,int ,int ,int *) ;

__attribute__((used)) static svn_txdelta_stream_t *
FUNC_3(rep_state_t *VAR_2,
                          node_revision_t *VAR_3,
                          apr_pool_t *VAR_4)
{

  struct delta_read_baton *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  VAR_5->rs = VAR_2;
  FUNC_1(VAR_5->md5_digest, VAR_3->data_rep->md5_digest,
         sizeof(VAR_5->md5_digest));
  return FUNC_2(VAR_5, VAR_1,
                                   VAR_0, VAR_4);
}
