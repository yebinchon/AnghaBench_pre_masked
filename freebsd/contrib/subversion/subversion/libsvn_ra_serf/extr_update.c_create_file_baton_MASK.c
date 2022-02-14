
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {TYPE_2__* cur_file; int switched_paths; TYPE_3__* cur_dir; } ;
typedef TYPE_1__ report_context_t ;
struct TYPE_8__ {void* copyfrom_rev; void* base_rev; void* repos_relpath; void* relpath; int base_name; TYPE_3__* parent_dir; int * pool; } ;
typedef TYPE_2__ file_baton_t ;
struct TYPE_9__ {int repos_relpath; int relpath; int ref_count; int pool; } ;
typedef TYPE_3__ dir_baton_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int ,void*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (void*,int *) ;
 void* FUNC_4 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(file_baton_t **VAR_2,
                  report_context_t *VAR_3,
                  const char *VAR_4,
                  apr_pool_t *VAR_5)
{
  dir_baton_t *VAR_6 = VAR_3->cur_dir;
  apr_pool_t *VAR_7;
  file_baton_t *VAR_8;

  VAR_7 = FUNC_2(VAR_6->pool);

  VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->pool = VAR_7;

  VAR_8->parent_dir = VAR_6;
  VAR_6->ref_count++;

  VAR_8->relpath = FUNC_4(VAR_6->relpath, VAR_4, VAR_7);
  VAR_8->base_name = FUNC_3(VAR_8->relpath, ((void*)0));

  VAR_8->repos_relpath = FUNC_1(VAR_3->switched_paths, VAR_8->relpath);
  if (!VAR_8->repos_relpath)
    VAR_8->repos_relpath = FUNC_4(VAR_6->repos_relpath, VAR_4,
                                           VAR_7);


  VAR_8->base_rev = VAR_0;
  VAR_8->copyfrom_rev = VAR_0;

  *VAR_2 = VAR_8;

  VAR_3->cur_file = VAR_8;

  return VAR_1;
}
