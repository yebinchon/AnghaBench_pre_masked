
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ output_stream; scalar_t__ context_size; scalar_t__ real_output_stream; int conflict_latest; int marker_eol; int conflict_separator; int pool; int conflict_original; int conflict_modified; TYPE_6__* context_saver; } ;
typedef TYPE_1__ svn_diff3__file_output_baton_t ;
typedef int apr_off_t ;
struct TYPE_8__ {scalar_t__ stream; scalar_t__ total_writes; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,char*,int ,int ) ;
 int FUNC_6 (scalar_t__,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_diff3__file_output_baton_t *VAR_1,
                             apr_off_t VAR_2,
                             apr_off_t VAR_3,
                             apr_off_t VAR_4,
                             apr_off_t VAR_5,
                             apr_off_t VAR_6,
                             apr_off_t VAR_7)
{


  if (VAR_1->output_stream == VAR_1->context_saver->stream)
    {
      if (VAR_1->context_saver->total_writes > VAR_1->context_size)
        FUNC_0(FUNC_6(VAR_1->real_output_stream, "@@\n"));
      FUNC_0(FUNC_1(VAR_1->context_saver, VAR_1->real_output_stream));
    }


  VAR_1->output_stream = VAR_1->real_output_stream;


  FUNC_0(FUNC_3(VAR_1, VAR_1->conflict_modified,
                                              VAR_4, VAR_5));
  FUNC_0(FUNC_4(VAR_1, 1 , VAR_4, VAR_5));

  FUNC_0(FUNC_3(VAR_1, VAR_1->conflict_original,
                                              VAR_2, VAR_3));
  FUNC_0(FUNC_4(VAR_1, 0 , VAR_2, VAR_3));

  FUNC_0(FUNC_5(VAR_1->output_stream, VAR_1->pool,
                            "%s%s", VAR_1->conflict_separator, VAR_1->marker_eol));
  FUNC_0(FUNC_4(VAR_1, 2 , VAR_6, VAR_7));
  FUNC_0(FUNC_3(VAR_1, VAR_1->conflict_latest,
                                              VAR_6, VAR_7));


  FUNC_2(VAR_1);

  return VAR_0;
}
