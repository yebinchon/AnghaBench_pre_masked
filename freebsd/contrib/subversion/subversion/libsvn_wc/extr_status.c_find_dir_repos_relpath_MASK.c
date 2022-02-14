
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char const* repos_relpath; } ;
typedef TYPE_4__ svn_wc_status3_t ;
struct dir_baton {int name; int local_abspath; int statii; struct dir_baton* parent_baton; TYPE_3__* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_2__* anchor_status; } ;
struct TYPE_6__ {char const* repos_relpath; } ;
struct TYPE_7__ {TYPE_1__ s; } ;


 TYPE_4__* FUNC_0 (int ,int ) ;
 char const* FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static const char *
FUNC_2(const struct dir_baton *VAR_0, apr_pool_t *VAR_1)
{

  if (! VAR_0->name)
    return VAR_0->edit_baton->anchor_status->s.repos_relpath;
  else
    {
      const char *VAR_2;
      struct dir_baton *VAR_3 = VAR_0->parent_baton;
      const svn_wc_status3_t *VAR_4 = FUNC_0(VAR_3->statii,
                                                     VAR_0->local_abspath);



      if (VAR_4 && VAR_4->repos_relpath)
        return VAR_4->repos_relpath;

      VAR_2 = FUNC_2(VAR_3, VAR_1);
      return FUNC_1(VAR_2, VAR_0->name, VAR_1);
    }
}
