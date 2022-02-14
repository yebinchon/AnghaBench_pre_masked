
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct termios {int c_lflag; int* c_cc; } ;
struct TYPE_6__ {int pool; void* restore_state; void* noecho; int osinfd; struct termios attr; int infd; } ;
typedef TYPE_1__ terminal_handle_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int *) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ const VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,char*,int,int ,int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int **,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int ) ;
 int * FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,struct termios*) ;
 scalar_t__ FUNC_11 (int ,int ,struct termios*) ;
 int VAR_18 ;
 int FUNC_12 (TYPE_1__*,int *,int *,void*,void*,int *) ;
 int VAR_19 ;

__attribute__((used)) static svn_error_t *
FUNC_13(terminal_handle_t **VAR_20, svn_boolean_t VAR_21,
              apr_pool_t *VAR_22)
{
  apr_status_t VAR_23;
  apr_file_t *VAR_24;
  VAR_23 = FUNC_3(&VAR_24, "/dev/tty",
                         VAR_0 | VAR_1,
                         VAR_2, VAR_22);
  *VAR_20 = FUNC_7(VAR_22, sizeof(terminal_handle_t));
  if (!VAR_23)
    {

      FUNC_12(*VAR_20, VAR_24, VAR_24, VAR_4, VAR_15, VAR_22);
    }

  else
    {

      apr_file_t *VAR_25;
      apr_file_t *VAR_26;

      VAR_23 = FUNC_5(&VAR_25, VAR_22);
      if (VAR_23)
        return FUNC_9(VAR_23, FUNC_2("Can't open stdin"));
      VAR_23 = FUNC_4(&VAR_26, VAR_22);
      if (VAR_23)
        return FUNC_9(VAR_23, FUNC_2("Can't open stderr"));
      FUNC_12(*VAR_20, VAR_25, VAR_26, VAR_4, VAR_4, VAR_22);
    }
  FUNC_8((*VAR_20)->pool, *VAR_20,
                            VAR_19,
                            VAR_18);
  return VAR_13;
}
