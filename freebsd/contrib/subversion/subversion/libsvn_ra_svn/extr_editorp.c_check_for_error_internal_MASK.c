
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_6__ {TYPE_2__* conn; scalar_t__ got_status; } ;
typedef TYPE_1__ ra_svn_edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int may_check_for_error; scalar_t__ error_check_interval; scalar_t__ written_since_error_check; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int *,char*) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(ra_svn_edit_baton_t *VAR_3, apr_pool_t *VAR_4)
{
  svn_boolean_t VAR_5;
  FUNC_1(!VAR_3->got_status);


  VAR_3->conn->written_since_error_check = 0;


  VAR_3->conn->may_check_for_error = VAR_3->conn->error_check_interval == 0;


  FUNC_0(FUNC_4(VAR_3->conn, &VAR_5));
  if (VAR_5)
    {
      VAR_3->got_status = VAR_2;
      FUNC_0(FUNC_6(VAR_3->conn, VAR_4));
      FUNC_0(FUNC_5(VAR_3->conn, VAR_4, ""));

      return FUNC_3(VAR_0, ((void*)0),
                              FUNC_2("Successful edit status returned too soon"));
    }
  return VAR_1;
}
