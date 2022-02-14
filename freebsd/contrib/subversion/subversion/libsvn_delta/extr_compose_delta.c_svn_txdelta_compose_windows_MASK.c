
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int num_ops; int tview_len; int sview_len; int sview_offset; TYPE_1__* new_data; TYPE_3__* ops; } ;
typedef TYPE_2__ svn_txdelta_window_t ;
struct TYPE_19__ {scalar_t__ action_code; int offset; scalar_t__ length; } ;
typedef TYPE_3__ svn_txdelta_op_t ;
struct TYPE_20__ {int new_data; int member_0; } ;
typedef TYPE_4__ svn_txdelta__ops_baton_t ;
struct TYPE_21__ {scalar_t__ kind; int target_offset; scalar_t__ limit; scalar_t__ offset; struct TYPE_21__* next; } ;
typedef TYPE_5__ range_list_node_t ;
typedef int range_index_t ;
typedef int offset_index_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {char* data; } ;


 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (scalar_t__ const,scalar_t__ const,int *) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int ,TYPE_4__*,TYPE_2__ const*,int *,int *) ;
 int * FUNC_3 (TYPE_2__ const*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (scalar_t__ const,scalar_t__ const,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (scalar_t__ const,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__*,scalar_t__,int,scalar_t__,char const*,int *) ;
 TYPE_2__* FUNC_12 (TYPE_4__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

svn_txdelta_window_t *
FUNC_13(const svn_txdelta_window_t *VAR_4,
                            const svn_txdelta_window_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_txdelta__ops_baton_t VAR_7 = { 0 };
  svn_txdelta_window_t *VAR_8;
  apr_pool_t *VAR_9 = FUNC_8(VAR_6);
  offset_index_t *VAR_10 = FUNC_3(VAR_4, VAR_9);
  range_index_t *VAR_11 = FUNC_4(VAR_9);
  apr_size_t VAR_12 = 0;
  int VAR_13;




  VAR_7.new_data = FUNC_10(VAR_6);
  for (VAR_13 = 0; VAR_13 < VAR_5->num_ops; ++VAR_13)
    {
      const svn_txdelta_op_t *const VAR_14 = &VAR_5->ops[VAR_13];
      if (VAR_14->action_code != VAR_2)
        {


          const char *const VAR_15 =
            (VAR_14->action_code == VAR_1
             ? VAR_5->new_data->data + VAR_14->offset
             : ((void*)0));
          FUNC_11(&VAR_7, VAR_14->action_code,
                                 VAR_14->offset, VAR_14->length,
                                 VAR_15, VAR_6);
        }
      else
        {



          const apr_size_t VAR_16 = VAR_14->offset;
          const apr_size_t VAR_17 = VAR_14->offset + VAR_14->length;
          range_list_node_t *VAR_18, *VAR_19;
          apr_size_t VAR_20 = VAR_12;

          FUNC_7(VAR_16, VAR_11);
          VAR_18 = FUNC_1(VAR_16, VAR_17, VAR_11);

          for (VAR_19 = VAR_18; VAR_19; VAR_19 = VAR_19->next)
            {
              if (VAR_19->kind == VAR_0)
                FUNC_11(&VAR_7, VAR_3,
                                       VAR_19->target_offset,
                                       VAR_19->limit - VAR_19->offset,
                                       ((void*)0), VAR_6);
              else
                FUNC_2(VAR_19->offset, VAR_19->limit, VAR_20, 0,
                                &VAR_7, VAR_4, VAR_10,
                                VAR_6);

              VAR_20 += VAR_19->limit - VAR_19->offset;
            }
          FUNC_0(VAR_20 == VAR_12 + VAR_14->length);

          FUNC_5(VAR_18, VAR_11);
          FUNC_6(VAR_16, VAR_17, VAR_12, VAR_11);
        }


      VAR_12 += VAR_14->length;
    }

  FUNC_9(VAR_9);

  VAR_8 = FUNC_12(&VAR_7, VAR_6);
  VAR_8->sview_offset = VAR_4->sview_offset;
  VAR_8->sview_len = VAR_4->sview_len;
  VAR_8->tview_len = VAR_5->tview_len;
  return VAR_8;
}
