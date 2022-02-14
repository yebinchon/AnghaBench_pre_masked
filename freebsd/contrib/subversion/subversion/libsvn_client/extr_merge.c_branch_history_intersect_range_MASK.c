
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int tip; int has_r0_history; int history; } ;
typedef TYPE_1__ branch_history_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int,int,int ,int *,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(branch_history_t **VAR_3,
                               const branch_history_t *VAR_4,
                               svn_revnum_t VAR_5,
                               svn_revnum_t VAR_6,
                               apr_pool_t *VAR_7,
                               apr_pool_t *VAR_8)
{
  branch_history_t *VAR_9 = FUNC_4(VAR_7, sizeof(*VAR_9));

  FUNC_1(FUNC_2(VAR_5));
  FUNC_1(FUNC_2(VAR_6));
  FUNC_1(VAR_5 >= 1);


  FUNC_1(VAR_5 <= VAR_6 + 1);

  if (VAR_5 <= VAR_6)
    {
      FUNC_0(FUNC_6(
                &VAR_9->history, VAR_4->history,
                VAR_6, VAR_5 - 1, VAR_2 ,
                VAR_7, VAR_8));
      VAR_9->history = FUNC_7(VAR_9->history, VAR_7);
    }
  else
    {
      VAR_9->history = FUNC_3(VAR_7);
    }
  VAR_9->has_r0_history = VAR_0;


  VAR_9->tip = FUNC_5(VAR_4->tip, VAR_7);

  *VAR_3 = VAR_9;
  return VAR_1;
}
