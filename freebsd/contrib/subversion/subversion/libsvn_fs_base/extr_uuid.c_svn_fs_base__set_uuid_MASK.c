
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; int uuid; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct set_uuid_args {int idx; char const* uuid; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,struct set_uuid_args*,int ,int *) ;
 char* FUNC_4 (int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_5(svn_fs_t *VAR_3,
                      const char *VAR_4,
                      apr_pool_t *VAR_5)
{
  struct set_uuid_args VAR_6;

  FUNC_0(FUNC_2(VAR_3, VAR_1));

  if (! VAR_4)
    VAR_4 = FUNC_4(VAR_5);

  VAR_6.idx = 1;
  VAR_6.uuid = VAR_4;
  FUNC_0(FUNC_3(VAR_3, VAR_2, &VAR_6, VAR_1, VAR_5));


  if (VAR_4)
    VAR_3->uuid = FUNC_1(VAR_3->pool, VAR_4);

  return VAR_0;
}
