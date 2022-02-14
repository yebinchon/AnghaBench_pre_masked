
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef scalar_t__ svn_diff_conflict_display_style_t ;
struct TYPE_4__ {scalar_t__ conflict_style; int conflict_latest; int output_stream; int conflict_separator; int conflict_original; int conflict_modified; int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ svn_diff3__file_output_baton_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int * FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (void*,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_5 (int *,void*,int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_8,
                apr_off_t VAR_9, apr_off_t VAR_10,
                apr_off_t VAR_11, apr_off_t VAR_12,
                apr_off_t VAR_13, apr_off_t VAR_14,
                svn_diff_t *VAR_15)
{
  svn_diff3__file_output_baton_t *VAR_16 = VAR_8;

  svn_diff_conflict_display_style_t VAR_17 = VAR_16->conflict_style;

  if (VAR_17 == VAR_6)
    return FUNC_2(VAR_16,
                                        VAR_9, VAR_10,
                                        VAR_11, VAR_12,
                                        VAR_13, VAR_14);

  if (VAR_17 == VAR_7)
    {
      if (VAR_15)
        return FUNC_5(VAR_15, VAR_8,
                                &VAR_1,
                                VAR_16->cancel_func,
                                VAR_16->cancel_baton);
      else
        VAR_17 = VAR_4;
    }

  if (VAR_17 == VAR_4 ||
      VAR_17 == VAR_5)
    {
      FUNC_0(FUNC_6(VAR_16->output_stream,
                               VAR_16->conflict_modified));
      FUNC_0(FUNC_4(VAR_16));

      FUNC_0(FUNC_3(VAR_8, 1, VAR_11, VAR_12));

      if (VAR_17 == VAR_5)
        {
          FUNC_0(FUNC_6(VAR_16->output_stream,
                                   VAR_16->conflict_original));
          FUNC_0(FUNC_4(VAR_16));
          FUNC_0(FUNC_3(VAR_8, 0, VAR_9, VAR_10));
        }

      FUNC_0(FUNC_6(VAR_16->output_stream,
                              VAR_16->conflict_separator));
      FUNC_0(FUNC_4(VAR_16));

      FUNC_0(FUNC_3(VAR_8, 2, VAR_13, VAR_14));

      FUNC_0(FUNC_6(VAR_16->output_stream,
                              VAR_16->conflict_latest));
      FUNC_0(FUNC_4(VAR_16));
    }
  else if (VAR_17 == VAR_3)
    FUNC_0(FUNC_3(VAR_8, 1, VAR_11, VAR_12));
  else if (VAR_17 == VAR_2)
    FUNC_0(FUNC_3(VAR_8, 2, VAR_13, VAR_14));
  else
    FUNC_1();

  return VAR_0;
}
