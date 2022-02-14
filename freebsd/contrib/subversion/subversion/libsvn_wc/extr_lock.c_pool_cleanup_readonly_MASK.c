
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool; int db; scalar_t__ closed; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
struct TYPE_7__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static apr_status_t
FUNC_3(void *VAR_2)
{
  svn_wc_adm_access_t *VAR_3 = VAR_2;
  svn_error_t *VAR_4;

  if (VAR_3->closed)
    return VAR_0;




  if (FUNC_2(VAR_3->db))
    return VAR_0;




  VAR_4 = FUNC_0(VAR_3, VAR_1 , VAR_3->pool);
  if (VAR_4)
    {
      apr_status_t VAR_5 = VAR_4->apr_err;
      FUNC_1(VAR_4);
      return VAR_5;
    }

  return VAR_0;
}
