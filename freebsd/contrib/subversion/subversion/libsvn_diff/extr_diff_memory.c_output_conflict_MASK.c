
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef scalar_t__ svn_diff_conflict_display_style_t ;
struct TYPE_4__ {scalar_t__ conflict_style; int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ merge_output_baton_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_4 (int *,void*,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_7,
                apr_off_t VAR_8, apr_off_t VAR_9,
                apr_off_t VAR_10, apr_off_t VAR_11,
                apr_off_t VAR_12, apr_off_t VAR_13,
                svn_diff_t *VAR_14)
{
  merge_output_baton_t *VAR_15 = VAR_7;

  svn_diff_conflict_display_style_t VAR_16 = VAR_15->conflict_style;

  if (VAR_16 == VAR_6)
    {
      if (VAR_14)
        return FUNC_4(VAR_14, VAR_7, &VAR_1,
                                VAR_15->cancel_func, VAR_15->cancel_baton);
      else
        VAR_16 = VAR_4;
    }

  if (VAR_16 == VAR_4 ||
      VAR_16 == VAR_5)
    {
      FUNC_0(FUNC_2(VAR_15, 1 ));
      FUNC_0(FUNC_3(VAR_15, 1 ,
                                       VAR_10, VAR_11));

      if (VAR_16 == VAR_5)
        {
          FUNC_0(FUNC_2(VAR_15, 0 ));
          FUNC_0(FUNC_3(VAR_15, 0 ,
                                           VAR_8, VAR_9));
        }

      FUNC_0(FUNC_2(VAR_15, 2 ));
      FUNC_0(FUNC_3(VAR_15, 2 ,
                                       VAR_12, VAR_13));
      FUNC_0(FUNC_2(VAR_15, 3 ));
    }
  else if (VAR_16 == VAR_3)
      FUNC_0(FUNC_3(VAR_15, 1 ,
                                       VAR_10, VAR_11));
  else if (VAR_16 == VAR_2)
      FUNC_0(FUNC_3(VAR_15, 2 ,
                                       VAR_12, VAR_13));
  else
    FUNC_1();

  return VAR_0;
}
