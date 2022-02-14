
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int pool; int conn; int edit_baton; int editor; int sess_baton; } ;
typedef TYPE_1__ ra_svn_reporter_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_5(void *VAR_2,
                                         apr_pool_t *VAR_3)
{
  ra_svn_reporter_baton_t *VAR_4 = VAR_2;

  FUNC_0(FUNC_3(VAR_4->conn, VAR_4->pool));
  FUNC_0(FUNC_1(VAR_4->sess_baton, VAR_4->pool));
  FUNC_0(FUNC_4(VAR_4->conn, VAR_4->pool, VAR_4->editor, VAR_4->edit_baton,
                                   ((void*)0), VAR_0));
  FUNC_0(FUNC_2(VAR_4->conn, VAR_4->pool, ""));
  return VAR_1;
}
