
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_string_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int pool; scalar_t__ dstream; int baton; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_9__ {TYPE_1__* editor; int file_pool; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* apply_textdelta ) (int ,char*,int ,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 int FUNC_4 (int ,char*,int ,int *,void**) ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const*,char*,int **,char**) ;
 scalar_t__ FUNC_8 (int ,void*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_ra_svn_conn_t *VAR_3,
                              apr_pool_t *VAR_4,
                              const svn_ra_svn__list_t *VAR_5,
                              ra_svn_driver_state_t *VAR_6)
{
  svn_string_t *VAR_7;
  ra_svn_token_entry_t *VAR_8;
  svn_txdelta_window_handler_t VAR_9;
  void *VAR_10;
  char *VAR_11;


  FUNC_1(FUNC_7(VAR_5, "s(?c)",
                                  &VAR_7, &VAR_11));
  FUNC_1(FUNC_3(VAR_6, VAR_7, VAR_2, &VAR_8));
  if (VAR_8->dstream)
    return FUNC_5(VAR_0, ((void*)0),
                            FUNC_2("Apply-textdelta already active"));
  VAR_8->pool = FUNC_6(VAR_6->file_pool);
  FUNC_0(VAR_6->editor->apply_textdelta(VAR_8->baton, VAR_11,
                                          VAR_8->pool, &VAR_9, &VAR_10));
  VAR_8->dstream = FUNC_8(VAR_9, VAR_10, VAR_2, VAR_8->pool);
  return VAR_1;
}
