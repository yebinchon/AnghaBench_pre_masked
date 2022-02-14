
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
struct TYPE_4__ {int context_size; int show_c_function; int ignore_eol_style; } ;
typedef TYPE_1__ svn_diff_file_options_t ;
typedef int svn_client_conflict_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,int ,char const*) ;
 int FUNC_3 (char const*,char const*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char const**,int *,char const**,int *,int *,int *) ;
 int FUNC_6 (int **,char const*,char const*,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *,char const*,char const*,char const*,char const*,int ,int *,int ,int ,int ,void*,int *) ;
 int FUNC_9 (int **,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_client_conflict_t *VAR_3,
          const char *VAR_4,
          const char *VAR_5,
          svn_cancel_func_t VAR_6,
          void *VAR_7,
          apr_pool_t *VAR_8)
{
  const char *VAR_9, *VAR_10;
  const char *VAR_11, *VAR_12;
  svn_diff_t *VAR_13;
  svn_stream_t *VAR_14;
  svn_diff_file_options_t *VAR_15;
  const char *VAR_16;
  const char *VAR_17;

  FUNC_0(FUNC_5(((void*)0), &VAR_16, ((void*)0),
                                                &VAR_17,
                                                VAR_3, VAR_8, VAR_8));
  if (VAR_4)
    {
      if (FUNC_4(VAR_3) == VAR_2)
        {
          VAR_9 = VAR_16;
          VAR_11 = FUNC_1("MINE");
        }
      else
        {
          VAR_9 = VAR_17;
          VAR_11 = FUNC_1("THEIRS");
        }
      VAR_10 = VAR_4;
      VAR_12 = FUNC_1("MERGED");
    }
  else
    {


      VAR_9 = VAR_17;
      VAR_11 = FUNC_1("THEIRS");
      VAR_10 = VAR_16;
      VAR_12 = FUNC_1("MINE");
    }

  VAR_11 = FUNC_2(VAR_8, "%s\t- %s",
                        FUNC_3(
                          VAR_5, VAR_9, VAR_8), VAR_11);
  VAR_12 = FUNC_2(VAR_8, "%s\t- %s",
                        FUNC_3(
                          VAR_5, VAR_10, VAR_8), VAR_12);

  VAR_15 = FUNC_7(VAR_8);
  VAR_15->ignore_eol_style = VAR_1;
  FUNC_0(FUNC_9(&VAR_14, VAR_8));
  FUNC_0(FUNC_6(&VAR_13, VAR_9, VAR_10,
                               VAR_15, VAR_8));
  return FUNC_8(VAR_14, VAR_13,
                                       VAR_9, VAR_10,
                                       VAR_11, VAR_12,
                                       VAR_0,
                                       ((void*)0),
                                       VAR_15->show_c_function,
                                       VAR_15->context_size,
                                       VAR_6, VAR_7,
                                       VAR_8);
}
