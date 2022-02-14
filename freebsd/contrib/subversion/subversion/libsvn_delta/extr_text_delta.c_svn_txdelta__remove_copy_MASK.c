
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ action_code; scalar_t__ length; } ;
typedef TYPE_2__ svn_txdelta_op_t ;
struct TYPE_7__ {int num_ops; TYPE_1__* new_data; TYPE_2__* ops; } ;
typedef TYPE_3__ svn_txdelta__ops_baton_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_5__ {int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

apr_size_t
FUNC_0(svn_txdelta__ops_baton_t *VAR_2,
                         apr_size_t VAR_3)
{
  svn_txdelta_op_t *VAR_4;
  apr_size_t VAR_5 = 0;


  while (VAR_2->num_ops > 0)
    {
      VAR_4 = &VAR_2->ops[VAR_2->num_ops-1];


      if (VAR_4->action_code == VAR_1)
        break;


      if (VAR_4->length + VAR_5 > VAR_3)
        {


          if (VAR_4->action_code == VAR_0)
            {
               VAR_2->new_data->len -= VAR_3 - VAR_5;
               VAR_4->length -= VAR_3 - VAR_5;
               VAR_5 = VAR_3;
            }

          break;
        }


      if (VAR_4->action_code == VAR_0)
        VAR_2->new_data->len -= VAR_4->length;

      VAR_5 += VAR_4->length;
      --VAR_2->num_ops;
    }

  return VAR_5;
}
