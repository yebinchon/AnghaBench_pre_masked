
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int pool; int root_op; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int mtcc_op_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,char const*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (scalar_t__*,char const*,int ,TYPE_1__*,int *) ;
 int * FUNC_5 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_client__mtcc_t *VAR_5,
                   const char *VAR_6,
                   apr_pool_t *VAR_7)
{
  svn_node_kind_t VAR_8;

  if (*VAR_6 || !FUNC_0(VAR_5))
    {
      mtcc_op_t *VAR_9;

      FUNC_1(FUNC_3(&VAR_9, ((void*)0), VAR_6, VAR_5->root_op, VAR_3, VAR_0,
                           VAR_0, VAR_5->pool, VAR_7));

      if (VAR_9)
        return FUNC_5(VAR_1, ((void*)0),
                                 FUNC_2("Path '%s' already exists"),
                                 VAR_6);

      FUNC_1(FUNC_3(&VAR_9, ((void*)0), VAR_6, VAR_5->root_op, VAR_3, VAR_3,
                           VAR_0, VAR_5->pool, VAR_7));

      if (VAR_9)
        return VAR_2;
    }



  FUNC_1(FUNC_4(&VAR_8, VAR_6, VAR_0,
                                      VAR_5, VAR_7));

  if (VAR_8 != VAR_4)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_2("Path '%s' already exists"),
                             VAR_6);

  return VAR_2;
}
