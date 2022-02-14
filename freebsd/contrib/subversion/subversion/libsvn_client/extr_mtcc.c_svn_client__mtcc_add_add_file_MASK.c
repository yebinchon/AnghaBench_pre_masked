
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int pool; TYPE_2__* root_op; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {int * src_checksum; int * src_stream; int kind; } ;
typedef TYPE_2__ mtcc_op_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__**,int *,char const*,TYPE_2__*,int ,int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int * FUNC_7 (int const*,int ) ;
 int * FUNC_8 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

svn_error_t *
FUNC_10(const char *VAR_5,
                              svn_stream_t *VAR_6,
                              const svn_checksum_t *VAR_7,
                              svn_client__mtcc_t *VAR_8,
                              apr_pool_t *VAR_9)
{
  mtcc_op_t *VAR_10;
  svn_boolean_t VAR_11;
  FUNC_2(FUNC_9(VAR_5) && VAR_6);

  FUNC_1(FUNC_6(VAR_8, VAR_5, VAR_9));

  if (FUNC_3(VAR_5) && FUNC_0(VAR_8))
    {

      VAR_10 = VAR_8->root_op;
    }
  else
    {
      FUNC_1(FUNC_5(&VAR_10, &VAR_11, VAR_5, VAR_8->root_op, VAR_0, VAR_0,
                           VAR_4, VAR_8->pool, VAR_9));

      if (!VAR_10 || !VAR_11)
        {
          return FUNC_8(VAR_2, ((void*)0),
                                   FUNC_4("Can't add file at '%s'"),
                                   VAR_5);
        }
    }

  VAR_10->kind = VAR_1;
  VAR_10->src_stream = VAR_6;
  VAR_10->src_checksum = VAR_7 ? FUNC_7(VAR_7, VAR_8->pool)
                                  : ((void*)0);

  return VAR_3;
}
