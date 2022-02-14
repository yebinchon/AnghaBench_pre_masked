
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int pool; TYPE_2__* root_op; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_10__ {int * prop_mods; int * children; int kind; } ;
typedef TYPE_2__ mtcc_op_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__**,scalar_t__*,char const*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_7 (scalar_t__*,char const*,scalar_t__,TYPE_1__*,int *) ;
 int * FUNC_8 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_7,
                svn_boolean_t VAR_8,
                svn_client__mtcc_t *VAR_9,
                apr_pool_t *VAR_10)
{
  mtcc_op_t *VAR_11;
  svn_boolean_t VAR_12;
  svn_node_kind_t VAR_13;

  FUNC_2(FUNC_9(VAR_7));

  FUNC_1(FUNC_7(&VAR_13, VAR_7, VAR_0,
                                      VAR_9, VAR_10));

  if (VAR_13 == VAR_6)
    return FUNC_8(VAR_2, ((void*)0),
                             FUNC_4("Can't delete node at '%s' as it "
                                "does not exist"),
                             VAR_7);

  if (FUNC_3(VAR_7) && FUNC_0(VAR_9))
    {

      VAR_11 = VAR_9->root_op;
    }
  else
    {
      FUNC_1(FUNC_6(&VAR_11, &VAR_12, VAR_7, VAR_9->root_op, VAR_0, VAR_5,
                           VAR_5, VAR_9->pool, VAR_10));

      if (!VAR_8 && !VAR_11 && !VAR_12)
        {



          FUNC_1(FUNC_6(&VAR_11, &VAR_12, VAR_7, VAR_9->root_op, VAR_5,
                  VAR_0, VAR_0, VAR_9->pool, VAR_10));

          if (VAR_11 && FUNC_5(VAR_11))
            VAR_11 = ((void*)0);
          else
            VAR_12 = VAR_5;
        }

      if (!VAR_11 || !VAR_12)
        {
          return FUNC_8(VAR_3, ((void*)0),
                                   FUNC_4("Can't delete node at '%s'"),
                                   VAR_7);
        }
    }

  VAR_11->kind = VAR_1;
  VAR_11->children = ((void*)0);
  VAR_11->prop_mods = ((void*)0);

  return VAR_4;
}
