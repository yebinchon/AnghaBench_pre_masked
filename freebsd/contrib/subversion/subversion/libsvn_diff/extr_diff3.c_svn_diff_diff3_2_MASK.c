
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_17__ {struct TYPE_17__* next; int * resolved_diff; scalar_t__ latest_length; scalar_t__ latest_start; scalar_t__ modified_length; scalar_t__ modified_start; scalar_t__ original_length; scalar_t__ original_start; int type; } ;
typedef TYPE_1__ svn_diff_t ;
struct TYPE_18__ {int (* token_discard_all ) (void*) ;int (* datasources_open ) (void*,scalar_t__*,scalar_t__*,int *,int) ;} ;
typedef TYPE_2__ svn_diff_fns2_t ;
typedef int svn_diff_datasource_e ;
typedef int svn_diff__tree_t ;
typedef int svn_diff__token_index_t ;
struct TYPE_19__ {scalar_t__ offset; struct TYPE_19__* next; } ;
typedef TYPE_3__ svn_diff__position_t ;
struct TYPE_20__ {scalar_t__ length; struct TYPE_20__* next; TYPE_3__** position; } ;
typedef TYPE_4__ svn_diff__lcs_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (void*,scalar_t__*,scalar_t__*,int *,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (TYPE_3__**,int *,void*,TYPE_2__ const*,int ,scalar_t__,int *) ;
 TYPE_4__* FUNC_8 (TYPE_3__*,TYPE_3__*,int *,int *,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_3__**,TYPE_3__**,int ,int *) ;
 int FUNC_10 (int **,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

svn_error_t *
FUNC_13(svn_diff_t **VAR_7,
                 void *VAR_8,
                 const svn_diff_fns2_t *VAR_9,
                 apr_pool_t *VAR_10)
{
  svn_diff__tree_t *VAR_11;
  svn_diff__position_t *VAR_12[3];
  svn_diff__token_index_t VAR_13;
  svn_diff__token_index_t *VAR_14[3];
  svn_diff_datasource_e VAR_15[] = {VAR_6,
                                        VAR_5,
                                        VAR_4};
  svn_diff__lcs_t *VAR_16;
  svn_diff__lcs_t *VAR_17;
  apr_pool_t *VAR_18;
  apr_pool_t *VAR_19;
  apr_off_t VAR_20 = 0;
  apr_off_t VAR_21 = 0;

  *VAR_7 = ((void*)0);

  VAR_18 = FUNC_11(VAR_10);
  VAR_19 = FUNC_11(VAR_10);

  FUNC_10(&VAR_11, VAR_19);

  FUNC_1(VAR_9->datasources_open(VAR_8, &VAR_20, &VAR_21,
                                   VAR_15, 3));

  FUNC_1(FUNC_7(&VAR_12[0],
                               VAR_11,
                               VAR_8, VAR_9,
                               VAR_6,
                               VAR_20,
                               VAR_18));

  FUNC_1(FUNC_7(&VAR_12[1],
                               VAR_11,
                               VAR_8, VAR_9,
                               VAR_5,
                               VAR_20,
                               VAR_18));

  FUNC_1(FUNC_7(&VAR_12[2],
                               VAR_11,
                               VAR_8, VAR_9,
                               VAR_4,
                               VAR_20,
                               VAR_18));

  VAR_13 = FUNC_5(VAR_11);


  if (VAR_9->token_discard_all != ((void*)0))
    VAR_9->token_discard_all(VAR_8);


  FUNC_12(VAR_19);

  VAR_14[0] = FUNC_6(VAR_12[0], VAR_13,
                                               VAR_18);
  VAR_14[1] = FUNC_6(VAR_12[1], VAR_13,
                                               VAR_18);
  VAR_14[2] = FUNC_6(VAR_12[2], VAR_13,
                                               VAR_18);


  VAR_16 = FUNC_8(VAR_12[0], VAR_12[1], VAR_14[0],
                         VAR_14[1], VAR_13, VAR_20,
                         VAR_21, VAR_18);
  VAR_17 = FUNC_8(VAR_12[0], VAR_12[2], VAR_14[0],
                         VAR_14[2], VAR_13, VAR_20,
                         VAR_21, VAR_18);


  {
    svn_diff_t **VAR_22 = VAR_7;

    apr_off_t VAR_23 = 1;
    apr_off_t VAR_24 = 1;
    apr_off_t VAR_25 = 1;
    apr_off_t VAR_26;
    apr_off_t VAR_27;
    apr_off_t VAR_28;
    apr_off_t VAR_29;
    apr_off_t VAR_30;
    apr_off_t VAR_31;
    svn_boolean_t VAR_32;
    svn_boolean_t VAR_33;
    svn_diff__position_t VAR_34[2];





    if (VAR_12[1])
      {
        VAR_34[0].next = VAR_12[1]->next;
        VAR_34[0].offset = VAR_12[1]->offset + 1;
        VAR_12[1]->next = &VAR_34[0];
        VAR_12[1] = VAR_34[0].next;
      }
    else
      {
        VAR_34[0].offset = VAR_20 + 1;
        VAR_34[0].next = ((void*)0);
        VAR_12[1] = &VAR_34[0];
      }

    if (VAR_12[2])
      {
        VAR_34[1].next = VAR_12[2]->next;
        VAR_34[1].offset = VAR_12[2]->offset + 1;
        VAR_12[2]->next = &VAR_34[1];
        VAR_12[2] = VAR_34[1].next;
      }
    else
      {
        VAR_34[1].offset = VAR_20 + 1;
        VAR_34[1].next = ((void*)0);
        VAR_12[2] = &VAR_34[1];
      }

    while (1)
      {

        while (1)
          {
            if (VAR_16->position[0]->offset > VAR_17->position[0]->offset)
              {
                VAR_26 = VAR_16->position[0]->offset;

                while (VAR_17->position[0]->offset + VAR_17->length
                       < VAR_26)
                  VAR_17 = VAR_17->next;




                if (VAR_16->length == 0 && VAR_17->length > 0
                    && VAR_17->position[0]->offset + VAR_17->length
                       == VAR_26
                    && VAR_17->position[1]->offset + VAR_17->length
                       != VAR_17->next->position[1]->offset)
                  VAR_17 = VAR_17->next;

                if (VAR_17->position[0]->offset <= VAR_26)
                    break;
              }
            else
              {
                VAR_26 = VAR_17->position[0]->offset;

                while (VAR_16->position[0]->offset + VAR_16->length
                       < VAR_26)
                  VAR_16 = VAR_16->next;




                if (VAR_17->length == 0 && VAR_16->length > 0
                    && VAR_16->position[0]->offset + VAR_16->length
                       == VAR_26
                    && VAR_16->position[1]->offset + VAR_16->length
                       != VAR_16->next->position[1]->offset)
                  VAR_16 = VAR_16->next;

                if (VAR_16->position[0]->offset <= VAR_26)
                    break;
              }
          }

        VAR_27 = VAR_16->position[1]->offset
                      + (VAR_26 - VAR_16->position[0]->offset);
        VAR_28 = VAR_17->position[1]->offset
                    + (VAR_26 - VAR_17->position[0]->offset);


        VAR_32 = VAR_16->position[0]->offset - VAR_23 > 0
                      || VAR_16->position[1]->offset - VAR_24 > 0;

        VAR_33 = VAR_17->position[0]->offset - VAR_23 > 0
                    || VAR_17->position[1]->offset - VAR_25 > 0;

        if (VAR_32 || VAR_33)
          {
            VAR_30 = VAR_27 - VAR_24;
            VAR_31 = VAR_28 - VAR_25;

            (*VAR_22) = FUNC_2(VAR_10, sizeof(**VAR_22));

            (*VAR_22)->original_start = VAR_23 - 1;
            (*VAR_22)->original_length = VAR_26 - VAR_23;
            (*VAR_22)->modified_start = VAR_24 - 1;
            (*VAR_22)->modified_length = VAR_30;
            (*VAR_22)->latest_start = VAR_25 - 1;
            (*VAR_22)->latest_length = VAR_31;
            (*VAR_22)->resolved_diff = ((void*)0);

            if (VAR_32 && VAR_33)
              {
                FUNC_9(*VAR_22,
                                           &VAR_12[1],
                                           &VAR_12[2],
                                           VAR_13,
                                           VAR_10);
              }
            else if (VAR_32)
              {
                (*VAR_22)->type = VAR_3;
              }
            else
              {
                (*VAR_22)->type = VAR_2;
              }

            VAR_22 = &(*VAR_22)->next;
          }


        if (VAR_16->length == 0 || VAR_17->length == 0)
            break;

        VAR_30 = VAR_16->length
                          - (VAR_26 - VAR_16->position[0]->offset);
        VAR_31 = VAR_17->length
                        - (VAR_26 - VAR_17->position[0]->offset);
        VAR_29 = FUNC_0(VAR_30, VAR_31);

        if (VAR_29 > 0)
          {
            (*VAR_22) = FUNC_2(VAR_10, sizeof(**VAR_22));

            (*VAR_22)->type = VAR_1;
            (*VAR_22)->original_start = VAR_26 - 1;
            (*VAR_22)->original_length = VAR_29;
            (*VAR_22)->modified_start = VAR_27 - 1;
            (*VAR_22)->modified_length = VAR_29;
            (*VAR_22)->latest_start = VAR_28 - 1;
            (*VAR_22)->latest_length = VAR_29;
            (*VAR_22)->resolved_diff = ((void*)0);

            VAR_22 = &(*VAR_22)->next;
          }


        VAR_23 = VAR_26 + VAR_29;
        VAR_24 = VAR_27 + VAR_29;
        VAR_25 = VAR_28 + VAR_29;




        if (VAR_12[1]->offset < VAR_16->position[1]->offset)
          VAR_12[1] = VAR_16->position[1];

        if (VAR_12[2]->offset < VAR_17->position[1]->offset)
          VAR_12[2] = VAR_17->position[1];




        while (VAR_23 >= VAR_16->position[0]->offset + VAR_16->length
               && VAR_16->length > 0)
          {
            VAR_16 = VAR_16->next;
          }

        while (VAR_23 >= VAR_17->position[0]->offset + VAR_17->length
               && VAR_17->length > 0)
          {
            VAR_17 = VAR_17->next;
          }
      }

    *VAR_22 = ((void*)0);
  }

  FUNC_12(VAR_18);

  return VAR_0;
}
