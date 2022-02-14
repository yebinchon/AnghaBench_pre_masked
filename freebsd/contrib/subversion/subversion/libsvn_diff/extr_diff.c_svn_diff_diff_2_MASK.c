
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_t ;
struct TYPE_4__ {int (* token_discard_all ) (void*) ;int (* datasources_open ) (void*,int *,int *,int *,int) ;} ;
typedef TYPE_1__ svn_diff_fns2_t ;
typedef int svn_diff_datasource_e ;
typedef int svn_diff__tree_t ;
typedef int svn_diff__token_index_t ;
typedef int svn_diff__position_t ;
typedef int svn_diff__lcs_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int *,int *,int *,int) ;
 int FUNC_2 (void*) ;
 int * FUNC_3 (int *,int,int,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int **,int *,void*,TYPE_1__ const*,int ,int ,int *) ;
 int * FUNC_7 (int *,int *,int *,int *,int ,int ,int ,int *) ;
 int FUNC_8 (int **,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

svn_error_t *
FUNC_11(svn_diff_t **VAR_4,
                void *VAR_5,
                const svn_diff_fns2_t *VAR_6,
                apr_pool_t *VAR_7)
{
  svn_diff__tree_t *VAR_8;
  svn_diff__position_t *VAR_9[2];
  svn_diff__token_index_t VAR_10;
  svn_diff__token_index_t *VAR_11[2];
  svn_diff_datasource_e VAR_12[] = {VAR_3,
                                        VAR_2};
  svn_diff__lcs_t *VAR_13;
  apr_pool_t *VAR_14;
  apr_pool_t *VAR_15;
  apr_off_t VAR_16 = 0;
  apr_off_t VAR_17 = 0;

  *VAR_4 = ((void*)0);

  VAR_14 = FUNC_9(VAR_7);
  VAR_15 = FUNC_9(VAR_7);

  FUNC_8(&VAR_8, VAR_15);

  FUNC_0(VAR_6->datasources_open(VAR_5, &VAR_16, &VAR_17,
                                   VAR_12, 2));


  FUNC_0(FUNC_6(&VAR_9[0],
                               VAR_8,
                               VAR_5, VAR_6,
                               VAR_3,
                               VAR_16,
                               VAR_14));

  FUNC_0(FUNC_6(&VAR_9[1],
                               VAR_8,
                               VAR_5, VAR_6,
                               VAR_2,
                               VAR_16,
                               VAR_14));

  VAR_10 = FUNC_4(VAR_8);




  if (VAR_6->token_discard_all != ((void*)0))
    VAR_6->token_discard_all(VAR_5);


  FUNC_10(VAR_15);

  VAR_11[0] = FUNC_5(VAR_9[0], VAR_10,
                                               VAR_14);
  VAR_11[1] = FUNC_5(VAR_9[1], VAR_10,
                                               VAR_14);


  VAR_13 = FUNC_7(VAR_9[0], VAR_9[1], VAR_11[0],
                      VAR_11[1], VAR_10, VAR_16,
                      VAR_17, VAR_14);


  *VAR_4 = FUNC_3(VAR_13, 1, 1, VAR_1, VAR_7);


  FUNC_10(VAR_14);

  return VAR_0;
}
