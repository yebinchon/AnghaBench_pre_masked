
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
struct TYPE_4__ {unsigned char* digest; int * pool; int ** checksum; int context; int * inner_stream; } ;
typedef TYPE_1__ stream_baton_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static svn_stream_t *
FUNC_5(svn_checksum_t **VAR_2,
                  unsigned char *VAR_3,
                  svn_stream_t *VAR_4,
                  svn_checksum_kind_t VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_stream_t *VAR_7;

  stream_baton_t *VAR_8 = FUNC_0(VAR_6, sizeof(*VAR_8));
  VAR_8->inner_stream = VAR_4;
  VAR_8->context = FUNC_1(VAR_5, VAR_6);
  VAR_8->checksum = VAR_2;
  VAR_8->digest = VAR_3;
  VAR_8->pool = VAR_6;

  VAR_7 = FUNC_2(VAR_8, VAR_6);
  FUNC_4(VAR_7, VAR_1);
  FUNC_3(VAR_7, VAR_0);

  return VAR_7;
}
