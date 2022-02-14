
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_checksum_ctx_t ;
struct TYPE_4__ {int * context; int * inner_stream; } ;
typedef TYPE_1__ fnv1a_stream_baton_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static svn_stream_t *
FUNC_4(svn_checksum_ctx_t **VAR_2,
                  svn_stream_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  svn_stream_t *VAR_5;

  fnv1a_stream_baton_t *VAR_6 = FUNC_0(VAR_4, sizeof(*VAR_6));
  VAR_6->inner_stream = VAR_3;
  VAR_6->context = FUNC_1(VAR_1, VAR_4);
  *VAR_2 = VAR_6->context;

  VAR_5 = FUNC_2(VAR_6, VAR_4);
  FUNC_3(VAR_5, VAR_0);

  return VAR_5;
}
