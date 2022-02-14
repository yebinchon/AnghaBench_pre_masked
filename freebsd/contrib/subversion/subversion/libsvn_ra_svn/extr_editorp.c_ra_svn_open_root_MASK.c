
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int conn; } ;
typedef TYPE_1__ ra_svn_edit_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (char,TYPE_1__*,int *) ;
 void* FUNC_3 (int ,int *,TYPE_1__*,int *) ;
 int FUNC_4 (int ,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_5(void *VAR_1, svn_revnum_t VAR_2,
                                     apr_pool_t *VAR_3, void **VAR_4)
{
  ra_svn_edit_baton_t *VAR_5 = VAR_1;
  svn_string_t *VAR_6 = FUNC_2('d', VAR_5, VAR_3);

  FUNC_0(FUNC_1(VAR_5, VAR_3));
  FUNC_0(FUNC_4(VAR_5->conn, VAR_3, VAR_2, VAR_6));
  *VAR_4 = FUNC_3(VAR_5->conn, VAR_3, VAR_5, VAR_6);
  return VAR_0;
}
