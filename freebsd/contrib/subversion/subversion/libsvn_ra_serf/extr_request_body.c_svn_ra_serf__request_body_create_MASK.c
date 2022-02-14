
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stream; int * result_pool; int in_memory_size; } ;
typedef TYPE_1__ svn_ra_serf__request_body_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

svn_ra_serf__request_body_t *
FUNC_4(apr_size_t VAR_2,
                                 apr_pool_t *VAR_3)
{
  svn_ra_serf__request_body_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->in_memory_size = VAR_2;
  VAR_4->result_pool = VAR_3;
  VAR_4->stream = FUNC_1(VAR_4, VAR_3);

  FUNC_3(VAR_4->stream, VAR_1);
  FUNC_2(VAR_4->stream, VAR_0);

  return VAR_4;
}
