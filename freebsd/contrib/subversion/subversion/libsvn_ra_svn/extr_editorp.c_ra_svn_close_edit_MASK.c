
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int callback_baton; int (* callback ) (int ) ;int conn; scalar_t__ got_status; } ;
typedef TYPE_1__ ra_svn_edit_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_8(void *VAR_2, apr_pool_t *VAR_3)
{
  ra_svn_edit_baton_t *VAR_4 = VAR_2;
  svn_error_t *VAR_5;

  FUNC_1(!VAR_4->got_status);
  VAR_4->got_status = VAR_1;
  FUNC_0(FUNC_7(VAR_4->conn, VAR_3));
  VAR_5 = FUNC_4(FUNC_5(VAR_4->conn, VAR_3, ""));
  if (VAR_5)
    {
      return FUNC_3(
                    VAR_5,
                    FUNC_4(
                        FUNC_6(VAR_4->conn, VAR_3)));
    }
  if (VAR_4->callback)
    FUNC_0(VAR_4->callback(VAR_4->callback_baton));
  return VAR_0;
}
