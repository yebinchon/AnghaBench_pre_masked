
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ type; struct TYPE_10__* next; int original_length; int modified_length; int original_start; int modified_start; int latest_length; int latest_start; } ;
typedef TYPE_1__ svn_diff_t ;
struct TYPE_11__ {int (* token_discard_all ) (void*) ;int (* datasources_open ) (void*,int *,int *,int *,int) ;} ;
typedef TYPE_2__ svn_diff_fns2_t ;
typedef int svn_diff_datasource_e ;
typedef int svn_diff__tree_t ;
typedef int svn_diff__token_index_t ;
typedef int svn_diff__position_t ;
typedef int svn_diff__lcs_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (void*,int *,int *,int *,int) ;
 int FUNC_3 (void*) ;
 TYPE_1__* FUNC_4 (int *,int,int,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int **,int *,void*,TYPE_2__ const*,int ,int ,int *) ;
 int * FUNC_8 (int *,int *,int *,int *,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int **,int **,int ,int *) ;
 int FUNC_10 (int **,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

svn_error_t *
FUNC_14(svn_diff_t **VAR_10,
                 void *VAR_11,
                 const svn_diff_fns2_t *VAR_12,
                 apr_pool_t *VAR_13)
{
  svn_diff__tree_t *VAR_14;
  svn_diff__position_t *VAR_15[4];
  svn_diff__token_index_t VAR_16;
  svn_diff__token_index_t *VAR_17[4];
  svn_diff_datasource_e VAR_18[] = {VAR_9,
                                        VAR_8,
                                        VAR_7,
                                        VAR_6};
  svn_diff__lcs_t *VAR_19;
  svn_diff__lcs_t *VAR_20;
  svn_diff_t *VAR_21;
  svn_diff_t *VAR_22;
  svn_diff_t *VAR_23;
  apr_pool_t *VAR_24;
  apr_pool_t *VAR_25;
  apr_pool_t *VAR_26;
  apr_off_t VAR_27 = 0;
  apr_off_t VAR_28 = 0;

  *VAR_10 = ((void*)0);

  VAR_24 = FUNC_12(VAR_13);
  VAR_25 = FUNC_12(VAR_24);
  VAR_26 = FUNC_12(VAR_25);

  FUNC_10(&VAR_14, VAR_26);

  FUNC_0(VAR_12->datasources_open(VAR_11, &VAR_27, &VAR_28,
                                   VAR_18, 4));

  FUNC_0(FUNC_7(&VAR_15[0],
                               VAR_14,
                               VAR_11, VAR_12,
                               VAR_9,
                               VAR_27,
                               VAR_25));

  FUNC_0(FUNC_7(&VAR_15[1],
                               VAR_14,
                               VAR_11, VAR_12,
                               VAR_8,
                               VAR_27,
                               VAR_24));

  FUNC_0(FUNC_7(&VAR_15[2],
                               VAR_14,
                               VAR_11, VAR_12,
                               VAR_7,
                               VAR_27,
                               VAR_24));

  FUNC_0(FUNC_7(&VAR_15[3],
                               VAR_14,
                               VAR_11, VAR_12,
                               VAR_6,
                               VAR_27,
                               VAR_25));

  VAR_16 = FUNC_5(VAR_14);


  if (VAR_12->token_discard_all != ((void*)0))
    VAR_12->token_discard_all(VAR_11);


  FUNC_11(VAR_26);

  VAR_17[0] = FUNC_6(VAR_15[0], VAR_16,
                                               VAR_24);
  VAR_17[1] = FUNC_6(VAR_15[1], VAR_16,
                                               VAR_24);
  VAR_17[2] = FUNC_6(VAR_15[2], VAR_16,
                                               VAR_24);
  VAR_17[3] = FUNC_6(VAR_15[3], VAR_16,
                                               VAR_24);


  VAR_19 = FUNC_8(VAR_15[0], VAR_15[2],
                         VAR_17[0], VAR_17[2],
                         VAR_16, VAR_27,
                         VAR_28, VAR_26);
  VAR_21 = FUNC_4(VAR_19, 1, 1, VAR_2, VAR_13);

  FUNC_11(VAR_26);

  for (VAR_23 = VAR_21; VAR_23; VAR_23 = VAR_23->next)
    {
      VAR_23->latest_start = VAR_23->modified_start;
      VAR_23->latest_length = VAR_23->modified_length;
      VAR_23->modified_start = VAR_23->original_start;
      VAR_23->modified_length = VAR_23->original_length;

      if (VAR_23->type == VAR_5)
          VAR_23->type = VAR_4;
      else
          VAR_23->type = VAR_5;
    }




  VAR_20 = FUNC_8(VAR_15[3], VAR_15[2],
                             VAR_17[3], VAR_17[2],
                             VAR_16, VAR_27,
                             VAR_28, VAR_26);
  VAR_22 = FUNC_4(VAR_20, 1, 1, VAR_0, VAR_26);
  FUNC_1(VAR_21, VAR_22);

  FUNC_11(VAR_26);




  VAR_20 = FUNC_8(VAR_15[1], VAR_15[3],
                             VAR_17[1], VAR_17[3],
                             VAR_16, VAR_27,
                             VAR_28, VAR_26);
  VAR_22 = FUNC_4(VAR_20, 1, 1, VAR_0, VAR_26);
  FUNC_1(VAR_21, VAR_22);




  FUNC_13(VAR_25);


  for (VAR_23 = VAR_21; VAR_23; VAR_23 = VAR_23->next)
    {
      if (VAR_23->type == VAR_3)
        {
          FUNC_9(VAR_23, &VAR_15[1],
                                     &VAR_15[2], VAR_16, VAR_13);
        }
    }

  FUNC_13(VAR_24);

  *VAR_10 = VAR_21;

  return VAR_1;
}
