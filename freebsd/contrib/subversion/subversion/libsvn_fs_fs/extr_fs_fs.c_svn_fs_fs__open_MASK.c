
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pool; int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ format; scalar_t__ youngest_rev_cache; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

svn_error_t *
FUNC_7(svn_fs_t *VAR_2, const char *VAR_3, apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_2->fsap_data;
  VAR_2->path = FUNC_1(VAR_2->pool, VAR_3);


  FUNC_0(FUNC_5(VAR_2, VAR_4));


  FUNC_0(FUNC_4(VAR_2, VAR_4));


  if (VAR_5->format >= VAR_0)
    FUNC_0(FUNC_6(VAR_2, VAR_4));


  FUNC_0(FUNC_2(VAR_5, VAR_2->path, VAR_2->pool, VAR_4));


  FUNC_0(FUNC_3(VAR_2));

  VAR_5->youngest_rev_cache = 0;

  return VAR_1;
}
