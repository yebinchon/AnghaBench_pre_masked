
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; scalar_t__ close_db_on_destroy; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_6__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_1)
{
  svn_wc_context_t *VAR_2 = VAR_1;

  if (VAR_2->close_db_on_destroy)
    {
      svn_error_t *VAR_3 = FUNC_1(VAR_2->db);
      if (VAR_3)
        {
          int VAR_4 = VAR_3->apr_err;
          FUNC_0(VAR_3);
          return VAR_4;
        }
    }

  return VAR_0;
}
