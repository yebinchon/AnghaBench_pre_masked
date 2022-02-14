
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int edit_baton; TYPE_1__* editor; int pool; } ;
typedef TYPE_2__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* open_root ) (int ,int ,int *,void**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_2__*,void*,int *,int ,int *) ;
 int FUNC_3 (int ,int ,int *,void**) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int const*,char*,int *,int **) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_svn_conn_t *VAR_2,
                        apr_pool_t *VAR_3,
                        const svn_ra_svn__list_t *VAR_4,
                        ra_svn_driver_state_t *VAR_5)
{
  svn_revnum_t VAR_6;
  apr_pool_t *VAR_7;
  svn_string_t *VAR_8;
  void *VAR_9;

  FUNC_1(FUNC_5(VAR_4, "(?r)s", &VAR_6, &VAR_8));
  VAR_7 = FUNC_4(VAR_5->pool);
  FUNC_0(VAR_5->editor->open_root(VAR_5->edit_baton, VAR_6, VAR_7,
                                    &VAR_9));
  FUNC_2(VAR_5, VAR_9, VAR_8, VAR_0, VAR_7);
  return VAR_1;
}
