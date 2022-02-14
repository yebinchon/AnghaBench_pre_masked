
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct install_baton_t* baton; } ;
typedef TYPE_2__ svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int file; } ;
struct install_baton_t {int tmp_path; TYPE_1__ baton_apr; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;

svn_error_t *
FUNC_6(svn_stream_t *VAR_2,
                           apr_pool_t *VAR_3)
{
  struct install_baton_t *VAR_4 = VAR_2->baton;
  FUNC_0(FUNC_4(VAR_4->baton_apr.file, VAR_3));

  return FUNC_2(FUNC_5(VAR_4->tmp_path, VAR_0,
                                             VAR_3));
}
