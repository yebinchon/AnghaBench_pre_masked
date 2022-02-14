
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ youngest_rev_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_10__ {int pool; int path; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;

svn_error_t *
FUNC_7(svn_fs_t *VAR_1,
               const char *VAR_2,
               apr_pool_t *VAR_3)
{
  svn_fs_x__data_t *VAR_4 = VAR_1->fsap_data;
  VAR_1->path = FUNC_1(VAR_1->pool, VAR_2);


  FUNC_0(FUNC_5(VAR_1, VAR_3));


  FUNC_0(FUNC_4(VAR_1, VAR_3));


  FUNC_0(FUNC_6(VAR_1, VAR_3));


  FUNC_0(FUNC_2(VAR_4, VAR_1->path, VAR_1->pool, VAR_3));


  FUNC_0(FUNC_3(VAR_1));

  VAR_4->youngest_rev_cache = 0;

  return VAR_0;
}
