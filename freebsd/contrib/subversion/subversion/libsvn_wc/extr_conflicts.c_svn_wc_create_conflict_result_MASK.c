
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * merged_value; int save_merged; int merged_file; int choice; } ;
typedef TYPE_1__ svn_wc_conflict_result_t ;
typedef int svn_wc_conflict_choice_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;

svn_wc_conflict_result_t *
FUNC_2(svn_wc_conflict_choice_t VAR_1,
                              const char *VAR_2,
                              apr_pool_t *VAR_3)
{
  svn_wc_conflict_result_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->choice = VAR_1;
  VAR_4->merged_file = FUNC_1(VAR_3, VAR_2);
  VAR_4->save_merged = VAR_0;
  VAR_4->merged_value = ((void*)0);



  return VAR_4;
}
