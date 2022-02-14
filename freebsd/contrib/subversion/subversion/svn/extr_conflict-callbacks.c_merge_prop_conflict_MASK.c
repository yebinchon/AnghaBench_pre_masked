
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
struct TYPE_4__ {int ignore_eol_style; } ;
typedef TYPE_1__ svn_diff_file_options_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int **,int const*,int const*,int const*,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int *,int const*,int const*,int const*,int ,int ,int ,char*,int ,int ,void*,int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_stream_t *VAR_3,
                    const svn_string_t *VAR_4,
                    const svn_string_t *VAR_5,
                    const svn_string_t *VAR_6,
                    const svn_string_t *VAR_7,
                    svn_cancel_func_t VAR_8,
                    void *VAR_9,
                    apr_pool_t *VAR_10)
{
  svn_diff_file_options_t *VAR_11 = FUNC_2(VAR_10);
  svn_diff_t *VAR_12;



  if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_5(VAR_10);
  if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_5(VAR_10);
  if (VAR_6 == ((void*)0))
    VAR_6 = FUNC_5(VAR_10);

  VAR_11->ignore_eol_style = VAR_1;
  FUNC_0(FUNC_3(&VAR_12, VAR_4,
                                    VAR_7 ?
                                      VAR_7 : VAR_5,
                                    VAR_6, VAR_11, VAR_10));
  FUNC_0(FUNC_4(
            VAR_3, VAR_12, VAR_4,
            VAR_7 ? VAR_7 : VAR_5, VAR_6,
            FUNC_1("||||||| ORIGINAL"),
            FUNC_1("<<<<<<< MINE"),
            FUNC_1(">>>>>>> THEIRS"),
            "=======",
            VAR_2,
            VAR_8,
            VAR_9,
            VAR_10));

  return VAR_0;
}
