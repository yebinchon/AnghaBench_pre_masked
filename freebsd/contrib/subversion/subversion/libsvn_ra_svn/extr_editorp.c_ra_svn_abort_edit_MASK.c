
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int conn; scalar_t__ got_status; } ;
typedef TYPE_1__ ra_svn_edit_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_3(void *VAR_1, apr_pool_t *VAR_2)
{
  ra_svn_edit_baton_t *VAR_3 = VAR_1;

  if (VAR_3->got_status)
    return VAR_0;
  FUNC_0(FUNC_2(VAR_3->conn, VAR_2));
  FUNC_0(FUNC_1(VAR_3->conn, VAR_2, ""));
  return VAR_0;
}
