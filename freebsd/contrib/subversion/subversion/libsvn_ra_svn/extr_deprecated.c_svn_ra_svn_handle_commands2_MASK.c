
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_6__ {int terminate; int handler; scalar_t__ cmdname; } ;
typedef TYPE_1__ svn_ra_svn_cmd_entry_t ;
struct TYPE_7__ {int terminate; int deprecated_handler; int * handler; scalar_t__ cmdname; } ;
typedef TYPE_2__ svn_ra_svn__cmd_entry_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,TYPE_2__*,void*,int ) ;

svn_error_t *
FUNC_3(svn_ra_svn_conn_t *VAR_0,
                            apr_pool_t *VAR_1,
                            const svn_ra_svn_cmd_entry_t *VAR_2,
                            void *VAR_3,
                            svn_boolean_t VAR_4)
{
  apr_size_t VAR_5, VAR_6 = 0;
  svn_ra_svn__cmd_entry_t *VAR_7;

  while (VAR_2[VAR_6].cmdname)
    VAR_6++;

  VAR_7 = FUNC_0(VAR_1, VAR_6 * sizeof(*VAR_7));
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
    {
      VAR_7[VAR_5].cmdname = VAR_2[VAR_5].cmdname;
      VAR_7[VAR_5].handler = ((void*)0);
      VAR_7[VAR_5].deprecated_handler = VAR_2[VAR_5].handler;
      VAR_7[VAR_5].terminate = VAR_2[VAR_5].terminate;
    }

  return FUNC_1(FUNC_2(VAR_0, VAR_1,
                                                      VAR_7, VAR_3,
                                                      VAR_4));
}
