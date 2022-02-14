
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_packed__int_stream_t ;
typedef int svn_packed__data_root_t ;
typedef int svn_packed__byte_stream_t ;
struct TYPE_6__ {int base_count; int instruction_count; int rep_count; void** first_instructions; int base_text_len; TYPE_2__* instructions; TYPE_3__* bases; int text_len; int text; } ;
typedef TYPE_1__ svn_fs_x__reps_t ;
typedef int svn_error_t ;
struct TYPE_7__ {void* count; scalar_t__ offset; } ;
typedef TYPE_2__ instruction_t ;
struct TYPE_8__ {int priority; void* rep; scalar_t__ item_index; scalar_t__ revision; } ;
typedef TYPE_3__ base_t ;
typedef void* apr_uint32_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 void* FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

svn_error_t *
FUNC_13(svn_fs_x__reps_t **VAR_1,
                              svn_stream_t *VAR_2,
                              apr_pool_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  apr_size_t VAR_5;

  base_t *VAR_6;
  apr_uint32_t *VAR_7;
  instruction_t *VAR_8;

  svn_fs_x__reps_t *VAR_9 = FUNC_2(VAR_3, sizeof(*VAR_9));

  svn_packed__data_root_t *VAR_10;
  svn_packed__int_stream_t *VAR_11;
  svn_packed__int_stream_t *VAR_12;
  svn_packed__int_stream_t *VAR_13;
  svn_packed__int_stream_t *VAR_14;
  svn_packed__byte_stream_t *VAR_15;


  FUNC_0(FUNC_4(&VAR_10, VAR_2, VAR_3, VAR_4));

  VAR_11 = FUNC_6(VAR_10);
  VAR_12 = FUNC_12(VAR_11);
  VAR_13 = FUNC_12(VAR_12);
  VAR_14 = FUNC_12(VAR_13);
  VAR_15 = FUNC_5(VAR_10);


  VAR_9->text = FUNC_8(VAR_15, &VAR_9->text_len);
  VAR_9->text = FUNC_3(VAR_3, VAR_9->text, VAR_9->text_len);


  VAR_9->base_count
    = FUNC_11(FUNC_7(VAR_11));
  VAR_6 = FUNC_1(VAR_3, VAR_9->base_count * sizeof(*VAR_6));
  VAR_9->bases = VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_9->base_count; ++VAR_5)
    {
      base_t *VAR_16 = VAR_6 + VAR_5;
      VAR_16->revision = (svn_revnum_t)FUNC_9(VAR_11);
      VAR_16->item_index = FUNC_10(VAR_11);
      VAR_16->priority = (int)FUNC_10(VAR_11);
      VAR_16->rep = (apr_uint32_t)FUNC_10(VAR_11);
    }


  VAR_9->instruction_count
    = FUNC_11
         (FUNC_7(VAR_13));
  VAR_8
    = FUNC_1(VAR_3,
                 VAR_9->instruction_count * sizeof(*VAR_8));
  VAR_9->instructions = VAR_8;

  for (VAR_5 = 0; VAR_5 < VAR_9->instruction_count; ++VAR_5)
    {
      instruction_t *VAR_17 = VAR_8 + VAR_5;
      VAR_17->offset
        = (apr_int32_t)FUNC_9(VAR_13);
      VAR_17->count
        = (apr_uint32_t)FUNC_10(VAR_13);
    }


  VAR_9->rep_count = FUNC_11(VAR_12);
  VAR_7
    = FUNC_1(VAR_3,
                 (VAR_9->rep_count + 1) * sizeof(*VAR_7));
  VAR_9->first_instructions = VAR_7;

  for (VAR_5 = 0; VAR_5 < VAR_9->rep_count; ++VAR_5)
    VAR_7[VAR_5]
      = (apr_uint32_t)FUNC_10(VAR_12);
  VAR_7[VAR_9->rep_count] = (apr_uint32_t)VAR_9->instruction_count;


  VAR_9->base_text_len = (apr_size_t)FUNC_10(VAR_14);


  *VAR_1 = VAR_9;

  return VAR_0;
}
