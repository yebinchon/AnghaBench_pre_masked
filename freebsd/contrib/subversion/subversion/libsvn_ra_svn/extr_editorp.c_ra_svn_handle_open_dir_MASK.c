
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int baton; int pool; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_10__ {TYPE_1__* editor; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int (* open_directory ) (char const*,int ,int ,int *,void**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,void*,int *,int ,int *) ;
 int FUNC_4 (char const*,int ,int ,int *,void**) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int const*,char*,char const**,int **,int **,int *) ;
 char* FUNC_7 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_svn_conn_t *VAR_2,
                       apr_pool_t *VAR_3,
                       const svn_ra_svn__list_t *VAR_4,
                       ra_svn_driver_state_t *VAR_5)
{
  const char *VAR_6;
  svn_string_t *VAR_7, *VAR_8;
  svn_revnum_t VAR_9;
  ra_svn_token_entry_t *VAR_10;
  apr_pool_t *VAR_11;
  void *VAR_12;

  FUNC_1(FUNC_6(VAR_4, "css(?r)", &VAR_6, &VAR_7,
                                  &VAR_8, &VAR_9));
  FUNC_1(FUNC_2(VAR_5, VAR_7, VAR_0, &VAR_10));
  VAR_11 = FUNC_5(VAR_10->pool);
  VAR_6 = FUNC_7(VAR_6, VAR_3);
  FUNC_0(VAR_5->editor->open_directory(VAR_6, VAR_10->baton, VAR_9, VAR_11,
                                         &VAR_12));
  FUNC_3(VAR_5, VAR_12, VAR_8, VAR_0, VAR_11);
  return VAR_1;
}
