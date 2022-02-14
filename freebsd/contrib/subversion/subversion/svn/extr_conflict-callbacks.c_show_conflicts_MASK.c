
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
struct TYPE_4__ {int ignore_eol_style; } ;
typedef TYPE_1__ svn_diff_file_options_t ;
typedef int svn_client_conflict_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const**,char const**,char const**,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int **,char const*,char const*,char const*,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,char const*,char const*,char const*,int ,int ,int ,char*,int ,int ,void*,int *) ;
 int FUNC_6 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_client_conflict_t *VAR_2,
               svn_cancel_func_t VAR_3,
               void *VAR_4,
               apr_pool_t *VAR_5)
{
  svn_diff_t *VAR_6;
  svn_stream_t *VAR_7;
  svn_diff_file_options_t *VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;

  FUNC_0(FUNC_2(((void*)0), &VAR_10,
                                                &VAR_9, &VAR_11,
                                                VAR_2, VAR_5, VAR_5));
  VAR_8 = FUNC_4(VAR_5);
  VAR_8->ignore_eol_style = VAR_0;
  FUNC_0(FUNC_6(&VAR_7, VAR_5));
  FUNC_0(FUNC_3(&VAR_6, VAR_9, VAR_10, VAR_11,
                                VAR_8, VAR_5));


  return FUNC_5(
           VAR_7, VAR_6, VAR_9, VAR_10, VAR_11,
           FUNC_1("||||||| ORIGINAL"),
           FUNC_1("<<<<<<< MINE (select with 'mc')"),
           FUNC_1(">>>>>>> THEIRS (select with 'tc')"),
           "=======",
           VAR_1,
           VAR_3,
           VAR_4,
           VAR_5);
}
