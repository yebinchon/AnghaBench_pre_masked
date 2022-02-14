
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int (* close_edit ) (void*,int *) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
struct replay_baton {int quiet; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (int ,int *,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_revnum_t VAR_2,
              void *VAR_3,
              const svn_delta_editor_t *VAR_4,
              void *VAR_5,
              apr_hash_t *VAR_6,
              apr_pool_t *VAR_7)
{

  struct replay_baton *VAR_8 = VAR_3;

  FUNC_0(VAR_4->close_edit(VAR_5, VAR_7));

  if (! VAR_8->quiet)
    FUNC_0(FUNC_2(VAR_1, VAR_7, "* Dumped revision %lu.\n",
                                VAR_2));
  return VAR_0;
}
