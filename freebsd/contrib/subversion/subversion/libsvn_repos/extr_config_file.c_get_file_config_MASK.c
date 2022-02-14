
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {int pool; } ;
typedef TYPE_2__ config_access_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int **,TYPE_2__*,char const*,int ,scalar_t__) ;
 int FUNC_2 (int **,int ,int ,int ,int ) ;
 int VAR_1 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__**,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_stream_t **VAR_3,
                svn_checksum_t **VAR_4,
                config_access_t *VAR_5,
                const char *VAR_6,
                svn_boolean_t VAR_7,
                apr_pool_t *VAR_8)
{
  svn_stringbuf_t *VAR_9;
  svn_node_kind_t VAR_10;


  FUNC_0(FUNC_4(VAR_6, &VAR_10, VAR_8));
  if (VAR_10 != VAR_2)
    return FUNC_3(FUNC_1(VAR_3, VAR_4, VAR_5,
                                               VAR_6, VAR_7, VAR_10));


  FUNC_0(FUNC_6(&VAR_9, VAR_6, VAR_5->pool));


  FUNC_0(FUNC_2(VAR_4, VAR_1,
                       VAR_9->data, VAR_9->len, VAR_5->pool));
  *VAR_3 = FUNC_5(VAR_9, VAR_5->pool);

  return VAR_0;
}
