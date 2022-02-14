
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {int pool; TYPE_6__* root_op; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {void* kind; } ;
typedef TYPE_2__ mtcc_op_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {void* kind; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 void* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__**,int *,char const*,TYPE_6__*,int ,int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,char const*) ;
 int FUNC_8 (char const*) ;

svn_error_t *
FUNC_9(const char *VAR_4,
                           svn_client__mtcc_t *VAR_5,
                           apr_pool_t *VAR_6)
{
  mtcc_op_t *VAR_7;
  svn_boolean_t VAR_8;
  FUNC_2(FUNC_8(VAR_4));

  FUNC_1(FUNC_6(VAR_5, VAR_4, VAR_6));

  if (FUNC_3(VAR_4) && FUNC_0(VAR_5))
    {

      VAR_5->root_op->kind = VAR_1;

      return VAR_3;
    }

  FUNC_1(FUNC_5(&VAR_7, &VAR_8, VAR_4, VAR_5->root_op, VAR_0, VAR_0,
                       VAR_0, VAR_5->pool, VAR_6));

  if (!VAR_7 || !VAR_8)
    {
      return FUNC_7(VAR_2, ((void*)0),
                               FUNC_4("Can't create directory at '%s'"),
                               VAR_4);
    }

  VAR_7->kind = VAR_1;

  return VAR_3;
}
