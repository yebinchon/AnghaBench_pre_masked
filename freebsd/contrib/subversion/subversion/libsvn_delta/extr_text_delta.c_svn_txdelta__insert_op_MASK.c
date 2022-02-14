
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int action_code; scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_1__ svn_txdelta_op_t ;
struct TYPE_9__ {int num_ops; int ops_size; TYPE_4__* new_data; int src_ops; TYPE_1__* ops; } ;
typedef TYPE_2__ svn_txdelta__ops_baton_t ;
typedef enum svn_delta_action { ____Placeholder_svn_delta_action } svn_delta_action ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {scalar_t__ len; } ;


 TYPE_1__* FUNC_0 (int *,int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__* const,int) ;
 int FUNC_3 (TYPE_4__*,char const*,scalar_t__) ;




void
FUNC_4(svn_txdelta__ops_baton_t *VAR_0,
                       enum svn_delta_action VAR_1,
                       apr_size_t VAR_2,
                       apr_size_t VAR_3,
                       const char *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_txdelta_op_t *VAR_6;




  if (VAR_0->num_ops > 0)
    {
      VAR_6 = &VAR_0->ops[VAR_0->num_ops - 1];
      if (VAR_6->action_code == VAR_1
          && (VAR_1 == 130
              || VAR_6->offset + VAR_6->length == VAR_2))
        {
          VAR_6->length += VAR_3;
          if (VAR_1 == 130)
            FUNC_3(VAR_0->new_data,
                                      VAR_4, VAR_3);
          return;
        }
    }


  if (VAR_0->num_ops == VAR_0->ops_size)
    {
      svn_txdelta_op_t *const VAR_7 = VAR_0->ops;
      int const VAR_8 = (VAR_0->ops_size == 0
                                ? 16 : 2 * VAR_0->ops_size);
      VAR_0->ops =
        FUNC_0(VAR_5, VAR_8 * sizeof(*VAR_0->ops));


      if (VAR_7)
        FUNC_2(VAR_0->ops, VAR_7,
               VAR_0->ops_size * sizeof(*VAR_0->ops));
      VAR_0->ops_size = VAR_8;
    }




  VAR_6 = &VAR_0->ops[VAR_0->num_ops];
  switch (VAR_1)
    {
    case 129:
      ++VAR_0->src_ops;

    case 128:
      VAR_6->action_code = VAR_1;
      VAR_6->offset = VAR_2;
      VAR_6->length = VAR_3;
      break;
    case 130:
      VAR_6->action_code = VAR_1;
      VAR_6->offset = VAR_0->new_data->len;
      VAR_6->length = VAR_3;
      FUNC_3(VAR_0->new_data, VAR_4, VAR_3);
      break;
    default:
      FUNC_1(!"unknown delta op.");
    }

  ++VAR_0->num_ops;
}
