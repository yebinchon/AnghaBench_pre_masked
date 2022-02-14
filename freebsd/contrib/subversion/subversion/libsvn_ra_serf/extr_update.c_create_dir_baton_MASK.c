
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {TYPE_3__* cur_dir; TYPE_1__* sess; int switched_paths; int * pool; } ;
typedef TYPE_2__ report_context_t ;
struct TYPE_9__ {int ref_count; void* copyfrom_rev; void* base_rev; void* repos_relpath; void* relpath; int base_name; struct TYPE_9__* parent_dir; TYPE_2__* ctx; int * pool; } ;
typedef TYPE_3__ dir_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int session_url_str; int repos_root_str; } ;


 void* VAR_0 ;
 int * VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,char const*) ;
 void* FUNC_2 (int ,void*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (void*,int *) ;
 void* FUNC_5 (void*,char const*,int *) ;
 void* FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(dir_baton_t **VAR_2,
                 report_context_t *VAR_3,
                 const char *VAR_4,
                 apr_pool_t *VAR_5)
{
  dir_baton_t *VAR_6 = VAR_3->cur_dir;
  apr_pool_t *VAR_7;
  dir_baton_t *VAR_8;

  if (VAR_6)
    VAR_7 = FUNC_3(VAR_6->pool);
  else
    VAR_7 = FUNC_3(VAR_3->pool);

  VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  VAR_8->pool = VAR_7;
  VAR_8->ctx = VAR_3;

  if (VAR_6)
    {
      VAR_8->parent_dir = VAR_6;
      VAR_6->ref_count++;
    }

  VAR_8->relpath = VAR_6 ? FUNC_5(VAR_6->relpath, VAR_4, VAR_7)
                        : FUNC_1(VAR_7, VAR_4);
  VAR_8->base_name = FUNC_4(VAR_8->relpath, ((void*)0));

  VAR_8->repos_relpath = FUNC_2(VAR_3->switched_paths, VAR_8->relpath);
  if (!VAR_8->repos_relpath)
    {
      if (VAR_6)
        VAR_8->repos_relpath = FUNC_5(VAR_6->repos_relpath, VAR_4,
                                              VAR_7);
      else
        VAR_8->repos_relpath = FUNC_6(VAR_3->sess->repos_root_str,
                                                   VAR_3->sess->session_url_str,
                                                   VAR_7);
    }

  VAR_8->base_rev = VAR_0;
  VAR_8->copyfrom_rev = VAR_0;

  VAR_8->ref_count = 1;

  VAR_3->cur_dir = VAR_8;

  *VAR_2 = VAR_8;
  return VAR_1;
}
